#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>

#include "config.h"
#include "src/codegen/code.h"
#include "src/msg/msg.h"
#include "src/msg/warn.h"
#include "src/options/opt.h"
#include "src/encoding/enc.h"
#include "src/util/string_utils.h"
#include "src/util/temp_file.h"
#include "src/util/uniq_vector.h"


namespace re2c {

static uint32_t write_converting_newlines(const std::string &str, FILE *f)
{
    const char *s = str.c_str(), *e = s + str.length();
    uint32_t lines = 0;

    // In order to maintain consistency we convert all newlines to LF when
    // writing output to file. Some newlines originate in user-defined code
    // (including semantic actions and code fragments in configurations and
    // directives), and some are generated by re2c itself.
    for (const char *p = s;; ++p) {
        size_t l = static_cast<size_t>(p - s);
        if (p == e) {
            fwrite(s, 1, l, f);
            break;
        } else if (*p == '\n') {
            ++lines;
            if (p > s && p[-1] == '\r') --l;
            fwrite(s, 1, l, f);
            s = p;
        }
    }

    return lines;
}

OutputBlock::OutputBlock(const loc_t &loc, bool reuse)
    : loc(loc)
    , fragments()
    , used_yyaccept(false)
    , have_user_code(false)
    , is_reuse_block(reuse)
    , types()
    , stags()
    , mtags()
    , opts(NULL)
    , fill_index(0)
    , fill_goto()
{}

OutputBlock::~OutputBlock ()
{
    delete opts;
}

Output::Output(Msg &msg)
    : cblocks()
    , hblocks()
    , pblocks(&cblocks)
    , label_counter(0)
    , state_goto(false)
    , cond_enum_in_hdr(false)
    , cond_goto(false)
    , warn_condition_order(true)
    , need_header(false)
    , msg(msg)
    , skeletons()
    , max_fill(1)
    , max_nmatch(1)
    , allocator()
    , scratchbuf(allocator)
    , total_fill_index(0)
    , total_fill_goto()
    , total_opts(NULL)
{}

Output::~Output ()
{
    for (uint32_t i = 0; i < cblocks.size(); ++i) delete cblocks[i];
    for (uint32_t i = 0; i < hblocks.size(); ++i) delete hblocks[i];
}

void Output::header_mode(bool on)
{
    pblocks = on ? &hblocks : &cblocks;
}

bool Output::in_header() const
{
    return pblocks == &hblocks;
}

OutputBlock& Output::block()
{
    return *pblocks->back();
}

size_t Output::blockid() const
{
    return (in_header() ? hblocks.size() : cblocks.size()) - 1;
}

void Output::wraw(const char *s, const char *e)
{
    if (s != e && block().opts->target == TARGET_CODE) {
        // scan for non-whitespace characters
        bool &code = block().have_user_code;
        for (const char *p = s; !code && p < e; ++p) {
            code = !isspace(*p);
        }
        wdelay_stmt(0, code_raw(allocator, s, static_cast<size_t>(e - s)));
    }
}

void Output::wversion_time()
{
    output_version_time(scratchbuf.stream(), block().opts);
    wdelay_stmt(0, code_textraw(allocator, scratchbuf.flush()));
}

void Output::wdelay_stmt(uint32_t ind, Code *stmt)
{
    OutputFragment f = {stmt, ind};
    block().fragments.push_back(f);
}

void Output::new_block(Opt &opts, const loc_t &loc, bool reuse)
{
    OutputBlock *b = new OutputBlock(loc, reuse);
    b->opts = opts.snapshot();
    b->fill_index = reuse ? 0 : total_fill_index;
    pblocks->push_back(b);

    // start label hapens to be the only option
    // that must be reset for each new block
    opts.reset_startlabel();
}

void Output::gather_info_from_block()
{
    DASSERT(!pblocks->empty());

    const OutputBlock *b = pblocks->back();
    if (!b->is_reuse_block) {
        total_fill_index = b->fill_index;
        total_fill_goto.insert(total_fill_goto.end(),
            b->fill_goto.begin(), b->fill_goto.end());
    }
}

static void fix_first_block_opts(blocks_t &blocks)
{
    // If the initial block contains only whitespace and no user code,
    // then re2c options specified in the first re2c block are also
    // applied to the initial block.
    if (blocks.size() >= 2) {
        OutputBlock *fst = blocks[0], *snd = blocks[1];
        if (!fst->have_user_code) {
            *const_cast<opt_t *>(fst->opts) = *snd->opts;
        }
    }
}

bool Output::emit_blocks(const std::string &fname, blocks_t &blocks,
    const uniq_vector_t<std::string> &global_types,
    const std::set<std::string> &global_stags,
    const std::set<std::string> &global_mtags)
{
    FILE *file = NULL, *temp = NULL;
    std::string filename = fname, tempname = fname;

    if (filename.empty()) {
        filename = "<stdout>";
        file = stdout;
    }
    else if ((temp = temp_file(tempname))) {
        file = temp;
    }
    else if (!(file = fopen(filename.c_str(), "w"))) {
        error("cannot open output file %s", filename.c_str());
        return false;
    }

    fix_first_block_opts(blocks);

    unsigned int line_count = 1;
    for (unsigned int j = 0; j < blocks.size(); ++j) {
        OutputBlock &b = *blocks[j];

        CodegenContext gctx =
            { allocator
            , scratchbuf
            , b.is_reuse_block ? b.opts : total_opts
            , b.opts
            , msg
            , b.loc
            , global_types
            , global_stags
            , global_mtags
            , b.types
            , max_fill
            , max_nmatch
            , b.used_yyaccept
            , warn_condition_order
            , b.is_reuse_block ? b.fill_index : total_fill_index
            , b.is_reuse_block ? b.fill_goto : total_fill_goto
            };

        const size_t n = b.fragments.size();
        for (size_t i = 0; i < n; ++i) {
            OutputFragment &f = b.fragments[i];
            std::ostringstream os;

            RenderContext rctx =
                { os
                , b.opts
                , msg
                , f.indent
                , filename.c_str()
                , line_count
                };

            expand(gctx, f.code);
            combine(gctx, f.code);
            render(rctx, f.code);
            write_converting_newlines(os.str(), file);
        }
    }

    fclose(file);
    if (temp && !overwrite_file(tempname.c_str(), fname.c_str())) {
        error("cannot rename or write temporary file %s to output file %s"
            , tempname.c_str(), fname.c_str());
        remove(tempname.c_str());
        return false;
    }
    return true;
}

static void add_symbols(const OutputBlock &block,
    uniq_vector_t<std::string> &conds,
    std::set<std::string> &stags,
    std::set<std::string> &mtags)
{
    const std::vector<std::string> &cs = block.types;
    for (size_t j = 0; j < cs.size(); ++j) {
        conds.find_or_add(cs[j]);
    }

    const std::set<std::string> &st = block.stags, &mt = block.mtags;
    stags.insert(st.begin(), st.end());
    mtags.insert(mt.begin(), mt.end());
}

bool Output::emit()
{
    if (msg.warn.error()) return false;

    // gather global lists of conditions and tags
    uniq_vector_t<std::string> conds;
    std::set<std::string> stags, mtags;
    for (uint32_t i = 0; i < cblocks.size(); ++i) {
        add_symbols (*cblocks[i], conds, stags, mtags);
    }
    for (uint32_t i = 0; i < hblocks.size(); ++i) {
        add_symbols (*hblocks[i], conds, stags, mtags);
    }

    // global options are last block's options
    const opt_t *opts = block().opts;
    bool ok = true;

    // emit .h file
    if (!opts->header_file.empty() || need_header) {
        // old-style -t, --type-headers usage implies condition generation
        if (!conds.empty() && !this->cond_enum_in_hdr) {
            header_mode(true);
            wdelay_stmt(0, code_newline(allocator));
            wdelay_stmt(0, code_cond_enum(allocator));
            header_mode(false);
        }

        ok &= emit_blocks(opts->header_file, hblocks, conds, stags, mtags);
    }

    // emit .c file
    ok &= emit_blocks(opts->output_file, cblocks, conds, stags, mtags);

    return ok;
}

void output_version_time(std::ostream &os, const opt_t *opts)
{
    os << (opts->lang == LANG_GO ? "// Code generated" : "/* Generated") << " by re2c";
    if (opts->version) {
        os << " " << PACKAGE_VERSION;
    }
    if (!opts->bNoGenerationDate) {
        os << " on ";
        time_t now = time(NULL);
        os.write(ctime(&now), 24);
    }
    os << (opts->lang == LANG_GO ? ", DO NOT EDIT." : " */");
}

Scratchbuf& Scratchbuf::yybm_char(uint32_t u, const opt_t *opts, int width)
{
    if (opts->yybmHexTable) {
        prtHex(os, u, opts->encoding.szCodeUnit());
    }
    else {
        u32_width(u, width);
    }
    return *this;
}

Scratchbuf& Scratchbuf::u32_width(uint32_t u, int width)
{
    os << std::setw(width);
    os << u;
    return *this;
}

Scratchbuf& Scratchbuf::exact_uint(size_t width)
{
    if (width == sizeof(char)) {
        os << "unsigned char";
    }
    else if (width == sizeof(short)) {
        os << "unsigned short";
    }
    else if (width == sizeof(int)) {
        os << "unsigned int";
    }
    else if (width == sizeof(long)) {
        os << "unsigned long";
    }
    else {
        os << "uint" << width * 8 << "_t";
    }
    return *this;
}

const char *Scratchbuf::flush()
{
    const size_t len = os.str().length();
    char *e = alc.alloct<char>(len + 1);
    memcpy(e, os.str().c_str(), len);
    e[len] = 0;
    os.str("");
    return e;
}

} // namespace re2c
