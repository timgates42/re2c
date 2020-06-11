/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static inline unsigned parse_oct(const char *s, const char *e)
{
    unsigned oct = 0;
    for (; s != e; ++s) {
        oct = oct * 10 + *s - '0';
    }
    return oct;
}

struct tags_t
{
    const char *yyt1;const char *yyt2;const char *yyt3;const char *yyt4;

    tags_t();
    void push(const char *arg_yyt1,const char *arg_yyt2,const char *arg_yyt3,const char *arg_yyt4);
    void pop(const char *&arg_yyt1,const char *&arg_yyt2,const char *&arg_yyt3,const char *&arg_yyt4);
};

static void lex(const char *s)
{
#define YYPEEK()           *s
#define YYSKIP()           ++s
#define YYBACKUP()         marker = s
#define YYRESTORE()        s = marker
#define YYSTAGP(t)         t = s
#define YYSTAGN(t)         t = NULL
#define YYRESTORETAG(t)    s = t
    const char *marker, *p0, *p1, *p2, *p3;
    tags_t tags;
    
{
	char yych;
	yych = YYPEEK();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		YYSTAGP(tags.yyt1);
		goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP();
yy3:
	{ printf("error\n"); return; }
yy4:
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt2);
		goto yy5;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy7;
	default:	goto yy3;
	}
yy5:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy8;
	default:	goto yy6;
	}
yy6:
	YYRESTORE();
	goto yy3;
yy7:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt2);
		goto yy5;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy9;
	default:	goto yy6;
	}
yy8:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt3);
		goto yy10;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy11;
	default:	goto yy6;
	}
yy9:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt2);
		goto yy5;
	default:	goto yy6;
	}
yy10:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy12;
	default:	goto yy6;
	}
yy11:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt3);
		goto yy10;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy13;
	default:	goto yy6;
	}
yy12:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt4);
		goto yy14;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy15;
	default:	goto yy6;
	}
yy13:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt3);
		goto yy10;
	default:	goto yy6;
	}
yy14:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy16;
	default:	goto yy6;
	}
yy15:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt4);
		goto yy14;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy18;
	default:	goto yy6;
	}
yy16:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy19;
	default:	goto yy17;
	}
yy17:
	p0 = tags.yyt1;
	p1 = tags.yyt2;
	p2 = tags.yyt3;
	p3 = tags.yyt4;
	{
            printf("%u.%u.%u.%u\n",
                parse_oct(p0, p1),
                parse_oct(p1 + 1, p2),
                parse_oct(p2 + 1, p3),
                parse_oct(p3 + 1, s));
            return;
        }
yy18:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '.':
		YYSTAGP(tags.yyt4);
		goto yy14;
	default:	goto yy6;
	}
yy19:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy20;
	default:	goto yy17;
	}
yy20:
	YYSKIP();
	goto yy17;
}

}

tags_t::tags_t(): yyt1(0),yyt2(0),yyt3(0),yyt4(0) {}

void tags_t::push(const char *arg_yyt1,const char *arg_yyt2,const char *arg_yyt3,const char *arg_yyt4)
{
    yyt1 = arg_yyt1;yyt2 = arg_yyt2;yyt3 = arg_yyt3;yyt4 = arg_yyt4;
}

void tags_t::pop(const char *&arg_yyt1,const char *&arg_yyt2,const char *&arg_yyt3,const char *&arg_yyt4)
{
    arg_yyt1 = yyt1;arg_yyt2 = yyt2;arg_yyt3 = yyt3;arg_yyt4 = yyt4;
}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
