/* Generated by re2c */
#line 1 "input11.b.re"

#line 5 "input11.b.c"
{
	YYCTYPE yych;
	static const unsigned char yybm[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 
		0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 
		0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	};
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *YYCURSOR;
	if (yych <= '@') {
		if (yych <= '/') {
			if (yych == '-') goto yy4;
		} else {
			if (yych <= '0') goto yy5;
			if (yych <= '9') goto yy7;
		}
	} else {
		if (yych <= 'q') {
			if (yych <= 'Z') goto yy9;
			if (yych >= 'a') goto yy9;
		} else {
			if (yych <= 'r') goto yy12;
			if (yych <= 'z') goto yy9;
		}
	}
	++YYCURSOR;
yy3:
#line 15 "input11.b.re"
	{ return -1; }
#line 64 "input11.b.c"
yy4:
	yych = *++YYCURSOR;
	if (yych <= '0') goto yy3;
	if (yych <= '9') goto yy7;
	goto yy3;
yy5:
	++YYCURSOR;
yy6:
#line 13 "input11.b.re"
	{ return 2; }
#line 75 "input11.b.c"
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 0x20) {
		goto yy7;
	}
	goto yy6;
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy10:
	if (yybm[0+yych] & 0x40) {
		goto yy9;
	}
yy11:
#line 12 "input11.b.re"
	{ return 1; }
#line 95 "input11.b.c"
yy12:
	yych = *++YYCURSOR;
	if (yych != 'e') goto yy10;
	yych = *++YYCURSOR;
	if (yych != '2') goto yy10;
	yych = *++YYCURSOR;
	if (yych != 'c') goto yy10;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych != ':') goto yy10;
	yych = *++YYCURSOR;
	if (yych <= '^') {
		if (yych <= '@') goto yy17;
		if (yych <= 'Z') goto yy18;
	} else {
		if (yych == '`') goto yy17;
		if (yych <= 'z') goto yy18;
	}
yy17:
	YYCURSOR = YYMARKER;
	goto yy11;
yy18:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 0x80) {
		goto yy18;
	}
#line 11 "input11.b.re"
	{ return 0; }
#line 125 "input11.b.c"
}
#line 17 "input11.b.re"
