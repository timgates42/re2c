/* Generated by re2c */
#line 1 "encodings/unicode_group_M.8--encoding-policy(ignore).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
M:
	
#line 13 "encodings/unicode_group_M.8--encoding-policy(ignore).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xCC:	goto yy4;
	case 0xCD:	goto yy5;
	case 0xD2:	goto yy6;
	case 0xD6:	goto yy7;
	case 0xD7:	goto yy8;
	case 0xD8:	goto yy9;
	case 0xD9:	goto yy10;
	case 0xDB:	goto yy11;
	case 0xDC:	goto yy12;
	case 0xDD:	goto yy13;
	case 0xDE:	goto yy14;
	case 0xDF:	goto yy15;
	case 0xE0:	goto yy16;
	case 0xE1:	goto yy17;
	case 0xE2:	goto yy18;
	case 0xE3:	goto yy19;
	case 0xEA:	goto yy20;
	case 0xEF:	goto yy21;
	case 0xF0:	goto yy22;
	case 0xF3:	goto yy23;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "encodings/unicode_group_M.8--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 45 "encodings/unicode_group_M.8--encoding-policy(ignore).c"
yy4:
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
	case 0xAF:
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
	case 0xBF:	goto yy24;
	default:	goto yy3;
	}
yy5:
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
	case 0xAF:	goto yy24;
	default:	goto yy3;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:	goto yy24;
	default:	goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xAF:
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
	case 0xBF:	goto yy24;
	default:	goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x84:
	case 0x85:
	case 0x87:	goto yy24;
	default:	goto yy3;
	}
yy9:
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
	case 0x9A:	goto yy24;
	default:	goto yy3;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xB0:	goto yy24;
	default:	goto yy3;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA7:
	case 0xA8:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:	goto yy24;
	default:	goto yy3;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x91:
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
	case 0xBF:	goto yy24;
	default:	goto yy3;
	}
yy13:
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
	case 0x8A:	goto yy24;
	default:	goto yy3;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:	goto yy24;
	default:	goto yy3;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:	goto yy24;
	default:	goto yy3;
	}
yy16:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy26;
	case 0xA1:	goto yy28;
	case 0xA3:	goto yy29;
	case 0xA4:	goto yy30;
	case 0xA5:	goto yy31;
	case 0xA6:
	case 0xA8:
	case 0xAA:
	case 0xAC:
	case 0xB2:	goto yy32;
	case 0xA7:	goto yy33;
	case 0xA9:	goto yy34;
	case 0xAB:	goto yy35;
	case 0xAD:	goto yy36;
	case 0xAE:	goto yy37;
	case 0xAF:	goto yy38;
	case 0xB0:	goto yy39;
	case 0xB1:
	case 0xB3:	goto yy40;
	case 0xB4:	goto yy41;
	case 0xB5:	goto yy42;
	case 0xB6:	goto yy43;
	case 0xB7:	goto yy44;
	case 0xB8:	goto yy45;
	case 0xB9:	goto yy46;
	case 0xBA:	goto yy47;
	case 0xBB:	goto yy48;
	case 0xBC:	goto yy49;
	case 0xBD:	goto yy50;
	case 0xBE:	goto yy51;
	case 0xBF:	goto yy52;
	default:	goto yy3;
	}
yy17:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy53;
	case 0x81:	goto yy54;
	case 0x82:	goto yy55;
	case 0x8D:	goto yy56;
	case 0x9C:	goto yy57;
	case 0x9D:	goto yy58;
	case 0x9E:	goto yy59;
	case 0x9F:	goto yy60;
	case 0xA0:	goto yy61;
	case 0xA2:	goto yy62;
	case 0xA4:	goto yy63;
	case 0xA6:	goto yy64;
	case 0xA7:	goto yy65;
	case 0xA8:	goto yy66;
	case 0xA9:	goto yy67;
	case 0xAA:	goto yy68;
	case 0xAC:	goto yy69;
	case 0xAD:	goto yy70;
	case 0xAE:	goto yy71;
	case 0xAF:	goto yy72;
	case 0xB0:	goto yy73;
	case 0xB3:	goto yy74;
	case 0xB7:	goto yy75;
	default:	goto yy3;
	}
yy18:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x83:	goto yy76;
	case 0xB3:	goto yy77;
	case 0xB5:	goto yy78;
	case 0xB7:	goto yy79;
	default:	goto yy3;
	}
yy19:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy80;
	case 0x82:	goto yy81;
	default:	goto yy3;
	}
