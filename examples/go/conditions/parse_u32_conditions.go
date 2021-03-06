// Code generated by re2c, DO NOT EDIT.
//go:generate re2go -c $INPUT -o $OUTPUT -i
package main

import (
	"errors"
	"testing"
)

var (
	eSyntax   = errors.New("syntax error")
	eOverflow = errors.New("overflow error")
)

const (
	yycinit = iota
	yycbin
	yycdec
	yychex
	yycoct
)


const u32Limit uint64 = 1<<32

func parse_u32(str string) (uint32, error) {
	var cursor, marker int
	result := uint64(0)
	cond := yycinit

	add_digit := func(base uint64, offset byte) {
		result = result * base + uint64(str[cursor-1] - offset)
		if result >= u32Limit {
			result = u32Limit
		}
	}

	
{
	var yych byte
	switch (cond) {
	case yycinit:
		goto yyc_init
	case yycbin:
		goto yyc_bin
	case yycdec:
		goto yyc_dec
	case yychex:
		goto yyc_hex
	case yycoct:
		goto yyc_oct
	}
/* *********************************** */
yyc_init:
	yych = str[cursor]
	switch (yych) {
	case '0':
		goto yy4
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy6
	default:
		goto yy2
	}
yy2:
	cursor += 1
	{ return 0, eSyntax }
yy4:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'B':
		fallthrough
	case 'b':
		goto yy8
	case 'X':
		fallthrough
	case 'x':
		goto yy10
	default:
		goto yy5
	}
yy5:
	cond = yycoct
	goto yyc_oct
yy6:
	cursor += 1
	cursor += -1
	cond = yycdec
	goto yyc_dec
yy8:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '0':
		fallthrough
	case '1':
		goto yy11
	default:
		goto yy9
	}
yy9:
	cursor = marker
	goto yy5
yy10:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		fallthrough
	case 'A':
		fallthrough
	case 'B':
		fallthrough
	case 'C':
		fallthrough
	case 'D':
		fallthrough
	case 'E':
		fallthrough
	case 'F':
		fallthrough
	case 'a':
		fallthrough
	case 'b':
		fallthrough
	case 'c':
		fallthrough
	case 'd':
		fallthrough
	case 'e':
		fallthrough
	case 'f':
		goto yy13
	default:
		goto yy9
	}
yy11:
	cursor += 1
	cursor += -1
	cond = yycbin
	goto yyc_bin
yy13:
	cursor += 1
	cursor += -1
	cond = yychex
	goto yyc_hex
/* *********************************** */
yyc_bin:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy17
	case '0':
		fallthrough
	case '1':
		goto yy21
	default:
		goto yy19
	}
yy17:
	cursor += 1
	{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
yy19:
	cursor += 1
	{ return 0, eSyntax }
yy21:
	cursor += 1
	{ add_digit(2, '0');     goto yyc_bin }
/* *********************************** */
yyc_dec:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy25
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy29
	default:
		goto yy27
	}
yy25:
	cursor += 1
	{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
yy27:
	cursor += 1
	{ return 0, eSyntax }
yy29:
	cursor += 1
	{ add_digit(10, '0');    goto yyc_dec }
/* *********************************** */
yyc_hex:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy33
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy37
	case 'A':
		fallthrough
	case 'B':
		fallthrough
	case 'C':
		fallthrough
	case 'D':
		fallthrough
	case 'E':
		fallthrough
	case 'F':
		goto yy39
	case 'a':
		fallthrough
	case 'b':
		fallthrough
	case 'c':
		fallthrough
	case 'd':
		fallthrough
	case 'e':
		fallthrough
	case 'f':
		goto yy41
	default:
		goto yy35
	}
yy33:
	cursor += 1
	{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
yy35:
	cursor += 1
	{ return 0, eSyntax }
yy37:
	cursor += 1
	{ add_digit(16, '0');    goto yyc_hex }
yy39:
	cursor += 1
	{ add_digit(16, 'A'-10); goto yyc_hex }
yy41:
	cursor += 1
	{ add_digit(16, 'a'-10); goto yyc_hex }
/* *********************************** */
yyc_oct:
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy45
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		goto yy49
	default:
		goto yy47
	}
yy45:
	cursor += 1
	{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
yy47:
	cursor += 1
	{ return 0, eSyntax }
yy49:
	cursor += 1
	{ add_digit(8, '0');     goto yyc_oct }
}

}

func TestLex(t *testing.T) {
	var tests = []struct {
		num uint32
		str string
		err error
	}{
		{1234567890, "1234567890\000", nil},
		{13, "0b1101\000", nil},
		{0x7fe, "0x007Fe\000", nil},
		{0644, "0644\000", nil},
		{0, "9999999999\000", eOverflow},
		{0, "123??\000", eSyntax},
	}

	for _, x := range tests {
		t.Run(x.str, func(t *testing.T) {
			num, err := parse_u32(x.str)
			if !(num == x.num && err == x.err) {
				t.Errorf("got %d, want %d", num, x.num)
			}
		})
	}
}
