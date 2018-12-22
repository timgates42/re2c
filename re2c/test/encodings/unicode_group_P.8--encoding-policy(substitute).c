/* Generated by re2c */
#line 1 "encodings/unicode_group_P.8--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
P:
	
#line 13 "encodings/unicode_group_P.8--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '!':
	case '"':
	case '#':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case ',':
	case '-':
	case '.':
	case '/':
	case ':':
	case ';':
	case '?':
	case '@':
	case '[':
	case '\\':
	case ']':
	case '_':
	case '{':
	case '}':	goto yy4;
	case 0xC2:	goto yy6;
	case 0xCD:	goto yy7;
	case 0xCE:	goto yy8;
	case 0xD5:	goto yy9;
	case 0xD6:	goto yy10;
	case 0xD7:	goto yy11;
	case 0xD8:	goto yy12;
	case 0xD9:	goto yy13;
	case 0xDB:	goto yy14;
	case 0xDC:	goto yy15;
	case 0xDF:	goto yy16;
	case 0xE0:	goto yy17;
	case 0xE1:	goto yy18;
	case 0xE2:	goto yy19;
	case 0xE3:	goto yy20;
	case 0xEA:	goto yy21;
	case 0xEF:	goto yy22;
	case 0xF0:	goto yy23;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "encodings/unicode_group_P.8--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 66 "encodings/unicode_group_P.8--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_P.8--encoding-policy(substitute).re"
	{ goto P; }
#line 71 "encodings/unicode_group_P.8--encoding-policy(substitute).c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA1:
	case 0xA7:
	case 0xAB:
	case 0xB6:
	case 0xB7:
	case 0xBB:
	case 0xBF:	goto yy4;
	default:	goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBE:	goto yy4;
	default:	goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x87:	goto yy4;
	default:	goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:	goto yy4;
	default:	goto yy3;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x89:
	case 0x8A:
	case 0xBE:	goto yy4;
	default:	goto yy3;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x83:
	case 0x86:
	case 0xB3:
	case 0xB4:	goto yy4;
	default:	goto yy3;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x89:
	case 0x8A:
	case 0x8C:
	case 0x8D:
	case 0x9B:
	case 0x9E:
	case 0x9F:	goto yy4;
	default:	goto yy3;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:	goto yy4;
	default:	goto yy3;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x94:	goto yy4;
	default:	goto yy3;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:	goto yy4;
	default:	goto yy3;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB7:
	case 0xB8:
	case 0xB9:	goto yy4;
	default:	goto yy3;
	}
yy17:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy24;
	case 0xA1:	goto yy26;
	case 0xA5:	goto yy27;
	case 0xAB:	goto yy28;
	case 0xB7:	goto yy29;
	case 0xB9:	goto yy30;
	case 0xBC:	goto yy31;
	case 0xBE:	goto yy32;
	case 0xBF:	goto yy33;
	default:	goto yy3;
	}
yy18:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x81:	goto yy34;
	case 0x83:	goto yy35;
	case 0x8D:	goto yy36;
	case 0x90:	goto yy37;
	case 0x99:	goto yy38;
	case 0x9A:	goto yy39;
	case 0x9B:	goto yy40;
	case 0x9C:	goto yy41;
	case 0x9F:	goto yy42;
	case 0xA0:	goto yy43;
	case 0xA5:	goto yy44;
	case 0xA8:	goto yy45;
	case 0xAA:	goto yy46;
	case 0xAD:	goto yy47;
	case 0xAF:	goto yy48;
	case 0xB0:	goto yy49;
	case 0xB1:	goto yy50;
	case 0xB3:	goto yy51;
	default:	goto yy3;
	}
yy19:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy52;
	case 0x81:	goto yy53;
	case 0x82:	goto yy54;
	case 0x8C:	goto yy55;
	case 0x9D:	goto yy56;
	case 0x9F:	goto yy57;
	case 0xA6:	goto yy58;
	case 0xA7:	goto yy59;
	case 0xB3:	goto yy60;
	case 0xB5:	goto yy28;
	case 0xB8:	goto yy61;
	case 0xB9:	goto yy62;
	default:	goto yy3;
	}