yy20:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x99:	goto yy82;
	case 0x9A:	goto yy83;
	case 0x9B:	goto yy84;
	case 0xA0:	goto yy85;
	case 0xA2:	goto yy86;
	case 0xA3:	goto yy87;
	case 0xA4:	goto yy88;
	case 0xA5:	goto yy89;
	case 0xA6:	goto yy90;
	case 0xA7:	goto yy91;
	case 0xA8:	goto yy92;
	case 0xA9:	goto yy93;
	case 0xAA:	goto yy94;
	case 0xAB:	goto yy95;
	case 0xAF:	goto yy96;
	default:	goto yy3;
	}
yy21:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xAC:	goto yy97;
	case 0xB8:	goto yy98;
	default:	goto yy3;
	}
yy22:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x90:	goto yy99;
	case 0x91:	goto yy100;
	case 0x96:	goto yy101;
	case 0x9B:	goto yy102;
	case 0x9D:	goto yy103;
	case 0x9E:	goto yy104;
	default:	goto yy3;
	}
yy23:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy105;
	default:	goto yy3;
	}
yy24:
	++YYCURSOR;
#line 12 "encodings/unicode_group_M.8--encoding-policy(ignore).re"
	{ goto M; }
#line 504 "encodings/unicode_group_M.8--encoding-policy(ignore).c"
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:	goto yy24;
	default:	goto yy27;
	}
yy27:
	YYCURSOR = YYMARKER;
	goto yy3;
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x99:
	case 0x9A:
	case 0x9B:	goto yy24;
	default:	goto yy27;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xAF:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy31:
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
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0xA2:
	case 0xA3:	goto yy24;
	default:	goto yy27;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:
	case 0xBC:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x87:
	case 0x88:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x97:
	case 0xA2:
	case 0xA3:	goto yy24;
	default:	goto yy27;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x87:
	case 0x88:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x91:
	case 0xB0:
	case 0xB1:
	case 0xB5:	goto yy24;
	default:	goto yy27;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0xA2:
	case 0xA3:	goto yy24;
	default:	goto yy27;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x87:
	case 0x88:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x96:
	case 0x97:
	case 0xA2:
	case 0xA3:	goto yy24;
	default:	goto yy27;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x82:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x97:	goto yy24;
	default:	goto yy27;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x95:
	case 0x96:
	case 0xA2:
	case 0xA3:	goto yy24;
	default:	goto yy27;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x97:
	case 0xA2:
	case 0xA3:	goto yy24;
	default:	goto yy27;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x82:
	case 0x83:	goto yy24;
	default:	goto yy27;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8A:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x96:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xB2:
	case 0xB3:	goto yy24;
	default:	goto yy27;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB1:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:	goto yy24;
	default:	goto yy27;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:	goto yy24;
	default:	goto yy27;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB1:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBB:
	case 0xBC:	goto yy24;
	default:	goto yy27;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:	goto yy24;
	default:	goto yy27;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x98:
	case 0x99:
	case 0xB5:
	case 0xB7:
	case 0xB9:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x86:
	case 0x87:
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
	case 0xAF:
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
	case 0xBC:	goto yy24;
	default:	goto yy27;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x86:	goto yy24;
	default:	goto yy27;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:	goto yy24;
	default:	goto yy27;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:	goto yy24;
	default:	goto yy27;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0x8F:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:	goto yy24;
	default:	goto yy27;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9D:
	case 0x9E:
	case 0x9F:	goto yy24;
	default:	goto yy27;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x92:
	case 0x93:
	case 0x94:
	case 0xB2:
	case 0xB3:
	case 0xB4:	goto yy24;
	default:	goto yy27;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x92:
	case 0x93:
	case 0xB2:
	case 0xB3:	goto yy24;
	default:	goto yy27;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy60:
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
	case 0x9D:	goto yy24;
	default:	goto yy27;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8B:
	case 0x8C:
	case 0x8D:	goto yy24;
	default:	goto yy27;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA9:	goto yy24;
	default:	goto yy27;
	}
yy63:
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
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
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
	case 0xBB:	goto yy24;
	default:	goto yy27;
	}
yy64:
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
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x88:
	case 0x89:	goto yy24;
	default:	goto yy27;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:	goto yy24;
	default:	goto yy27;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xAF:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy68:
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
	case 0xBE:	goto yy24;
	default:	goto yy27;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:	goto yy24;
	default:	goto yy27;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
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
	case 0xAD:	goto yy24;
	default:	goto yy27;
	}
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA6:
	case 0xA7:
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
	case 0xB3:	goto yy24;
	default:	goto yy27;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:	goto yy24;
	default:	goto yy27;
	}
