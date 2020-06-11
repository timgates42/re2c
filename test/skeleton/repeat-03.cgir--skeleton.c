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

static int action_line18_r1
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
            , "warning: lex_line18_r1: control flow is undefined"
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
            , "error: lex_line18_r1: at position %ld (key %u):\n"
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

static int check_key_count_line18_r1
    ( unsigned have
    , unsigned used
    , unsigned need
    )
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line18_r1: not enough keys\n");
    return 1;
}

int lex_line18_r1()
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
        ( "skeleton/repeat-03.cgir--skeleton.c.line18_r1.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/repeat-03.cgir--skeleton.c.line18_r1.keys"
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
                &&yy3,  &&yy7,  &&yy9,  &&yy11, &&yy3,  &&yy3,  &&yy3,  &&yy3,
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
        status = check_key_count_line18_r1(keys_count, i, 3)
             || action_line18_r1(&i, keys, input, token, &cursor, 4);
        continue;
yy5:
        YYSKIP();
        status = check_key_count_line18_r1(keys_count, i, 3)
             || action_line18_r1(&i, keys, input, token, &cursor, 2);
        continue;
yy7:
        YYSKIP();
        status = check_key_count_line18_r1(keys_count, i, 3)
             || action_line18_r1(&i, keys, input, token, &cursor, 3);
        continue;
yy9:
        YYSKIP();
        status = check_key_count_line18_r1(keys_count, i, 3)
             || action_line18_r1(&i, keys, input, token, &cursor, 0);
        continue;
yy11:
        YYSKIP();
        status = check_key_count_line18_r1(keys_count, i, 3)
             || action_line18_r1(&i, keys, input, token, &cursor, 1);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line18_r1: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line18_r1: unused keys left after %u keys\n", i);
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

static int action_line18_r2
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
            , "warning: lex_line18_r2: control flow is undefined"
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
            , "error: lex_line18_r2: at position %ld (key %u):\n"
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

static int check_key_count_line18_r2
    ( unsigned have
    , unsigned used
    , unsigned need
    )
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line18_r2: not enough keys\n");
    return 1;
}

int lex_line18_r2()
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
        ( "skeleton/repeat-03.cgir--skeleton.c.line18_r2.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/repeat-03.cgir--skeleton.c.line18_r2.keys"
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
        if (yych <= '`') {
            if (yych != '\n') goto yy16;
        } else {
            if (yych <= 'a') goto yy18;
            if (yych == 'c') goto yy20;
            goto yy16;
        }
yy16:
        YYSKIP();
        status = check_key_count_line18_r2(keys_count, i, 3)
             || action_line18_r2(&i, keys, input, token, &cursor, 2);
        continue;
yy18:
        YYSKIP();
        status = check_key_count_line18_r2(keys_count, i, 3)
             || action_line18_r2(&i, keys, input, token, &cursor, 1);
        continue;
yy20:
        YYSKIP();
        status = check_key_count_line18_r2(keys_count, i, 3)
             || action_line18_r2(&i, keys, input, token, &cursor, 0);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line18_r2: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line18_r2: unused keys left after %u keys\n", i);
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

static int action_line28_r1
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
            , "warning: lex_line28_r1: control flow is undefined"
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
            , "error: lex_line28_r1: at position %ld (key %u):\n"
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

static int check_key_count_line28_r1
    ( unsigned have
    , unsigned used
    , unsigned need
    )
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line28_r1: not enough keys\n");
    return 1;
}

int lex_line28_r1()
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
        ( "skeleton/repeat-03.cgir--skeleton.c.line28_r1.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/repeat-03.cgir--skeleton.c.line28_r1.keys"
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
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy24, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy27, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy29, &&yy31, &&yy33, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25,
                &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25, &&yy25
            };
            goto *yytarget[yych];
        }
yy24:
yy25:
        YYSKIP();
        status = check_key_count_line28_r1(keys_count, i, 3)
             || action_line28_r1(&i, keys, input, token, &cursor, 4);
        continue;
yy27:
        YYSKIP();
        status = check_key_count_line28_r1(keys_count, i, 3)
             || action_line28_r1(&i, keys, input, token, &cursor, 2);
        continue;
yy29:
        YYSKIP();
        status = check_key_count_line28_r1(keys_count, i, 3)
             || action_line28_r1(&i, keys, input, token, &cursor, 3);
        continue;
yy31:
        YYSKIP();
        status = check_key_count_line28_r1(keys_count, i, 3)
             || action_line28_r1(&i, keys, input, token, &cursor, 0);
        continue;
yy33:
        YYSKIP();
        status = check_key_count_line28_r1(keys_count, i, 3)
             || action_line28_r1(&i, keys, input, token, &cursor, 1);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line28_r1: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line28_r1: unused keys left after %u keys\n", i);
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

static int action_line28_r2
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
            , "warning: lex_line28_r2: control flow is undefined"
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
            , "error: lex_line28_r2: at position %ld (key %u):\n"
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

static int check_key_count_line28_r2
    ( unsigned have
    , unsigned used
    , unsigned need
    )
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line28_r2: not enough keys\n");
    return 1;
}

int lex_line28_r2()
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
        ( "skeleton/repeat-03.cgir--skeleton.c.line28_r2.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/repeat-03.cgir--skeleton.c.line28_r2.keys"
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
        if (yych <= '`') {
            if (yych != '\n') goto yy38;
        } else {
            if (yych <= 'a') goto yy40;
            if (yych == 'c') goto yy42;
            goto yy38;
        }
yy38:
        YYSKIP();
        status = check_key_count_line28_r2(keys_count, i, 3)
             || action_line28_r2(&i, keys, input, token, &cursor, 2);
        continue;
yy40:
        YYSKIP();
        status = check_key_count_line28_r2(keys_count, i, 3)
             || action_line28_r2(&i, keys, input, token, &cursor, 1);
        continue;
yy42:
        YYSKIP();
        status = check_key_count_line28_r2(keys_count, i, 3)
             || action_line28_r2(&i, keys, input, token, &cursor, 0);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line28_r2: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line28_r2: unused keys left after %u keys\n", i);
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
    if (lex_line18_r1() != 0) {
        return 1;
    }
    if (lex_line18_r2() != 0) {
        return 1;
    }
    if (lex_line28_r1() != 0) {
        return 1;
    }
    if (lex_line28_r2() != 0) {
        return 1;
    }
    return 0;
}
 	 !"#$%&'()*+,-./023456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`defghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������1abc
  � 	 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`bdefghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������ac
  � 	 !"#$%&'()*+,-./013456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`defghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������2abc
  � 	 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`bdefghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������ac
  �skeleton/repeat-03.cgir--skeleton.re:18:2: warning: control flow in condition 'r1' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
skeleton/repeat-03.cgir--skeleton.re:18:2: warning: control flow in condition 'r2' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
skeleton/repeat-03.cgir--skeleton.re:28:2: warning: control flow in condition 'r1' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
skeleton/repeat-03.cgir--skeleton.re:28:2: warning: control flow in condition 'r2' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
