/* Generated by re2c */

#include <stddef.h> /* size_t */
#include <stdio.h>
#include <stdlib.h> /* malloc, free */
#include <string.h> /* memcpy */

static void *read_file
    ( const char *fname
    , size_t unit
    , size_t padding
    , size_t *pfsize
    )
{
    void *buffer = NULL;
    size_t fsize = 0;

    /* open file */
    FILE *f = fopen(fname, "rb");
    if (f == NULL) {
        goto error;
    }

    /* get file size */
    fseek(f, 0, SEEK_END);
    fsize = (size_t) ftell(f) / unit;
    fseek(f, 0, SEEK_SET);

    /* allocate memory for file and padding */
    buffer = malloc(unit * (fsize + padding));
    if (buffer == NULL) {
        goto error;
    }

    /* read the whole file in memory */
    if (fread(buffer, unit, fsize, f) != fsize) {
        goto error;
    }

    fclose(f);
    *pfsize = fsize;
    return buffer;

error:
    fprintf(stderr, "error: cannot read file '%s'\n", fname);
    free(buffer);
    if (f != NULL) {
        fclose(f);
    }
    return NULL;
}

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYSHIFT(o) cursor += o
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line24
    ( unsigned *pkix
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const unsigned kix = *pkix;
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys[kix + 1];
    const YYKEYTYPE rule_exp = keys[kix + 2];
    *pkix = kix + 3;
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line24: control flow is undefined"
                " for input at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[kix];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line24: at position %ld (key %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , kix
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

static int check_key_count_line24(unsigned have, unsigned used, unsigned need)
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line24: not enough keys\n");
    return 1;
}

