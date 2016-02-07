/* Generated by re2c */
#line 1 "strip_003.b.re"
/* re2c lesson 002_strip_comments, strip_003.b, (c) M. Boerger 2006 - 2007 */
#line 37 "strip_003.b.re"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define YYMAXFILL 4
#define	BSIZE	128

#if BSIZE < YYMAXFILL
# error BSIZE must be greater YYMAXFILL
#endif

#define	YYCTYPE		unsigned char
#define	YYCURSOR	s.cur
#define	YYLIMIT		s.lim
#define YYMARKER	s.mrk
#define YYCTXMARKER s.ctx
#define	YYFILL(n)	{ if ((res = fill(&s, n)) >= 0) break; }

typedef struct Scanner
{
	FILE			*fp;
	unsigned char	*cur, *tok, *lim, *eof, *ctx, *mrk;
	unsigned char 	buffer[BSIZE];
} Scanner;

int fill(Scanner *s, int len)
{
	if (!len)
	{
		s->cur = s->tok = s->lim = s->mrk = s->buffer;
		s->eof = 0;
	}
	if (!s->eof)
	{
		int got, cnt = s->tok - s->buffer;

		if (cnt > 0)
		{
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
			s->mrk -= cnt;
			s->ctx -= cnt;
		}
		cnt = BSIZE - cnt;
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	else if (s->cur + len > s->eof)
	{
		return 0; /* not enough input data */
	}
	return -1;
}

void echo(Scanner *s)
{
	fwrite(s->tok, 1, s->cur - s->tok, stdout);
}

int scan(FILE *fp)
{
	int  res = 0;
	int  nlcomment = 0;
    Scanner s;

	if (!fp)
	{
		return 1; /* no file was opened */
	}

    s.fp = fp;
	
	fill(&s, 0);

	for(;;)
	{
		s.tok = s.cur;

#line 90 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
			yych = *YYCURSOR;
			if (yych <= '\f') {
				if (yych == '\n') goto yy4;
			} else {
				if (yych <= '\r') goto yy5;
				if (yych == '/') goto yy6;
			}
			++YYCURSOR;
yy3:
#line 130 "strip_003.b.re"
			{ fputc(*s.tok, stdout); continue; }
#line 105 "strip_003.b.c"
yy4:
			yych = *(YYMARKER = ++YYCURSOR);
			YYCTXMARKER = YYCURSOR;
			if (yych == '/') goto yy7;
			goto yy3;
yy5:
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych == '\n') goto yy9;
			goto yy3;
yy6:
			yych = *++YYCURSOR;
			if (yych == '*') goto yy10;
			if (yych == '/') goto yy12;
			goto yy3;
yy7:
			yych = *++YYCURSOR;
			if (yych == '*') goto yy14;
yy8:
			YYCURSOR = YYMARKER;
			goto yy3;
yy9:
			yych = *++YYCURSOR;
			YYCTXMARKER = YYCURSOR;
			if (yych == '/') goto yy7;
			goto yy8;
yy10:
			++YYCURSOR;
#line 129 "strip_003.b.re"
			{ goto comment; }
#line 135 "strip_003.b.c"
yy12:
			++YYCURSOR;
#line 127 "strip_003.b.re"
			{ goto cppcomment; }
#line 140 "strip_003.b.c"
yy14:
			++YYCURSOR;
			YYCURSOR = YYCTXMARKER;
#line 128 "strip_003.b.re"
			{ echo(&s); nlcomment = 1; continue; }
#line 146 "strip_003.b.c"
		}
#line 131 "strip_003.b.re"

comment:
		s.tok = s.cur;

#line 153 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych == '*') goto yy20;
			++YYCURSOR;
yy19:
#line 136 "strip_003.b.re"
			{ goto comment; }
#line 163 "strip_003.b.c"
yy20:
			yych = *++YYCURSOR;
			if (yych != '/') goto yy19;
			++YYCURSOR;
#line 135 "strip_003.b.re"
			{ goto commentws; }
#line 170 "strip_003.b.c"
		}
#line 137 "strip_003.b.re"

commentws:
		s.tok = s.cur;

#line 177 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
			yych = *YYCURSOR;
			if (yych <= '\r') {
				if (yych <= '\t') {
					if (yych >= '\t') goto yy27;
				} else {
					if (yych <= '\n') goto yy29;
					if (yych >= '\r') goto yy31;
				}
			} else {
				if (yych <= ' ') {
					if (yych >= ' ') goto yy27;
				} else {
					if (yych == '/') goto yy32;
				}
			}
			++YYCURSOR;
yy26:
#line 151 "strip_003.b.re"
			{ echo(&s); nlcomment = 0; continue; }
#line 200 "strip_003.b.c"
yy27:
			++YYCURSOR;
yy28:
#line 150 "strip_003.b.re"
			{ goto commentws; }
#line 206 "strip_003.b.c"
yy29:
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych == '/') goto yy33;
yy30:
#line 142 "strip_003.b.re"
			{
					if (!nlcomment)
					{
						echo(&s);
					}
					nlcomment = 0;
					continue;
				}
#line 220 "strip_003.b.c"
yy31:
			yych = *++YYCURSOR;
			if (yych == '\n') goto yy29;
			goto yy28;
yy32:
			yych = *++YYCURSOR;
			if (yych == '*') goto yy35;
			goto yy26;
yy33:
			yych = *++YYCURSOR;
			if (yych == '*') goto yy35;
			YYCURSOR = YYMARKER;
			goto yy30;
yy35:
			++YYCURSOR;
#line 141 "strip_003.b.re"
			{ goto comment; }
#line 238 "strip_003.b.c"
		}
#line 152 "strip_003.b.re"

cppcomment:
		s.tok = s.cur;

#line 245 "strip_003.b.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych == '\n') goto yy41;
			if (yych == '\r') goto yy43;
			++YYCURSOR;
yy40:
#line 157 "strip_003.b.re"
			{ goto cppcomment; }
#line 256 "strip_003.b.c"
yy41:
			++YYCURSOR;
#line 156 "strip_003.b.re"
			{ echo(&s); continue; }
#line 261 "strip_003.b.c"
yy43:
			++YYCURSOR;
			if ((yych = *YYCURSOR) == '\n') goto yy41;
			goto yy40;
		}
#line 158 "strip_003.b.re"

	}

	if (fp != stdin)
	{
		fclose(fp); /* close only if not stdin */
	}
	return res; /* return result */
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(!strcmp(argv[1], "-") ? stdin : fopen(argv[1], "r"));
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}