yy74:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xAD:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB8:
	case 0xB9:	goto yy24;
	default:	goto yy27;
	}
yy75:
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
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
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
	case 0xAF:
	case 0xB0:	goto yy24;
	default:	goto yy27;
	}
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAF:
	case 0xB0:
	case 0xB1:	goto yy24;
	default:	goto yy27;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy79:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy80:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:	goto yy24;
	default:	goto yy27;
	}
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x99:
	case 0x9A:	goto yy24;
	default:	goto yy27;
	}
yy82:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:	goto yy24;
	default:	goto yy27;
	}
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9F:	goto yy24;
	default:	goto yy27;
	}
yy84:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:	goto yy24;
	default:	goto yy27;
	}
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x82:
	case 0x86:
	case 0x8B:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:	goto yy24;
	default:	goto yy27;
	}
yy86:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy87:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
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
	case 0xAF:
	case 0xB0:
	case 0xB1:	goto yy24;
	default:	goto yy27;
	}
yy88:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:	goto yy24;
	default:	goto yy27;
	}
yy89:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0x93:	goto yy24;
	default:	goto yy27;
	}
yy90:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy91:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0xA5:	goto yy24;
	default:	goto yy27;
	}
yy92:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xB5:
	case 0xB6:	goto yy24;
	default:	goto yy27;
	}
yy93:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x83:
	case 0x8C:
	case 0x8D:
	case 0xBB:
	case 0xBC:
	case 0xBD:	goto yy24;
	default:	goto yy27;
	}
yy94:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB7:
	case 0xB8:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy95:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB5:
	case 0xB6:	goto yy24;
	default:	goto yy27;
	}
yy96:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAC:
	case 0xAD:	goto yy24;
	default:	goto yy27;
	}
yy97:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9E:	goto yy24;
	default:	goto yy27;
	}
yy98:
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
	case 0xAD:	goto yy24;
	default:	goto yy27;
	}
yy99:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x87:	goto yy106;
	case 0x8B:	goto yy107;
	case 0x8D:	goto yy108;
	case 0xA8:	goto yy109;
	case 0xAB:	goto yy110;
	default:	goto yy27;
	}
yy100:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy111;
	case 0x81:	goto yy112;
	case 0x82:	goto yy113;
	case 0x84:	goto yy114;
	case 0x85:	goto yy115;
	case 0x86:	goto yy116;
	case 0x87:
	case 0x97:
	case 0x99:	goto yy117;
	case 0x88:	goto yy118;
	case 0x8B:	goto yy119;
	case 0x8C:	goto yy32;
	case 0x8D:	goto yy120;
	case 0x92:
	case 0x98:	goto yy64;
	case 0x93:	goto yy121;
	case 0x96:	goto yy122;
	case 0x9A:	goto yy123;
	default:	goto yy27;
	}
yy101:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAB:	goto yy124;
	case 0xAC:	goto yy125;
	case 0xBD:	goto yy126;
	case 0xBE:	goto yy127;
	default:	goto yy27;
	}
yy102:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB2:	goto yy128;
	default:	goto yy27;
	}
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x85:	goto yy129;
	case 0x86:	goto yy130;
	case 0x89:	goto yy131;
	default:	goto yy27;
	}
yy104:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA3:	goto yy132;
	default:	goto yy27;
	}
yy105:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:
	case 0x85:
	case 0x86:	goto yy133;
	case 0x87:	goto yy134;
	default:	goto yy27;
	}
yy106:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBD:	goto yy24;
	default:	goto yy27;
	}
yy107:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy24;
	default:	goto yy27;
	}
yy108:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:	goto yy24;
	default:	goto yy27;
	}
yy109:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x85:
	case 0x86:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy110:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA5:
	case 0xA6:	goto yy24;
	default:	goto yy27;
	}
yy111:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy112:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy113:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
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
	case 0xBA:	goto yy24;
	default:	goto yy27;
	}
yy114:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0xA7:
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
	case 0xB4:	goto yy24;
	default:	goto yy27;
	}
yy115:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB3:	goto yy24;
	default:	goto yy27;
	}
yy116:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy117:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy24;
	default:	goto yy27;
	}
yy118:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:	goto yy24;
	default:	goto yy27;
	}
yy119:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xAA:	goto yy24;
	default:	goto yy27;
	}
