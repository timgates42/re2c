/* Generated by re2c */
#line 1 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sk:
	
#line 13 "encodings/unicode_group_Sk.u--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x00001FBD) {
		if (yych <= 0x000002C5) {
			if (yych <= 0x000000AE) {
				if (yych <= '_') {
					if (yych == '^') goto yy4;
				} else {
					if (yych <= '`') goto yy4;
					if (yych == 0x000000A8) goto yy4;
				}
			} else {
				if (yych <= 0x000000B4) {
					if (yych <= 0x000000AF) goto yy4;
					if (yych >= 0x000000B4) goto yy4;
				} else {
					if (yych == 0x000000B8) goto yy4;
					if (yych >= 0x000002C2) goto yy4;
				}
			}
		} else {
			if (yych <= 0x000002EE) {
				if (yych <= 0x000002E4) {
					if (yych <= 0x000002D1) goto yy2;
					if (yych <= 0x000002DF) goto yy4;
				} else {
					if (yych == 0x000002EC) goto yy2;
					if (yych <= 0x000002ED) goto yy4;
				}
			} else {
				if (yych <= 0x00000375) {
					if (yych <= 0x000002FF) goto yy4;
					if (yych >= 0x00000375) goto yy4;
				} else {
					if (yych <= 0x00000383) goto yy2;
					if (yych <= 0x00000385) goto yy4;
					if (yych >= 0x00001FBD) goto yy4;
				}
			}
		}
	} else {
		if (yych <= 0x0000A716) {
			if (yych <= 0x00001FEC) {
				if (yych <= 0x00001FCC) {
					if (yych <= 0x00001FBE) goto yy2;
					if (yych <= 0x00001FC1) goto yy4;
				} else {
					if (yych <= 0x00001FCF) goto yy4;
					if (yych <= 0x00001FDC) goto yy2;
					if (yych <= 0x00001FDF) goto yy4;
				}
			} else {
				if (yych <= 0x00001FFE) {
					if (yych <= 0x00001FEF) goto yy4;
					if (yych >= 0x00001FFD) goto yy4;
				} else {
					if (yych <= 0x0000309A) goto yy2;
					if (yych <= 0x0000309C) goto yy4;
					if (yych >= 0x0000A700) goto yy4;
				}
			}
		} else {
			if (yych <= 0x0000FBB1) {
				if (yych <= 0x0000A788) {
					if (yych <= 0x0000A71F) goto yy2;
					if (yych <= 0x0000A721) goto yy4;
				} else {
					if (yych <= 0x0000A78A) goto yy4;
					if (yych == 0x0000AB5B) goto yy4;
				}
			} else {
				if (yych <= 0x0000FF3F) {
					if (yych <= 0x0000FBC1) goto yy4;
					if (yych == 0x0000FF3E) goto yy4;
				} else {
					if (yych <= 0x0000FF40) goto yy4;
					if (yych == 0x0000FFE3) goto yy4;
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 100 "encodings/unicode_group_Sk.u--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"
	{ goto Sk; }
#line 105 "encodings/unicode_group_Sk.u--encoding-policy(fail).c"
}
#line 14 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"

}
static const unsigned int chars_Sk [] = {0x5e,0x5e,  0x60,0x60,  0xa8,0xa8,  0xaf,0xaf,  0xb4,0xb4,  0xb8,0xb8,  0x2c2,0x2c5,  0x2d2,0x2df,  0x2e5,0x2eb,  0x2ed,0x2ed,  0x2ef,0x2ff,  0x375,0x375,  0x384,0x385,  0x1fbd,0x1fbd,  0x1fbf,0x1fc1,  0x1fcd,0x1fcf,  0x1fdd,0x1fdf,  0x1fed,0x1fef,  0x1ffd,0x1ffe,  0x309b,0x309c,  0xa700,0xa716,  0xa720,0xa721,  0xa789,0xa78a,  0xab5b,0xab5b,  0xfbb2,0xfbc1,  0xff3e,0xff3e,  0xff40,0xff40,  0xffe3,0xffe3,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Sk = new unsigned int [117];
	YYCTYPE * s = (YYCTYPE *) buffer_Sk;
	unsigned int buffer_len = encode_utf32 (chars_Sk, sizeof (chars_Sk) / sizeof (unsigned int), buffer_Sk);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Sk[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Sk' failed\n");
	delete [] buffer_Sk;
	return 0;
}