yy20:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy63;
	case 0x82:	goto yy64;
	case 0x83:	goto yy35;
	default:	goto yy3;
	}
yy21:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x93:	goto yy50;
	case 0x98:	goto yy65;
	case 0x99:	goto yy66;
	case 0x9B:	goto yy67;
	case 0xA1:	goto yy68;
	case 0xA3:	goto yy69;
	case 0xA4:	goto yy70;
	case 0xA5:	goto yy71;
	case 0xA7:	goto yy72;
	case 0xA9:	goto yy73;
	case 0xAB:	goto yy74;
	case 0xAF:	goto yy75;
	default:	goto yy3;
	}
yy22:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xB4:	goto yy50;
	case 0xB8:	goto yy76;
	case 0xB9:	goto yy77;
	case 0xBC:	goto yy78;
	case 0xBD:	goto yy79;
	default:	goto yy3;
	}
yy23:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x90:	goto yy80;
	case 0x91:	goto yy81;
	case 0x92:	goto yy82;
	case 0x96:	goto yy83;
	case 0x9B:	goto yy84;
	default:	goto yy3;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:	goto yy4;
	default:	goto yy25;
	}
yy25:
	YYCURSOR = YYMARKER;
	goto yy3;
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9E:	goto yy4;
	default:	goto yy25;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA4:
	case 0xA5:
	case 0xB0:	goto yy4;
	default:	goto yy25;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:	goto yy4;
	default:	goto yy25;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB4:	goto yy4;
	default:	goto yy25;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8F:
	case 0x9A:
	case 0x9B:	goto yy4;
	default:	goto yy25;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x94:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:	goto yy4;
	default:	goto yy25;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x85:	goto yy4;
	default:	goto yy25;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x99:
	case 0x9A:	goto yy4;
	default:	goto yy25;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:	goto yy4;
	default:	goto yy25;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBB:	goto yy4;
	default:	goto yy25;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:	goto yy4;
	default:	goto yy25;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy4;
	default:	goto yy25;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAD:
	case 0xAE:	goto yy4;
	default:	goto yy25;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9B:
	case 0x9C:	goto yy4;
	default:	goto yy25;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAB:
	case 0xAC:
	case 0xAD:	goto yy4;
	default:	goto yy25;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB5:
	case 0xB6:	goto yy4;
	default:	goto yy25;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x98:
	case 0x99:
	case 0x9A:	goto yy4;
	default:	goto yy25;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:	goto yy4;
	default:	goto yy25;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:
	case 0x85:	goto yy4;
	default:	goto yy25;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9E:
	case 0x9F:	goto yy4;
	default:	goto yy25;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:	goto yy4;
	default:	goto yy25;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:	goto yy4;
	default:	goto yy25;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x93:	goto yy4;
	default:	goto yy25;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0xBD:
	case 0xBE:	goto yy4;
	default:	goto yy25;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8D:
	case 0x8E:	goto yy4;
	default:	goto yy25;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0xA9:
	case 0xAA:	goto yy4;
	default:	goto yy25;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:	goto yy4;
	default:	goto yy25;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x85:
	case 0x86:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:	goto yy4;
	default:	goto yy25;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:	goto yy4;
	default:	goto yy25;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0xBC:
	case 0xBD:	goto yy4;
	default:	goto yy25;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:	goto yy4;
	default:	goto yy25;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xB0:
	case 0xBD:	goto yy4;
	default:	goto yy25;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy4;
	default:	goto yy25;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8D:
	case 0x8E:
	case 0x8F:	goto yy4;
	default:	goto yy25;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB3:
	case 0xBE:	goto yy4;
	default:	goto yy25;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:	goto yy4;
	default:	goto yy25;
	}
yy68:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:	goto yy4;
	default:	goto yy25;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8E:
	case 0x8F:
	case 0xB8:
	case 0xB9:
	case 0xBA:	goto yy4;
	default:	goto yy25;
	}
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAE:
	case 0xAF:	goto yy4;
	default:	goto yy25;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9F:	goto yy4;
	default:	goto yy25;
	}
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x9E:
	case 0x9F:	goto yy4;
	default:	goto yy25;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:	goto yy4;
	default:	goto yy25;
	}