yy120:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x87:
	case 0x88:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x97:
	case 0xA2:
	case 0xA3:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:	goto yy24;
	default:	goto yy27;
	}
yy121:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:	goto yy24;
	default:	goto yy27;
	}
yy122:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy123:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xB5:
	case 0xB6:
	case 0xB7:	goto yy24;
	default:	goto yy27;
	}
yy124:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:	goto yy24;
	default:	goto yy27;
	}
yy125:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:	goto yy24;
	default:	goto yy27;
	}
yy126:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xAF:
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
	case 0xBE:	goto yy24;
	default:	goto yy27;
	}
yy127:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:	goto yy24;
	default:	goto yy27;
	}
yy128:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9D:
	case 0x9E:	goto yy24;
	default:	goto yy27;
	}
yy129:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy130:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:	goto yy24;
	default:	goto yy27;
	}
yy131:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x82:
	case 0x83:
	case 0x84:	goto yy24;
	default:	goto yy27;
	}
yy132:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:	goto yy24;
	default:	goto yy27;
	}
yy133:
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
	case 0xAF:
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
	case 0xBF:	goto yy24;
	default:	goto yy27;
	}
yy134:
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
	case 0xAF:	goto yy24;
	default:	goto yy27;
	}
}
#line 14 "encodings/unicode_group_M.8--encoding-policy(ignore).re"

}
static const unsigned int chars_M [] = {0x300,0x36f,  0x483,0x489,  0x591,0x5bd,  0x5bf,0x5bf,  0x5c1,0x5c2,  0x5c4,0x5c5,  0x5c7,0x5c7,  0x610,0x61a,  0x64b,0x65f,  0x670,0x670,  0x6d6,0x6dc,  0x6df,0x6e4,  0x6e7,0x6e8,  0x6ea,0x6ed,  0x711,0x711,  0x730,0x74a,  0x7a6,0x7b0,  0x7eb,0x7f3,  0x816,0x819,  0x81b,0x823,  0x825,0x827,  0x829,0x82d,  0x859,0x85b,  0x8e4,0x903,  0x93a,0x93c,  0x93e,0x94f,  0x951,0x957,  0x962,0x963,  0x981,0x983,  0x9bc,0x9bc,  0x9be,0x9c4,  0x9c7,0x9c8,  0x9cb,0x9cd,  0x9d7,0x9d7,  0x9e2,0x9e3,  0xa01,0xa03,  0xa3c,0xa3c,  0xa3e,0xa42,  0xa47,0xa48,  0xa4b,0xa4d,  0xa51,0xa51,  0xa70,0xa71,  0xa75,0xa75,  0xa81,0xa83,  0xabc,0xabc,  0xabe,0xac5,  0xac7,0xac9,  0xacb,0xacd,  0xae2,0xae3,  0xb01,0xb03,  0xb3c,0xb3c,  0xb3e,0xb44,  0xb47,0xb48,  0xb4b,0xb4d,  0xb56,0xb57,  0xb62,0xb63,  0xb82,0xb82,  0xbbe,0xbc2,  0xbc6,0xbc8,  0xbca,0xbcd,  0xbd7,0xbd7,  0xc00,0xc03,  0xc3e,0xc44,  0xc46,0xc48,  0xc4a,0xc4d,  0xc55,0xc56,  0xc62,0xc63,  0xc81,0xc83,  0xcbc,0xcbc,  0xcbe,0xcc4,  0xcc6,0xcc8,  0xcca,0xccd,  0xcd5,0xcd6,  0xce2,0xce3,  0xd01,0xd03,  0xd3e,0xd44,  0xd46,0xd48,  0xd4a,0xd4d,  0xd57,0xd57,  0xd62,0xd63,  0xd82,0xd83,  0xdca,0xdca,  0xdcf,0xdd4,  0xdd6,0xdd6,  0xdd8,0xddf,  0xdf2,0xdf3,  0xe31,0xe31,  0xe34,0xe3a,  0xe47,0xe4e,  0xeb1,0xeb1,  0xeb4,0xeb9,  0xebb,0xebc,  0xec8,0xecd,  0xf18,0xf19,  0xf35,0xf35,  0xf37,0xf37,  0xf39,0xf39,  0xf3e,0xf3f,  0xf71,0xf84,  0xf86,0xf87,  0xf8d,0xf97,  0xf99,0xfbc,  0xfc6,0xfc6,  0x102b,0x103e,  0x1056,0x1059,  0x105e,0x1060,  0x1062,0x1064,  0x1067,0x106d,  0x1071,0x1074,  0x1082,0x108d,  0x108f,0x108f,  0x109a,0x109d,  0x135d,0x135f,  0x1712,0x1714,  0x1732,0x1734,  0x1752,0x1753,  0x1772,0x1773,  0x17b4,0x17d3,  0x17dd,0x17dd,  0x180b,0x180d,  0x18a9,0x18a9,  0x1920,0x192b,  0x1930,0x193b,  0x19b0,0x19c0,  0x19c8,0x19c9,  0x1a17,0x1a1b,  0x1a55,0x1a5e,  0x1a60,0x1a7c,  0x1a7f,0x1a7f,  0x1ab0,0x1abe,  0x1b00,0x1b04,  0x1b34,0x1b44,  0x1b6b,0x1b73,  0x1b80,0x1b82,  0x1ba1,0x1bad,  0x1be6,0x1bf3,  0x1c24,0x1c37,  0x1cd0,0x1cd2,  0x1cd4,0x1ce8,  0x1ced,0x1ced,  0x1cf2,0x1cf4,  0x1cf8,0x1cf9,  0x1dc0,0x1df5,  0x1dfc,0x1dff,  0x20d0,0x20f0,  0x2cef,0x2cf1,  0x2d7f,0x2d7f,  0x2de0,0x2dff,  0x302a,0x302f,  0x3099,0x309a,  0xa66f,0xa672,  0xa674,0xa67d,  0xa69f,0xa69f,  0xa6f0,0xa6f1,  0xa802,0xa802,  0xa806,0xa806,  0xa80b,0xa80b,  0xa823,0xa827,  0xa880,0xa881,  0xa8b4,0xa8c4,  0xa8e0,0xa8f1,  0xa926,0xa92d,  0xa947,0xa953,  0xa980,0xa983,  0xa9b3,0xa9c0,  0xa9e5,0xa9e5,  0xaa29,0xaa36,  0xaa43,0xaa43,  0xaa4c,0xaa4d,  0xaa7b,0xaa7d,  0xaab0,0xaab0,  0xaab2,0xaab4,  0xaab7,0xaab8,  0xaabe,0xaabf,  0xaac1,0xaac1,  0xaaeb,0xaaef,  0xaaf5,0xaaf6,  0xabe3,0xabea,  0xabec,0xabed,  0xfb1e,0xfb1e,  0xfe00,0xfe0f,  0xfe20,0xfe2d,  0x101fd,0x101fd,  0x102e0,0x102e0,  0x10376,0x1037a,  0x10a01,0x10a03,  0x10a05,0x10a06,  0x10a0c,0x10a0f,  0x10a38,0x10a3a,  0x10a3f,0x10a3f,  0x10ae5,0x10ae6,  0x11000,0x11002,  0x11038,0x11046,  0x1107f,0x11082,  0x110b0,0x110ba,  0x11100,0x11102,  0x11127,0x11134,  0x11173,0x11173,  0x11180,0x11182,  0x111b3,0x111c0,  0x1122c,0x11237,  0x112df,0x112ea,  0x11301,0x11303,  0x1133c,0x1133c,  0x1133e,0x11344,  0x11347,0x11348,  0x1134b,0x1134d,  0x11357,0x11357,  0x11362,0x11363,  0x11366,0x1136c,  0x11370,0x11374,  0x114b0,0x114c3,  0x115af,0x115b5,  0x115b8,0x115c0,  0x11630,0x11640,  0x116ab,0x116b7,  0x16af0,0x16af4,  0x16b30,0x16b36,  0x16f51,0x16f7e,  0x16f8f,0x16f92,  0x1bc9d,0x1bc9e,  0x1d165,0x1d169,  0x1d16d,0x1d172,  0x1d17b,0x1d182,  0x1d185,0x1d18b,  0x1d1aa,0x1d1ad,  0x1d242,0x1d244,  0x1e8d0,0x1e8d6,  0xe0100,0xe01ef,  0x0,0x0};
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
	unsigned int * buffer_M = new unsigned int [7324];
	YYCTYPE * s = (YYCTYPE *) buffer_M;
	unsigned int buffer_len = encode_utf8 (chars_M, sizeof (chars_M) / sizeof (unsigned int), buffer_M);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_M[i];
	if (!scan (s, s + buffer_len))
		printf("test 'M' failed\n");
	delete [] buffer_M;
	return 0;
}