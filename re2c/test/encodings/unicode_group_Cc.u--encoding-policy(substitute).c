/* Generated by re2c */
#line 1 "encodings/unicode_group_Cc.u--encoding-policy(substitute).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cc:
	
#line 13 "encodings/unicode_group_Cc.u--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x0000001F) goto yy2;
	if (yych <= '~') goto yy4;
	if (yych >= 0x000000A0) goto yy4;
yy2:
	++YYCURSOR;
#line 12 "encodings/unicode_group_Cc.u--encoding-policy(substitute).re"
	{ goto Cc; }
#line 24 "encodings/unicode_group_Cc.u--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Cc.u--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 29 "encodings/unicode_group_Cc.u--encoding-policy(substitute).c"
}
#line 14 "encodings/unicode_group_Cc.u--encoding-policy(substitute).re"

}
static const unsigned int chars_Cc [] = {0x0,0x1f,  0x7f,0x9f,  0x20,0x20};
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
	unsigned int * buffer_Cc = new unsigned int [66];
	YYCTYPE * s = (YYCTYPE *) buffer_Cc;
	unsigned int buffer_len = encode_utf32 (chars_Cc, sizeof (chars_Cc) / sizeof (unsigned int), buffer_Cc);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Cc[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Cc' failed\n");
	delete [] buffer_Cc;
	return 0;
}