yy74:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9E:
	case 0x9F:
	case 0xB0:
	case 0xB1:	goto yy4;
	default:	goto yy25;
	}
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAB:	goto yy4;
	default:	goto yy25;
	}
yy76:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA3:
	case 0xA8:
	case 0xAA:
	case 0xAB:	goto yy4;
	default:	goto yy25;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x9A:
	case 0x9B:
	case 0x9F:
	case 0xA0:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9B:
	case 0x9D:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:	goto yy4;
	default:	goto yy25;
	}
yy80:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:	goto yy62;
	case 0x8E:	goto yy71;
	case 0x8F:	goto yy85;
	case 0x95:	goto yy86;
	case 0xA1:	goto yy87;
	case 0xA4:	goto yy88;
	case 0xA9:	goto yy89;
	case 0xAB:	goto yy90;
	case 0xAC:	goto yy91;
	case 0xAE:	goto yy92;
	default:	goto yy25;
	}
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:	goto yy93;
	case 0x82:	goto yy94;
	case 0x83:	goto yy95;
	case 0x85:	goto yy96;
	case 0x87:	goto yy97;
	case 0x88:	goto yy98;
	case 0x93:	goto yy99;
	case 0x97:	goto yy100;
	case 0x99:	goto yy101;
	default:	goto yy25;
	}
yy82:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x91:	goto yy102;
	default:	goto yy25;
	}
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA9:	goto yy70;
	case 0xAB:	goto yy103;
	case 0xAC:	goto yy104;
	case 0xAD:	goto yy105;
	default:	goto yy25;
	}
yy84:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB2:	goto yy71;
	default:	goto yy25;
	}
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:	goto yy4;
	default:	goto yy25;
	}
yy86:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAF:	goto yy4;
	default:	goto yy25;
	}
yy87:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x97:	goto yy4;
	default:	goto yy25;
	}
yy88:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9F:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy89:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy90:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:	goto yy4;
	default:	goto yy25;
	}
yy91:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy92:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:	goto yy4;
	default:	goto yy25;
	}
yy93:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:	goto yy4;
	default:	goto yy25;
	}
yy94:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBB:
	case 0xBC:
	case 0xBE:
	case 0xBF:	goto yy4;
	default:	goto yy25;
	}
yy95:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:	goto yy4;
	default:	goto yy25;
	}
yy96:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0xB4:
	case 0xB5:	goto yy4;
	default:	goto yy25;
	}
yy97:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x8D:	goto yy4;
	default:	goto yy25;
	}
yy98:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:	goto yy4;
	default:	goto yy25;
	}
yy99:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x86:	goto yy4;
	default:	goto yy25;
	}
yy100:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:	goto yy4;
	default:	goto yy25;
	}
yy101:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:	goto yy4;
	default:	goto yy25;
	}
yy102:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:	goto yy4;
	default:	goto yy25;
	}
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB5:	goto yy4;
	default:	goto yy25;
	}
yy104:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:	goto yy4;
	default:	goto yy25;
	}
