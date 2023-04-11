/*
 * Copyright (c) 2016 Thomas Pornin <pornin@bolet.org>
 *
 * Permission is hereby granted, free of charge, to any person obtaining 
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be 
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "inner.h"

static const unsigned char P192_N[] = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0xDE, 0xF8, 0x36,
	0x14, 0x6B, 0xC9, 0xB1, 0xB4, 0xD2, 0x28, 0x31
};

static const unsigned char P192_G[] = {
	0x04, 0x18, 0x8D, 0xA8, 0x0E, 0xB0, 0x30, 0x90,
	0xF6, 0x7C, 0xBF, 0x20, 0xEB, 0x43, 0xA1, 0x88,
	0x00, 0xF4, 0xFF, 0x0A, 0xFD, 0x82, 0xFF, 0x10,
	0x12, 0x07, 0x19, 0x2B, 0x95, 0xFF, 0xC8, 0xDA,
	0x78, 0x63, 0x10, 0x11, 0xED, 0x6B, 0x24, 0xCD,
	0xD5, 0x73, 0xF9, 0x77, 0xA1, 0x1E, 0x79, 0x48,
	0x11
};

/* see inner.h */
const br_ec_curve_def br_secp192r1 = {
	BR_EC_secp192r1,
	P192_N, sizeof P192_N,
	P192_G, sizeof P192_G
};
