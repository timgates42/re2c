/* Generated by re2c */
#line 1 "encodings/unicode_group_Cf.x--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cf:
	
#line 13 "encodings/unicode_group_Cf.x--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x202E) {
		if (yych <= 0x06DD) {
			if (yych <= 0x0605) {
				if (yych == 0x00AD) goto yy4;
				if (yych >= 0x0600) goto yy4;
			} else {
				if (yych == 0x061C) goto yy4;
				if (yych >= 0x06DD) goto yy4;
			}
		} else {
			if (yych <= 0x180E) {
				if (yych == 0x070F) goto yy4;
				if (yych >= 0x180E) goto yy4;
			} else {
				if (yych <= 0x200A) goto yy2;
				if (yych <= 0x200F) goto yy4;
				if (yych >= 0x202A) goto yy4;
			}
		}
	} else {
		if (yych <= 0xD82F) {
			if (yych <= 0x206F) {
				if (yych <= 0x205F) goto yy2;
				if (yych != 0x2065) goto yy4;
			} else {
				if (yych == 0xD804) goto yy6;
				if (yych >= 0xD82F) goto yy7;
			}
		} else {
			if (yych <= 0xDB40) {
				if (yych == 0xD834) goto yy8;
				if (yych >= 0xDB40) goto yy9;
			} else {
				if (yych <= 0xFEFF) {
					if (yych >= 0xFEFF) goto yy4;
				} else {
					if (yych <= 0xFFF8) goto yy2;
					if (yych <= 0xFFFB) goto yy4;
				}
			}
		}
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "encodings/unicode_group_Cf.x--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 64 "encodings/unicode_group_Cf.x--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_Cf.x--encoding-policy(substitute).re"
	{ goto Cf; }
#line 69 "encodings/unicode_group_Cf.x--encoding-policy(substitute).c"
yy6:
	yych = *++YYCURSOR;
	if (yych == 0xDCBD) goto yy4;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDC9F) goto yy3;
	if (yych <= 0xDCA3) goto yy4;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDD72) goto yy3;
	if (yych <= 0xDD7A) goto yy4;
	goto yy3;
yy9:
	yych = *++YYCURSOR;
	if (yych == 0xDC01) goto yy4;
	if (yych <= 0xDC1F) goto yy3;
	if (yych <= 0xDC7F) goto yy4;
	goto yy3;
}
#line 14 "encodings/unicode_group_Cf.x--encoding-policy(substitute).re"

}
static const unsigned int chars_Cf [] = {0xad,0xad,  0x600,0x605,  0x61c,0x61c,  0x6dd,0x6dd,  0x70f,0x70f,  0x180e,0x180e,  0x200b,0x200f,  0x202a,0x202e,  0x2060,0x2064,  0x2066,0x206f,  0xfeff,0xfeff,  0xfff9,0xfffb,  0x110bd,0x110bd,  0x1bca0,0x1bca3,  0x1d173,0x1d17a,  0xe0001,0xe0001,  0xe0020,0xe007f,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Cf = new unsigned int [302];
	YYCTYPE * s = (YYCTYPE *) buffer_Cf;
	unsigned int buffer_len = encode_utf16 (chars_Cf, sizeof (chars_Cf) / sizeof (unsigned int), buffer_Cf);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Cf[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Cf' failed\n");
	delete [] buffer_Cf;
	return 0;
}