yy105:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:	goto yy4;
	default:	goto yy25;
	}
}
#line 14 "encodings/unicode_group_P.8--encoding-policy(substitute).re"

}
static const unsigned int chars_P [] = {0x21,0x23,  0x25,0x2a,  0x2c,0x2f,  0x3a,0x3b,  0x3f,0x40,  0x5b,0x5d,  0x5f,0x5f,  0x7b,0x7b,  0x7d,0x7d,  0xa1,0xa1,  0xa7,0xa7,  0xab,0xab,  0xb6,0xb7,  0xbb,0xbb,  0xbf,0xbf,  0x37e,0x37e,  0x387,0x387,  0x55a,0x55f,  0x589,0x58a,  0x5be,0x5be,  0x5c0,0x5c0,  0x5c3,0x5c3,  0x5c6,0x5c6,  0x5f3,0x5f4,  0x609,0x60a,  0x60c,0x60d,  0x61b,0x61b,  0x61e,0x61f,  0x66a,0x66d,  0x6d4,0x6d4,  0x700,0x70d,  0x7f7,0x7f9,  0x830,0x83e,  0x85e,0x85e,  0x964,0x965,  0x970,0x970,  0xaf0,0xaf0,  0xdf4,0xdf4,  0xe4f,0xe4f,  0xe5a,0xe5b,  0xf04,0xf12,  0xf14,0xf14,  0xf3a,0xf3d,  0xf85,0xf85,  0xfd0,0xfd4,  0xfd9,0xfda,  0x104a,0x104f,  0x10fb,0x10fb,  0x1360,0x1368,  0x1400,0x1400,  0x166d,0x166e,  0x169b,0x169c,  0x16eb,0x16ed,  0x1735,0x1736,  0x17d4,0x17d6,  0x17d8,0x17da,  0x1800,0x180a,  0x1944,0x1945,  0x1a1e,0x1a1f,  0x1aa0,0x1aa6,  0x1aa8,0x1aad,  0x1b5a,0x1b60,  0x1bfc,0x1bff,  0x1c3b,0x1c3f,  0x1c7e,0x1c7f,  0x1cc0,0x1cc7,  0x1cd3,0x1cd3,  0x2010,0x2027,  0x2030,0x2043,  0x2045,0x2051,  0x2053,0x205e,  0x207d,0x207e,  0x208d,0x208e,  0x2308,0x230b,  0x2329,0x232a,  0x2768,0x2775,  0x27c5,0x27c6,  0x27e6,0x27ef,  0x2983,0x2998,  0x29d8,0x29db,  0x29fc,0x29fd,  0x2cf9,0x2cfc,  0x2cfe,0x2cff,  0x2d70,0x2d70,  0x2e00,0x2e2e,  0x2e30,0x2e42,  0x3001,0x3003,  0x3008,0x3011,  0x3014,0x301f,  0x3030,0x3030,  0x303d,0x303d,  0x30a0,0x30a0,  0x30fb,0x30fb,  0xa4fe,0xa4ff,  0xa60d,0xa60f,  0xa673,0xa673,  0xa67e,0xa67e,  0xa6f2,0xa6f7,  0xa874,0xa877,  0xa8ce,0xa8cf,  0xa8f8,0xa8fa,  0xa92e,0xa92f,  0xa95f,0xa95f,  0xa9c1,0xa9cd,  0xa9de,0xa9df,  0xaa5c,0xaa5f,  0xaade,0xaadf,  0xaaf0,0xaaf1,  0xabeb,0xabeb,  0xfd3e,0xfd3f,  0xfe10,0xfe19,  0xfe30,0xfe52,  0xfe54,0xfe61,  0xfe63,0xfe63,  0xfe68,0xfe68,  0xfe6a,0xfe6b,  0xff01,0xff03,  0xff05,0xff0a,  0xff0c,0xff0f,  0xff1a,0xff1b,  0xff1f,0xff20,  0xff3b,0xff3d,  0xff3f,0xff3f,  0xff5b,0xff5b,  0xff5d,0xff5d,  0xff5f,0xff65,  0x10100,0x10102,  0x1039f,0x1039f,  0x103d0,0x103d0,  0x1056f,0x1056f,  0x10857,0x10857,  0x1091f,0x1091f,  0x1093f,0x1093f,  0x10a50,0x10a58,  0x10a7f,0x10a7f,  0x10af0,0x10af6,  0x10b39,0x10b3f,  0x10b99,0x10b9c,  0x11047,0x1104d,  0x110bb,0x110bc,  0x110be,0x110c1,  0x11140,0x11143,  0x11174,0x11175,  0x111c5,0x111c8,  0x111cd,0x111cd,  0x11238,0x1123d,  0x114c6,0x114c6,  0x115c1,0x115c9,  0x11641,0x11643,  0x12470,0x12474,  0x16a6e,0x16a6f,  0x16af5,0x16af5,  0x16b37,0x16b3b,  0x16b44,0x16b44,  0x1bc9f,0x1bc9f,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	unsigned int * buffer_P = new unsigned int [2756];
	YYCTYPE * s = (YYCTYPE *) buffer_P;
	unsigned int buffer_len = encode_utf8 (chars_P, sizeof (chars_P) / sizeof (unsigned int), buffer_P);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_P[i];
	if (!scan (s, s + buffer_len))
		printf("test 'P' failed\n");
	delete [] buffer_P;
	return 0;
}