int lex_line24()
{
    const size_t padding = 1; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ( "skeleton/repeat-06.gir--skeleton.c.line24.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/repeat-06.gir--skeleton.c.line24.keys"
        , sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && cursor < eof && i < keys_count;) {
        token = cursor;
        YYCTYPE yych;

        if (YYLESSTHAN(1)) YYFILL(1);
        yych = YYPEEK();
        {
            static void *yytarget[256] = {
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy2,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy5,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy7,  &&yy9,  &&yy11, &&yy13, &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3
            };
            goto *yytarget[yych];
        }
yy2:
yy3:
        YYSKIP();
        status = check_key_count_line24(keys_count, i, 3)
             || action_line24(&i, keys, input, token, &cursor, 5);
        continue;
yy5:
        YYSKIP();
        status = check_key_count_line24(keys_count, i, 3)
             || action_line24(&i, keys, input, token, &cursor, 4);
        continue;
yy7:
        YYSKIP();
        status = check_key_count_line24(keys_count, i, 3)
             || action_line24(&i, keys, input, token, &cursor, 0);
        continue;
yy9:
        YYSKIP();
        status = check_key_count_line24(keys_count, i, 3)
             || action_line24(&i, keys, input, token, &cursor, 1);
        continue;
yy11:
        YYSKIP();
        status = check_key_count_line24(keys_count, i, 3)
             || action_line24(&i, keys, input, token, &cursor, 2);
        continue;
yy13:
        YYSKIP();
        status = check_key_count_line24(keys_count, i, 3)
             || action_line24(&i, keys, input, token, &cursor, 3);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line24: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line24: unused keys left after %u keys\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYLESSTHAN
#undef YYFILL

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYSHIFT(o) cursor += o
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line39
    ( unsigned *pkix
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const unsigned kix = *pkix;
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys[kix + 1];
    const YYKEYTYPE rule_exp = keys[kix + 2];
    *pkix = kix + 3;
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line39: control flow is undefined"
                " for input at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[kix];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line39: at position %ld (key %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , kix
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

static int check_key_count_line39(unsigned have, unsigned used, unsigned need)
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line39: not enough keys\n");
    return 1;
}

int lex_line39()
{
    const size_t padding = 1; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ( "skeleton/repeat-06.gir--skeleton.c.line39.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/repeat-06.gir--skeleton.c.line39.keys"
        , sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && cursor < eof && i < keys_count;) {
        token = cursor;
        YYCTYPE yych;

        if (YYLESSTHAN(1)) YYFILL(1);
        yych = YYPEEK();
        {
            static void *yytarget[256] = {
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy17, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy20, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy22, &&yy24, &&yy26, &&yy28, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
                &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18
            };
            goto *yytarget[yych];
        }
yy17:
yy18:
        YYSKIP();
        status = check_key_count_line39(keys_count, i, 3)
             || action_line39(&i, keys, input, token, &cursor, 5);
        continue;
yy20:
        YYSKIP();
        status = check_key_count_line39(keys_count, i, 3)
             || action_line39(&i, keys, input, token, &cursor, 4);
        continue;
yy22:
        YYSKIP();
        status = check_key_count_line39(keys_count, i, 3)
             || action_line39(&i, keys, input, token, &cursor, 0);
        continue;
yy24:
        YYSKIP();
        status = check_key_count_line39(keys_count, i, 3)
             || action_line39(&i, keys, input, token, &cursor, 1);
        continue;
yy26:
        YYSKIP();
        status = check_key_count_line39(keys_count, i, 3)
             || action_line39(&i, keys, input, token, &cursor, 2);
        continue;
yy28:
        YYSKIP();
        status = check_key_count_line39(keys_count, i, 3)
             || action_line39(&i, keys, input, token, &cursor, 3);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line39: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line39: unused keys left after %u keys\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYLESSTHAN
#undef YYFILL

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYSHIFT(o) cursor += o
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line54
    ( unsigned *pkix
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const unsigned kix = *pkix;
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys[kix + 1];
    const YYKEYTYPE rule_exp = keys[kix + 2];
    *pkix = kix + 3;
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line54: control flow is undefined"
                " for input at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[kix];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line54: at position %ld (key %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , kix
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

static int check_key_count_line54(unsigned have, unsigned used, unsigned need)
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line54: not enough keys\n");
    return 1;
}

int lex_line54()
{
    const size_t padding = 1; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ( "skeleton/repeat-06.gir--skeleton.c.line54.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/repeat-06.gir--skeleton.c.line54.keys"
        , sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && cursor < eof && i < keys_count;) {
        token = cursor;
        YYCTYPE yych;

        if (YYLESSTHAN(1)) YYFILL(1);
        yych = YYPEEK();
        {
            static void *yytarget[256] = {
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy32, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy35, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy37, &&yy39, &&yy41, &&yy43, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33,
                &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33, &&yy33
            };
            goto *yytarget[yych];
        }
yy32:
yy33:
        YYSKIP();
        status = check_key_count_line54(keys_count, i, 3)
             || action_line54(&i, keys, input, token, &cursor, 5);
        continue;
yy35:
        YYSKIP();
        status = check_key_count_line54(keys_count, i, 3)
             || action_line54(&i, keys, input, token, &cursor, 4);
        continue;
yy37:
        YYSKIP();
        status = check_key_count_line54(keys_count, i, 3)
             || action_line54(&i, keys, input, token, &cursor, 0);
        continue;
yy39:
        YYSKIP();
        status = check_key_count_line54(keys_count, i, 3)
             || action_line54(&i, keys, input, token, &cursor, 1);
        continue;
yy41:
        YYSKIP();
        status = check_key_count_line54(keys_count, i, 3)
             || action_line54(&i, keys, input, token, &cursor, 2);
        continue;
yy43:
        YYSKIP();
        status = check_key_count_line54(keys_count, i, 3)
             || action_line54(&i, keys, input, token, &cursor, 3);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line54: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line54: unused keys left after %u keys\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYLESSTHAN
#undef YYFILL

int main()
{
    if (lex_line24() != 0) {
        return 1;
    }
    if (lex_line39() != 0) {
        return 1;
    }
    if (lex_line54() != 0) {
        return 1;
    }
    return 0;
}
 	 !"#$%&'()*+,-./023456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`efghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������1abcd
  � 	 !"#$%&'()*+,-./013456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`efghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������2abcd
  � 	 !"#$%&'()*+,-./012456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`efghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������3abcd
  �skeleton/repeat-06.gir--skeleton.re:24:2: warning: control flow is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
skeleton/repeat-06.gir--skeleton.re:39:2: warning: control flow is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
skeleton/repeat-06.gir--skeleton.re:54:2: warning: control flow is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
