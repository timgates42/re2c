/* Generated by re2c */
#line 1 "encodings/unicode_group_Mn.x--encoding-policy(fail).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Mn:
	
#line 13 "encodings/unicode_group_Mn.x--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x108C) {
		if (yych <= 0x0B3F) {
			if (yych <= 0x093C) {
				if (yych <= 0x06E8) {
					if (yych <= 0x05C6) {
						if (yych <= 0x05BD) {
							if (yych <= 0x0482) {
								if (yych <= 0x02FF) goto yy2;
								if (yych <= 0x036F) goto yy4;
							} else {
								if (yych <= 0x0487) goto yy4;
								if (yych >= 0x0591) goto yy4;
							}
						} else {
							if (yych <= 0x05C0) {
								if (yych == 0x05BF) goto yy4;
							} else {
								if (yych == 0x05C3) goto yy2;
								if (yych <= 0x05C5) goto yy4;
							}
						}
					} else {
						if (yych <= 0x066F) {
							if (yych <= 0x061A) {
								if (yych <= 0x05C7) goto yy4;
								if (yych >= 0x0610) goto yy4;
							} else {
								if (yych <= 0x064A) goto yy2;
								if (yych <= 0x065F) goto yy4;
							}
						} else {
							if (yych <= 0x06DC) {
								if (yych <= 0x0670) goto yy4;
								if (yych >= 0x06D6) goto yy4;
							} else {
								if (yych <= 0x06DE) goto yy2;
								if (yych <= 0x06E4) goto yy4;
								if (yych >= 0x06E7) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x081A) {
						if (yych <= 0x074A) {
							if (yych <= 0x0710) {
								if (yych <= 0x06E9) goto yy2;
								if (yych <= 0x06ED) goto yy4;
							} else {
								if (yych <= 0x0711) goto yy4;
								if (yych >= 0x0730) goto yy4;
							}
						} else {
							if (yych <= 0x07EA) {
								if (yych <= 0x07A5) goto yy2;
								if (yych <= 0x07B0) goto yy4;
							} else {
								if (yych <= 0x07F3) goto yy4;
								if (yych <= 0x0815) goto yy2;
								if (yych <= 0x0819) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0858) {
							if (yych <= 0x0827) {
								if (yych != 0x0824) goto yy4;
							} else {
								if (yych <= 0x0828) goto yy2;
								if (yych <= 0x082D) goto yy4;
							}
						} else {
							if (yych <= 0x0902) {
								if (yych <= 0x085B) goto yy4;
								if (yych >= 0x08E4) goto yy4;
							} else {
								if (yych == 0x093A) goto yy4;
								if (yych >= 0x093C) goto yy4;
							}
						}
					}
				}
			} else {
				if (yych <= 0x0A48) {
					if (yych <= 0x09C0) {
						if (yych <= 0x0957) {
							if (yych <= 0x094C) {
								if (yych <= 0x0940) goto yy2;
								if (yych <= 0x0948) goto yy4;
							} else {
								if (yych <= 0x094D) goto yy4;
								if (yych >= 0x0951) goto yy4;
							}
						} else {
							if (yych <= 0x0980) {
								if (yych <= 0x0961) goto yy2;
								if (yych <= 0x0963) goto yy4;
							} else {
								if (yych <= 0x0981) goto yy4;
								if (yych == 0x09BC) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0A00) {
							if (yych <= 0x09CD) {
								if (yych <= 0x09C4) goto yy4;
								if (yych >= 0x09CD) goto yy4;
							} else {
								if (yych <= 0x09E1) goto yy2;
								if (yych <= 0x09E3) goto yy4;
							}
						} else {
							if (yych <= 0x0A3C) {
								if (yych <= 0x0A02) goto yy4;
								if (yych >= 0x0A3C) goto yy4;
							} else {
								if (yych <= 0x0A40) goto yy2;
								if (yych <= 0x0A42) goto yy4;
								if (yych >= 0x0A47) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x0AC0) {
						if (yych <= 0x0A71) {
							if (yych <= 0x0A50) {
								if (yych <= 0x0A4A) goto yy2;
								if (yych <= 0x0A4D) goto yy4;
							} else {
								if (yych <= 0x0A51) goto yy4;
								if (yych >= 0x0A70) goto yy4;
							}
						} else {
							if (yych <= 0x0A80) {
								if (yych == 0x0A75) goto yy4;
							} else {
								if (yych <= 0x0A82) goto yy4;
								if (yych == 0x0ABC) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0AE1) {
							if (yych <= 0x0AC8) {
								if (yych != 0x0AC6) goto yy4;
							} else {
								if (yych == 0x0ACD) goto yy4;
							}
						} else {
							if (yych <= 0x0B01) {
								if (yych <= 0x0AE3) goto yy4;
								if (yych >= 0x0B01) goto yy4;
							} else {
								if (yych == 0x0B3C) goto yy4;
								if (yych >= 0x0B3F) goto yy4;
							}
						}
					}
				}
			}
		} else {
			if (yych <= 0x0DD6) {
				if (yych <= 0x0C63) {
					if (yych <= 0x0BCC) {
						if (yych <= 0x0B56) {
							if (yych <= 0x0B4C) {
								if (yych <= 0x0B40) goto yy2;
								if (yych <= 0x0B44) goto yy4;
							} else {
								if (yych <= 0x0B4D) goto yy4;
								if (yych >= 0x0B56) goto yy4;
							}
						} else {
							if (yych <= 0x0B81) {
								if (yych <= 0x0B61) goto yy2;
								if (yych <= 0x0B63) goto yy4;
							} else {
								if (yych <= 0x0B82) goto yy4;
								if (yych == 0x0BC0) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0C45) {
							if (yych <= 0x0C00) {
								if (yych <= 0x0BCD) goto yy4;
								if (yych >= 0x0C00) goto yy4;
							} else {
								if (yych <= 0x0C3D) goto yy2;
								if (yych <= 0x0C40) goto yy4;
							}
						} else {
							if (yych <= 0x0C4D) {
								if (yych != 0x0C49) goto yy4;
							} else {
								if (yych <= 0x0C54) goto yy2;
								if (yych <= 0x0C56) goto yy4;
								if (yych >= 0x0C62) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x0D00) {
						if (yych <= 0x0CBF) {
							if (yych <= 0x0CBB) {
								if (yych == 0x0C81) goto yy4;
							} else {
								if (yych <= 0x0CBC) goto yy4;
								if (yych >= 0x0CBF) goto yy4;
							}
						} else {
							if (yych <= 0x0CCB) {
								if (yych == 0x0CC6) goto yy4;
							} else {
								if (yych <= 0x0CCD) goto yy4;
								if (yych <= 0x0CE1) goto yy2;
								if (yych <= 0x0CE3) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0D61) {
							if (yych <= 0x0D44) {
								if (yych <= 0x0D01) goto yy4;
								if (yych >= 0x0D41) goto yy4;
							} else {
								if (yych == 0x0D4D) goto yy4;
							}
						} else {
							if (yych <= 0x0DCA) {
								if (yych <= 0x0D63) goto yy4;
								if (yych >= 0x0DCA) goto yy4;
							} else {
								if (yych <= 0x0DD1) goto yy2;
								if (yych != 0x0DD5) goto yy4;
							}
						}
					}
				}
			} else {
				if (yych <= 0x0F84) {
					if (yych <= 0x0EC7) {
						if (yych <= 0x0E4E) {
							if (yych <= 0x0E33) {
								if (yych == 0x0E31) goto yy4;
							} else {
								if (yych <= 0x0E3A) goto yy4;
								if (yych >= 0x0E47) goto yy4;
							}
						} else {
							if (yych <= 0x0EB3) {
								if (yych == 0x0EB1) goto yy4;
							} else {
								if (yych == 0x0EBA) goto yy2;
								if (yych <= 0x0EBC) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0F36) {
							if (yych <= 0x0F19) {
								if (yych <= 0x0ECD) goto yy4;
								if (yych >= 0x0F18) goto yy4;
							} else {
								if (yych == 0x0F35) goto yy4;
							}
						} else {
							if (yych <= 0x0F39) {
								if (yych != 0x0F38) goto yy4;
							} else {
								if (yych <= 0x0F70) goto yy2;
								if (yych != 0x0F7F) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x1038) {
						if (yych <= 0x0FBC) {
							if (yych <= 0x0F8C) {
								if (yych <= 0x0F85) goto yy2;
								if (yych <= 0x0F87) goto yy4;
							} else {
								if (yych != 0x0F98) goto yy4;
							}
						} else {
							if (yych <= 0x102C) {
								if (yych == 0x0FC6) goto yy4;
							} else {
								if (yych == 0x1031) goto yy2;
								if (yych <= 0x1037) goto yy4;
							}
						}
					} else {
						if (yych <= 0x1060) {
							if (yych <= 0x103E) {
								if (yych <= 0x103A) goto yy4;
								if (yych >= 0x103D) goto yy4;
							} else {
								if (yych <= 0x1057) goto yy2;
								if (yych <= 0x1059) goto yy4;
								if (yych >= 0x105E) goto yy4;
							}
						} else {
							if (yych <= 0x1081) {
								if (yych <= 0x1070) goto yy2;
								if (yych <= 0x1074) goto yy4;
							} else {
								if (yych <= 0x1082) goto yy4;
								if (yych <= 0x1084) goto yy2;
								if (yych <= 0x1086) goto yy4;
							}
						}
					}
				}
			}
		}
	} else {
		if (yych <= 0x20DC) {
			if (yych <= 0x1A7E) {
				if (yych <= 0x18A8) {
					if (yych <= 0x1773) {
						if (yych <= 0x1711) {
							if (yych <= 0x109D) {
								if (yych <= 0x108D) goto yy4;
								if (yych >= 0x109D) goto yy4;
							} else {
								if (yych <= 0x135C) goto yy2;
								if (yych <= 0x135F) goto yy4;
							}
						} else {
							if (yych <= 0x1734) {
								if (yych <= 0x1714) goto yy4;
								if (yych >= 0x1732) goto yy4;
							} else {
								if (yych <= 0x1751) goto yy2;
								if (yych <= 0x1753) goto yy4;
								if (yych >= 0x1772) goto yy4;
							}
						}
					} else {
						if (yych <= 0x17C6) {
							if (yych <= 0x17B6) {
								if (yych <= 0x17B3) goto yy2;
								if (yych <= 0x17B5) goto yy4;
							} else {
								if (yych <= 0x17BD) goto yy4;
								if (yych >= 0x17C6) goto yy4;
							}
						} else {
							if (yych <= 0x17DC) {
								if (yych <= 0x17C8) goto yy2;
								if (yych <= 0x17D3) goto yy4;
							} else {
								if (yych <= 0x17DD) goto yy4;
								if (yych <= 0x180A) goto yy2;
								if (yych <= 0x180D) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x1A1B) {
						if (yych <= 0x1931) {
							if (yych <= 0x1922) {
								if (yych <= 0x18A9) goto yy4;
								if (yych >= 0x1920) goto yy4;
							} else {
								if (yych <= 0x1926) goto yy2;
								if (yych <= 0x1928) goto yy4;
							}
						} else {
							if (yych <= 0x193B) {
								if (yych <= 0x1932) goto yy4;
								if (yych >= 0x1939) goto yy4;
							} else {
								if (yych <= 0x1A16) goto yy2;
								if (yych <= 0x1A18) goto yy4;
								if (yych >= 0x1A1B) goto yy4;
							}
						}
					} else {
						if (yych <= 0x1A60) {
							if (yych <= 0x1A57) {
								if (yych == 0x1A56) goto yy4;
							} else {
								if (yych != 0x1A5F) goto yy4;
							}
						} else {
							if (yych <= 0x1A64) {
								if (yych == 0x1A62) goto yy4;
							} else {
								if (yych <= 0x1A6C) goto yy4;
								if (yych <= 0x1A72) goto yy2;
								if (yych <= 0x1A7C) goto yy4;
							}
						}
					}
				}
			} else {
				if (yych <= 0x1BE7) {
					if (yych <= 0x1B42) {
						if (yych <= 0x1B33) {
							if (yych <= 0x1ABD) {
								if (yych <= 0x1A7F) goto yy4;
								if (yych >= 0x1AB0) goto yy4;
							} else {
								if (yych <= 0x1AFF) goto yy2;
								if (yych <= 0x1B03) goto yy4;
							}
						} else {
							if (yych <= 0x1B3A) {
								if (yych != 0x1B35) goto yy4;
							} else {
								if (yych == 0x1B3C) goto yy4;
								if (yych >= 0x1B42) goto yy4;
							}
						}
					} else {
						if (yych <= 0x1BA5) {
							if (yych <= 0x1B7F) {
								if (yych <= 0x1B6A) goto yy2;
								if (yych <= 0x1B73) goto yy4;
							} else {
								if (yych <= 0x1B81) goto yy4;
								if (yych >= 0x1BA2) goto yy4;
							}
						} else {
							if (yych <= 0x1BAA) {
								if (yych <= 0x1BA7) goto yy2;
								if (yych <= 0x1BA9) goto yy4;
							} else {
								if (yych <= 0x1BAD) goto yy4;
								if (yych == 0x1BE6) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x1CE0) {
						if (yych <= 0x1C2B) {
							if (yych <= 0x1BED) {
								if (yych <= 0x1BE9) goto yy4;
								if (yych >= 0x1BED) goto yy4;
							} else {
								if (yych <= 0x1BEE) goto yy2;
								if (yych <= 0x1BF1) goto yy4;
							}
						} else {
							if (yych <= 0x1C37) {
								if (yych <= 0x1C33) goto yy4;
								if (yych >= 0x1C36) goto yy4;
							} else {
								if (yych <= 0x1CCF) goto yy2;
								if (yych != 0x1CD3) goto yy4;
							}
						}
					} else {
						if (yych <= 0x1CF7) {
							if (yych <= 0x1CEC) {
								if (yych <= 0x1CE1) goto yy2;
								if (yych <= 0x1CE8) goto yy4;
							} else {
								if (yych <= 0x1CED) goto yy4;
								if (yych == 0x1CF4) goto yy4;
							}
						} else {
							if (yych <= 0x1DF5) {
								if (yych <= 0x1CF9) goto yy4;
								if (yych >= 0x1DC0) goto yy4;
							} else {
								if (yych <= 0x1DFB) goto yy2;
								if (yych <= 0x1DFF) goto yy4;
								if (yych >= 0x20D0) goto yy4;
							}
						}
					}
				}
			}
		} else {
			if (yych <= 0xAA32) {
				if (yych <= 0xA806) {
					if (yych <= 0x3098) {
						if (yych <= 0x2CF1) {
							if (yych <= 0x20E4) {
								if (yych == 0x20E1) goto yy4;
							} else {
								if (yych <= 0x20F0) goto yy4;
								if (yych >= 0x2CEF) goto yy4;
							}
						} else {
							if (yych <= 0x2DDF) {
								if (yych == 0x2D7F) goto yy4;
							} else {
								if (yych <= 0x2DFF) goto yy4;
								if (yych <= 0x3029) goto yy2;
								if (yych <= 0x302D) goto yy4;
							}
						}
					} else {
						if (yych <= 0xA69E) {
							if (yych <= 0xA66F) {
								if (yych <= 0x309A) goto yy4;
								if (yych >= 0xA66F) goto yy4;
							} else {
								if (yych <= 0xA673) goto yy2;
								if (yych <= 0xA67D) goto yy4;
							}
						} else {
							if (yych <= 0xA6F1) {
								if (yych <= 0xA69F) goto yy4;
								if (yych >= 0xA6F0) goto yy4;
							} else {
								if (yych == 0xA802) goto yy4;
								if (yych >= 0xA806) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0xA97F) {
						if (yych <= 0xA8C4) {
							if (yych <= 0xA824) {
								if (yych == 0xA80B) goto yy4;
							} else {
								if (yych <= 0xA826) goto yy4;
								if (yych >= 0xA8C4) goto yy4;
							}
						} else {
							if (yych <= 0xA925) {
								if (yych <= 0xA8DF) goto yy2;
								if (yych <= 0xA8F1) goto yy4;
							} else {
								if (yych <= 0xA92D) goto yy4;
								if (yych <= 0xA946) goto yy2;
								if (yych <= 0xA951) goto yy4;
							}
						}
					} else {
						if (yych <= 0xA9BB) {
							if (yych <= 0xA9B3) {
								if (yych <= 0xA982) goto yy4;
								if (yych >= 0xA9B3) goto yy4;
							} else {
								if (yych <= 0xA9B5) goto yy2;
								if (yych <= 0xA9B9) goto yy4;
							}
						} else {
							if (yych <= 0xA9E5) {
								if (yych <= 0xA9BC) goto yy4;
								if (yych >= 0xA9E5) goto yy4;
							} else {
								if (yych <= 0xAA28) goto yy2;
								if (yych <= 0xAA2E) goto yy4;
								if (yych >= 0xAA31) goto yy4;
							}
						}
					}
				}
			} else {
				if (yych <= 0xABE8) {
					if (yych <= 0xAAB6) {
						if (yych <= 0xAA4C) {
							if (yych <= 0xAA42) {
								if (yych <= 0xAA34) goto yy2;
								if (yych <= 0xAA36) goto yy4;
							} else {
								if (yych <= 0xAA43) goto yy4;
								if (yych >= 0xAA4C) goto yy4;
							}
						} else {
							if (yych <= 0xAAAF) {
								if (yych == 0xAA7C) goto yy4;
							} else {
								if (yych == 0xAAB1) goto yy2;
								if (yych <= 0xAAB4) goto yy4;
							}
						}
					} else {
						if (yych <= 0xAAEB) {
							if (yych <= 0xAABF) {
								if (yych <= 0xAAB8) goto yy4;
								if (yych >= 0xAABE) goto yy4;
							} else {
								if (yych == 0xAAC1) goto yy4;
							}
						} else {
							if (yych <= 0xAAF6) {
								if (yych <= 0xAAED) goto yy4;
								if (yych >= 0xAAF6) goto yy4;
							} else {
								if (yych == 0xABE5) goto yy4;
								if (yych >= 0xABE8) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0xD82E) {
						if (yych <= 0xD802) {
							if (yych <= 0xD7FF) {
								if (yych == 0xABED) goto yy4;
							} else {
								if (yych <= 0xD800) goto yy6;
								if (yych >= 0xD802) goto yy7;
							}
						} else {
							if (yych <= 0xD805) {
								if (yych <= 0xD803) goto yy2;
								if (yych <= 0xD804) goto yy8;
								goto yy9;
							} else {
								if (yych <= 0xD819) goto yy2;
								if (yych <= 0xD81A) goto yy10;
								if (yych <= 0xD81B) goto yy11;
							}
						}
					} else {
						if (yych <= 0xDB40) {
							if (yych <= 0xD834) {
								if (yych <= 0xD82F) goto yy12;
								if (yych >= 0xD834) goto yy13;
							} else {
								if (yych == 0xD83A) goto yy14;
								if (yych >= 0xDB40) goto yy15;
							}
						} else {
							if (yych <= 0xFDFF) {
								if (yych == 0xFB1E) goto yy4;
							} else {
								if (yych <= 0xFE0F) goto yy4;
								if (yych <= 0xFE1F) goto yy2;
								if (yych <= 0xFE2D) goto yy4;
							}
						}
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "encodings/unicode_group_Mn.x--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 651 "encodings/unicode_group_Mn.x--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_Mn.x--encoding-policy(fail).re"
	{ goto Mn; }
#line 656 "encodings/unicode_group_Mn.x--encoding-policy(fail).c"
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDEDF) {
		if (yych == 0xDDFD) goto yy4;
		goto yy3;
	} else {
		if (yych <= 0xDEE0) goto yy4;
		if (yych <= 0xDF75) goto yy3;
		if (yych <= 0xDF7A) goto yy4;
		goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDE0F) {
		if (yych <= 0xDE04) {
			if (yych <= 0xDE00) goto yy3;
			if (yych <= 0xDE03) goto yy4;
			goto yy3;
		} else {
			if (yych <= 0xDE06) goto yy4;
			if (yych <= 0xDE0B) goto yy3;
			goto yy4;
		}
	} else {
		if (yych <= 0xDE3E) {
			if (yych <= 0xDE37) goto yy3;
			if (yych <= 0xDE3A) goto yy4;
			goto yy3;
		} else {
			if (yych <= 0xDE3F) goto yy4;
			if (yych <= 0xDEE4) goto yy3;
			if (yych <= 0xDEE6) goto yy4;
			goto yy3;
		}
	}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDDB5) {
		if (yych <= 0xDCBA) {
			if (yych <= 0xDC7E) {
				if (yych <= 0xDC01) {
					if (yych <= 0xDC00) goto yy3;
					goto yy4;
				} else {
					if (yych <= 0xDC37) goto yy3;
					if (yych <= 0xDC46) goto yy4;
					goto yy3;
				}
			} else {
				if (yych <= 0xDCB2) {
					if (yych <= 0xDC81) goto yy4;
					goto yy3;
				} else {
					if (yych <= 0xDCB6) goto yy4;
					if (yych <= 0xDCB8) goto yy3;
					goto yy4;
				}
			}
		} else {
			if (yych <= 0xDD2C) {
				if (yych <= 0xDD02) {
					if (yych <= 0xDCFF) goto yy3;
					goto yy4;
				} else {
					if (yych <= 0xDD26) goto yy3;
					if (yych <= 0xDD2B) goto yy4;
					goto yy3;
				}
			} else {
				if (yych <= 0xDD73) {
					if (yych <= 0xDD34) goto yy4;
					if (yych <= 0xDD72) goto yy3;
					goto yy4;
				} else {
					if (yych <= 0xDD7F) goto yy3;
					if (yych <= 0xDD81) goto yy4;
					goto yy3;
				}
			}
		}
	} else {
		if (yych <= 0xDEEA) {
			if (yych <= 0xDE34) {
				if (yych <= 0xDE2E) {
					if (yych <= 0xDDBE) goto yy4;
					goto yy3;
				} else {
					if (yych <= 0xDE31) goto yy4;
					if (yych <= 0xDE33) goto yy3;
					goto yy4;
				}
			} else {
				if (yych <= 0xDEDE) {
					if (yych <= 0xDE35) goto yy3;
					if (yych <= 0xDE37) goto yy4;
					goto yy3;
				} else {
					if (yych <= 0xDEDF) goto yy4;
					if (yych <= 0xDEE2) goto yy3;
					goto yy4;
				}
			}
		} else {
			if (yych <= 0xDF3F) {
				if (yych <= 0xDF01) {
					if (yych <= 0xDF00) goto yy3;
					goto yy4;
				} else {
					if (yych == 0xDF3C) goto yy4;
					goto yy3;
				}
			} else {
				if (yych <= 0xDF6C) {
					if (yych <= 0xDF40) goto yy4;
					if (yych <= 0xDF65) goto yy3;
					goto yy4;
				} else {
					if (yych <= 0xDF6F) goto yy3;
					if (yych <= 0xDF74) goto yy4;
					goto yy3;
				}
			}
		}
	}
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDDC0) {
		if (yych <= 0xDCC1) {
			if (yych <= 0xDCB9) {
				if (yych <= 0xDCB2) goto yy3;
				if (yych <= 0xDCB8) goto yy4;
				goto yy3;
			} else {
				if (yych <= 0xDCBA) goto yy4;
				if (yych <= 0xDCBE) goto yy3;
				if (yych <= 0xDCC0) goto yy4;
				goto yy3;
			}
		} else {
			if (yych <= 0xDDB5) {
				if (yych <= 0xDCC3) goto yy4;
				if (yych <= 0xDDB1) goto yy3;
				goto yy4;
			} else {
				if (yych <= 0xDDBB) goto yy3;
				if (yych == 0xDDBE) goto yy3;
				goto yy4;
			}
		}
	} else {
		if (yych <= 0xDEAA) {
			if (yych <= 0xDE3C) {
				if (yych <= 0xDE32) goto yy3;
				if (yych <= 0xDE3A) goto yy4;
				goto yy3;
			} else {
				if (yych == 0xDE3E) goto yy3;
				if (yych <= 0xDE40) goto yy4;
				goto yy3;
			}
		} else {
			if (yych <= 0xDEAF) {
				if (yych == 0xDEAC) goto yy3;
				if (yych <= 0xDEAD) goto yy4;
				goto yy3;
			} else {
				if (yych == 0xDEB6) goto yy3;
				if (yych <= 0xDEB7) goto yy4;
				goto yy3;
			}
		}
	}
yy10:
	yych = *++YYCURSOR;
	if (yych <= 0xDEEF) goto yy3;
	if (yych <= 0xDEF4) goto yy4;
	if (yych <= 0xDF2F) goto yy3;
	if (yych <= 0xDF36) goto yy4;
	goto yy3;
yy11:
	yych = *++YYCURSOR;
	if (yych <= 0xDF8E) goto yy3;
	if (yych <= 0xDF92) goto yy4;
	goto yy3;
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0xDC9C) goto yy3;
	if (yych <= 0xDC9E) goto yy4;
	goto yy3;
yy13:
	yych = *++YYCURSOR;
	if (yych <= 0xDD84) {
		if (yych <= 0xDD69) {
			if (yych <= 0xDD66) goto yy3;
			goto yy4;
		} else {
			if (yych <= 0xDD7A) goto yy3;
			if (yych <= 0xDD82) goto yy4;
			goto yy3;
		}
	} else {
		if (yych <= 0xDDAD) {
			if (yych <= 0xDD8B) goto yy4;
			if (yych <= 0xDDA9) goto yy3;
			goto yy4;
		} else {
			if (yych <= 0xDE41) goto yy3;
			if (yych <= 0xDE44) goto yy4;
			goto yy3;
		}
	}
yy14:
	yych = *++YYCURSOR;
	if (yych <= 0xDCCF) goto yy3;
	if (yych <= 0xDCD6) goto yy4;
	goto yy3;
yy15:
	yych = *++YYCURSOR;
	if (yych <= 0xDCFF) goto yy3;
	if (yych <= 0xDDEF) goto yy4;
	goto yy3;
}
#line 14 "encodings/unicode_group_Mn.x--encoding-policy(fail).re"

}
static const unsigned int chars_Mn [] = {0x300,0x36f,  0x483,0x487,  0x591,0x5bd,  0x5bf,0x5bf,  0x5c1,0x5c2,  0x5c4,0x5c5,  0x5c7,0x5c7,  0x610,0x61a,  0x64b,0x65f,  0x670,0x670,  0x6d6,0x6dc,  0x6df,0x6e4,  0x6e7,0x6e8,  0x6ea,0x6ed,  0x711,0x711,  0x730,0x74a,  0x7a6,0x7b0,  0x7eb,0x7f3,  0x816,0x819,  0x81b,0x823,  0x825,0x827,  0x829,0x82d,  0x859,0x85b,  0x8e4,0x902,  0x93a,0x93a,  0x93c,0x93c,  0x941,0x948,  0x94d,0x94d,  0x951,0x957,  0x962,0x963,  0x981,0x981,  0x9bc,0x9bc,  0x9c1,0x9c4,  0x9cd,0x9cd,  0x9e2,0x9e3,  0xa01,0xa02,  0xa3c,0xa3c,  0xa41,0xa42,  0xa47,0xa48,  0xa4b,0xa4d,  0xa51,0xa51,  0xa70,0xa71,  0xa75,0xa75,  0xa81,0xa82,  0xabc,0xabc,  0xac1,0xac5,  0xac7,0xac8,  0xacd,0xacd,  0xae2,0xae3,  0xb01,0xb01,  0xb3c,0xb3c,  0xb3f,0xb3f,  0xb41,0xb44,  0xb4d,0xb4d,  0xb56,0xb56,  0xb62,0xb63,  0xb82,0xb82,  0xbc0,0xbc0,  0xbcd,0xbcd,  0xc00,0xc00,  0xc3e,0xc40,  0xc46,0xc48,  0xc4a,0xc4d,  0xc55,0xc56,  0xc62,0xc63,  0xc81,0xc81,  0xcbc,0xcbc,  0xcbf,0xcbf,  0xcc6,0xcc6,  0xccc,0xccd,  0xce2,0xce3,  0xd01,0xd01,  0xd41,0xd44,  0xd4d,0xd4d,  0xd62,0xd63,  0xdca,0xdca,  0xdd2,0xdd4,  0xdd6,0xdd6,  0xe31,0xe31,  0xe34,0xe3a,  0xe47,0xe4e,  0xeb1,0xeb1,  0xeb4,0xeb9,  0xebb,0xebc,  0xec8,0xecd,  0xf18,0xf19,  0xf35,0xf35,  0xf37,0xf37,  0xf39,0xf39,  0xf71,0xf7e,  0xf80,0xf84,  0xf86,0xf87,  0xf8d,0xf97,  0xf99,0xfbc,  0xfc6,0xfc6,  0x102d,0x1030,  0x1032,0x1037,  0x1039,0x103a,  0x103d,0x103e,  0x1058,0x1059,  0x105e,0x1060,  0x1071,0x1074,  0x1082,0x1082,  0x1085,0x1086,  0x108d,0x108d,  0x109d,0x109d,  0x135d,0x135f,  0x1712,0x1714,  0x1732,0x1734,  0x1752,0x1753,  0x1772,0x1773,  0x17b4,0x17b5,  0x17b7,0x17bd,  0x17c6,0x17c6,  0x17c9,0x17d3,  0x17dd,0x17dd,  0x180b,0x180d,  0x18a9,0x18a9,  0x1920,0x1922,  0x1927,0x1928,  0x1932,0x1932,  0x1939,0x193b,  0x1a17,0x1a18,  0x1a1b,0x1a1b,  0x1a56,0x1a56,  0x1a58,0x1a5e,  0x1a60,0x1a60,  0x1a62,0x1a62,  0x1a65,0x1a6c,  0x1a73,0x1a7c,  0x1a7f,0x1a7f,  0x1ab0,0x1abd,  0x1b00,0x1b03,  0x1b34,0x1b34,  0x1b36,0x1b3a,  0x1b3c,0x1b3c,  0x1b42,0x1b42,  0x1b6b,0x1b73,  0x1b80,0x1b81,  0x1ba2,0x1ba5,  0x1ba8,0x1ba9,  0x1bab,0x1bad,  0x1be6,0x1be6,  0x1be8,0x1be9,  0x1bed,0x1bed,  0x1bef,0x1bf1,  0x1c2c,0x1c33,  0x1c36,0x1c37,  0x1cd0,0x1cd2,  0x1cd4,0x1ce0,  0x1ce2,0x1ce8,  0x1ced,0x1ced,  0x1cf4,0x1cf4,  0x1cf8,0x1cf9,  0x1dc0,0x1df5,  0x1dfc,0x1dff,  0x20d0,0x20dc,  0x20e1,0x20e1,  0x20e5,0x20f0,  0x2cef,0x2cf1,  0x2d7f,0x2d7f,  0x2de0,0x2dff,  0x302a,0x302d,  0x3099,0x309a,  0xa66f,0xa66f,  0xa674,0xa67d,  0xa69f,0xa69f,  0xa6f0,0xa6f1,  0xa802,0xa802,  0xa806,0xa806,  0xa80b,0xa80b,  0xa825,0xa826,  0xa8c4,0xa8c4,  0xa8e0,0xa8f1,  0xa926,0xa92d,  0xa947,0xa951,  0xa980,0xa982,  0xa9b3,0xa9b3,  0xa9b6,0xa9b9,  0xa9bc,0xa9bc,  0xa9e5,0xa9e5,  0xaa29,0xaa2e,  0xaa31,0xaa32,  0xaa35,0xaa36,  0xaa43,0xaa43,  0xaa4c,0xaa4c,  0xaa7c,0xaa7c,  0xaab0,0xaab0,  0xaab2,0xaab4,  0xaab7,0xaab8,  0xaabe,0xaabf,  0xaac1,0xaac1,  0xaaec,0xaaed,  0xaaf6,0xaaf6,  0xabe5,0xabe5,  0xabe8,0xabe8,  0xabed,0xabed,  0xfb1e,0xfb1e,  0xfe00,0xfe0f,  0xfe20,0xfe2d,  0x101fd,0x101fd,  0x102e0,0x102e0,  0x10376,0x1037a,  0x10a01,0x10a03,  0x10a05,0x10a06,  0x10a0c,0x10a0f,  0x10a38,0x10a3a,  0x10a3f,0x10a3f,  0x10ae5,0x10ae6,  0x11001,0x11001,  0x11038,0x11046,  0x1107f,0x11081,  0x110b3,0x110b6,  0x110b9,0x110ba,  0x11100,0x11102,  0x11127,0x1112b,  0x1112d,0x11134,  0x11173,0x11173,  0x11180,0x11181,  0x111b6,0x111be,  0x1122f,0x11231,  0x11234,0x11234,  0x11236,0x11237,  0x112df,0x112df,  0x112e3,0x112ea,  0x11301,0x11301,  0x1133c,0x1133c,  0x11340,0x11340,  0x11366,0x1136c,  0x11370,0x11374,  0x114b3,0x114b8,  0x114ba,0x114ba,  0x114bf,0x114c0,  0x114c2,0x114c3,  0x115b2,0x115b5,  0x115bc,0x115bd,  0x115bf,0x115c0,  0x11633,0x1163a,  0x1163d,0x1163d,  0x1163f,0x11640,  0x116ab,0x116ab,  0x116ad,0x116ad,  0x116b0,0x116b5,  0x116b7,0x116b7,  0x16af0,0x16af4,  0x16b30,0x16b36,  0x16f8f,0x16f92,  0x1bc9d,0x1bc9e,  0x1d167,0x1d169,  0x1d17b,0x1d182,  0x1d185,0x1d18b,  0x1d1aa,0x1d1ad,  0x1d242,0x1d244,  0x1e8d0,0x1e8d6,  0xe0100,0xe01ef,  0x0,0x0};
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
	unsigned int * buffer_Mn = new unsigned int [2838];
	YYCTYPE * s = (YYCTYPE *) buffer_Mn;
	unsigned int buffer_len = encode_utf16 (chars_Mn, sizeof (chars_Mn) / sizeof (unsigned int), buffer_Mn);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Mn[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Mn' failed\n");
	delete [] buffer_Mn;
	return 0;
}
