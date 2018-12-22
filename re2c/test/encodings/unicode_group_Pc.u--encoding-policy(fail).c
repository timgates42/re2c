/* Generated by re2c */
#line 1 "encodings/unicode_group_Pc.u--encoding-policy(fail).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Pc:
	
#line 13 "encodings/unicode_group_Pc.u--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x00002054) {
		if (yych <= 0x0000203E) {
			if (yych == '_') goto yy4;
		} else {
			if (yych <= 0x00002040) goto yy4;
			if (yych >= 0x00002054) goto yy4;
		}
	} else {
		if (yych <= 0x0000FE4C) {
			if (yych <= 0x0000FE32) goto yy2;
			if (yych <= 0x0000FE34) goto yy4;
		} else {
			if (yych <= 0x0000FE4F) goto yy4;
			if (yych == 0x0000FF3F) goto yy4;
		}
	}
yy2:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Pc.u--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 37 "encodings/unicode_group_Pc.u--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_Pc.u--encoding-policy(fail).re"
	{ goto Pc; }
#line 42 "encodings/unicode_group_Pc.u--encoding-policy(fail).c"
}
#line 14 "encodings/unicode_group_Pc.u--encoding-policy(fail).re"

}
static const unsigned int chars_Pc [] = {0x5f,0x5f,  0x203f,0x2040,  0x2054,0x2054,  0xfe33,0xfe34,  0xfe4d,0xfe4f,  0xff3f,0xff3f,  0x0,0x0};
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
	unsigned int * buffer_Pc = new unsigned int [11];
	YYCTYPE * s = (YYCTYPE *) buffer_Pc;
	unsigned int buffer_len = encode_utf32 (chars_Pc, sizeof (chars_Pc) / sizeof (unsigned int), buffer_Pc);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Pc[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Pc' failed\n");
	delete [] buffer_Pc;
	return 0;
}
