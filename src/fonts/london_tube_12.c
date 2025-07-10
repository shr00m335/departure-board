/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --font LondonTube-MABx.ttf --range 32-127 --format lvgl -o LondonTube_12.c
 ******************************************************************************/

#include "lvgl.h"

#ifndef LONDONTUBE_12
#define LONDONTUBE_12 1
#endif

#if LONDONTUBE_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t london_tube_12_glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff,

    /* U+0022 "\"" */
    0x55, 0x50,

    /* U+0023 "#" */
    0x19, 0xd, 0x9f, 0xe6, 0x43, 0x67, 0xf9, 0x90,
    0x98,

    /* U+0024 "$" */
    0x23, 0xf8, 0xc3, 0x16, 0xae, 0x20,

    /* U+0025 "%" */
    0x63, 0x49, 0x25, 0xd, 0x80, 0x80, 0xd8, 0x52,
    0x49, 0x63, 0x0,

    /* U+0026 "&" */
    0x71, 0x12, 0x23, 0x86, 0x16, 0x27, 0x46, 0x7c,

    /* U+0027 "'" */
    0xd8,

    /* U+0028 "(" */
    0x7a, 0xaa, 0xb4,

    /* U+0029 ")" */
    0xa5, 0x55, 0x68,

    /* U+002A "*" */
    0x10, 0x21, 0xf1, 0xc3, 0x80, 0x80,

    /* U+002B "+" */
    0x4f, 0x40,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x10,

    /* U+002F "/" */
    0x6, 0x8, 0x30, 0x41, 0x2, 0x8, 0x30, 0x41,
    0x82, 0x0,

    /* U+0030 "0" */
    0x39, 0x28, 0x61, 0x86, 0x18, 0x52, 0x70,

    /* U+0031 "1" */
    0x75, 0x55, 0x40,

    /* U+0032 "2" */
    0x72, 0x20, 0x82, 0x18, 0x42, 0x18, 0x7c,

    /* U+0033 "3" */
    0xf8, 0x8c, 0x61, 0x84, 0x33, 0xf0,

    /* U+0034 "4" */
    0x11, 0x8c, 0xe5, 0x6b, 0xe2, 0x10,

    /* U+0035 "5" */
    0x7a, 0x10, 0xe1, 0x84, 0x33, 0xf0,

    /* U+0036 "6" */
    0x21, 0x4, 0x3e, 0xce, 0x18, 0x53, 0x78,

    /* U+0037 "7" */
    0xfc, 0x30, 0x86, 0x10, 0xc2, 0x18, 0x40,

    /* U+0038 "8" */
    0x74, 0x63, 0xf7, 0x46, 0x31, 0x70,

    /* U+0039 "9" */
    0x7b, 0x28, 0x61, 0xc5, 0xf0, 0x86, 0x30,

    /* U+003A ":" */
    0x50, 0x10,

    /* U+003B ";" */
    0x10, 0x36,

    /* U+003C "<" */
    0x2d, 0x49, 0x13, 0x20,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x99, 0x32, 0x56, 0x80,

    /* U+003F "?" */
    0xe1, 0x12, 0x44, 0x44, 0x40,

    /* U+0040 "@" */
    0x3e, 0x31, 0xb3, 0xf0, 0x59, 0xed, 0x27, 0xf6,
    0xc6, 0x3e, 0x0,

    /* U+0041 "A" */
    0x18, 0x18, 0x1c, 0x34, 0x24, 0x26, 0x7e, 0x42,
    0x43,

    /* U+0042 "B" */
    0xf2, 0x28, 0xa2, 0xfa, 0x18, 0x61, 0xf8,

    /* U+0043 "C" */
    0x3e, 0x61, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0x63,
    0x3e,

    /* U+0044 "D" */
    0xf9, 0x1a, 0x1c, 0x18, 0x30, 0x61, 0xc6, 0xf8,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf, 0x42, 0x10, 0xf8,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0x42, 0x10, 0x80,

    /* U+0047 "G" */
    0x1e, 0x61, 0xc0, 0x80, 0x87, 0x81, 0xc1, 0x61,
    0x3e,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x82,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x19, 0xe0,

    /* U+004B "K" */
    0x8d, 0x32, 0xc6, 0xc, 0x14, 0x24, 0x4c, 0x8c,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0x80, 0xe0, 0xf8, 0xf6, 0xd9, 0xcc, 0x46, 0x3,
    0x1, 0x80, 0x80,

    /* U+004E "N" */
    0x81, 0xc1, 0xe1, 0xb1, 0x99, 0x8d, 0x87, 0x83,
    0x83,

    /* U+004F "O" */
    0x3e, 0x31, 0xb0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x3e, 0x31, 0xb0, 0x50, 0x18, 0xc, 0x7, 0xe,
    0xc7, 0x1e, 0x80,

    /* U+0052 "R" */
    0xf2, 0x28, 0xa2, 0xf2, 0x49, 0xa2, 0x8c,

    /* U+0053 "S" */
    0x39, 0x24, 0x1c, 0x38, 0x14, 0x51, 0x78,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0056 "V" */
    0x43, 0x42, 0x62, 0x26, 0x24, 0x34, 0x1c, 0x18,
    0x18,

    /* U+0057 "W" */
    0x84, 0x71, 0x8f, 0x39, 0x25, 0x25, 0xac, 0xa5,
    0x1c, 0xe1, 0x8c, 0x21, 0x80,

    /* U+0058 "X" */
    0x61, 0x11, 0x5, 0x83, 0x80, 0xc0, 0xa0, 0xc8,
    0xc6, 0x41, 0x80,

    /* U+0059 "Y" */
    0x44, 0xd8, 0xa0, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0x7f, 0x6, 0x4, 0xc, 0x18, 0x10, 0x30, 0x60,
    0x7f,

    /* U+005B "[" */
    0x6a, 0xaa, 0xa9,

    /* U+005C "\\" */
    0xc0, 0x81, 0x81, 0x3, 0x2, 0x2, 0x4, 0x4,
    0xc, 0x8,

    /* U+005D "]" */
    0x95, 0x55, 0x56,

    /* U+005E "^" */
    0x65,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xd8,

    /* U+0061 "a" */
    0x70, 0x5f, 0x98, 0xfc,

    /* U+0062 "b" */
    0x84, 0x21, 0xe9, 0xc6, 0x33, 0xf0,

    /* U+0063 "c" */
    0x7e, 0x21, 0xc, 0x3c,

    /* U+0064 "d" */
    0x8, 0x42, 0xfc, 0xc6, 0x39, 0x78,

    /* U+0065 "e" */
    0x74, 0x7f, 0xc, 0x3c,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x40,

    /* U+0067 "g" */
    0x3d, 0x24, 0x9c, 0x61, 0xe8, 0x61, 0x78,

    /* U+0068 "h" */
    0x84, 0x21, 0xe8, 0xc6, 0x31, 0x88,

    /* U+0069 "i" */
    0xff,

    /* U+006A "j" */
    0x45, 0x55, 0x58,

    /* U+006B "k" */
    0x84, 0x21, 0x6e, 0x63, 0x96, 0x98,

    /* U+006C "l" */
    0x92, 0x49, 0x24, 0xe0,

    /* U+006D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0xc4,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+0070 "p" */
    0xf4, 0xe3, 0x19, 0xfa, 0x10, 0x80,

    /* U+0071 "q" */
    0x7e, 0x63, 0x1c, 0xbc, 0x21, 0x8,

    /* U+0072 "r" */
    0xf9, 0x88, 0x88,

    /* U+0073 "s" */
    0x76, 0x3c, 0x71, 0xf8,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x47,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+0076 "v" */
    0xcd, 0x24, 0x9c, 0x30, 0xc0,

    /* U+0077 "w" */
    0x88, 0xa6, 0xd7, 0x4a, 0xa3, 0x71, 0x10,

    /* U+0078 "x" */
    0x49, 0xe3, 0xc, 0x79, 0x30,

    /* U+0079 "y" */
    0xc5, 0x26, 0x8c, 0x30, 0xc2, 0x18, 0xc0,

    /* U+007A "z" */
    0x78, 0xcc, 0xce, 0x7c,

    /* U+007B "{" */
    0x12, 0x22, 0x2c, 0x22, 0x22, 0x21,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0x84, 0x44, 0x43, 0x44, 0x44, 0x48,

    /* U+007E "~" */
    0x7, 0xc0,

    /* U+007F "" */
    0x54};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t london_tube_12_glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 55, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 44, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2, .adv_w = 79, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4, .adv_w = 173, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 13, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 170, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 113, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 44, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 39, .adv_w = 51, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 51, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 122, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 51, .adv_w = 93, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 53, .adv_w = 41, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 54, .adv_w = 66, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 55, .adv_w = 41, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 100, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 66, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 65, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 97, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 102, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 41, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 41, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 132, .adv_w = 79, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 93, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 138, .adv_w = 79, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 125, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 138, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 44, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 101, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 165, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 148, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 163, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 127, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 149, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 200, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 51, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 373, .adv_w = 100, .box_w = 7, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 383, .adv_w = 51, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 386, .adv_w = 101, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 387, .adv_w = 94, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 388, .adv_w = 68, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 389, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 111, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 111, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 84, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 102, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 425, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 44, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 43, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 435, .adv_w = 103, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 74, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 162, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 106, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 108, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 111, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 467, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 473, .adv_w = 73, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 93, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 147, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 512, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 71, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 522, .adv_w = 41, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 524, .adv_w = 71, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 530, .adv_w = 91, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 532, .adv_w = 42, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 6}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t london_tube_12_cmaps[] =
    {
        {.range_start = 32, .range_length = 96, .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Pair left and right glyphs for kerning*/
static const uint8_t london_tube_12_kern_pair_glyph_ids[] =
    {
        1, 2,
        1, 6,
        1, 8,
        1, 10,
        1, 14,
        1, 16,
        1, 28,
        1, 32,
        1, 34,
        1, 48,
        1, 53,
        1, 54,
        1, 55,
        1, 56,
        1, 58,
        1, 71,
        1, 85,
        1, 90,
        8, 1,
        8, 8,
        8, 13,
        8, 15,
        8, 32,
        8, 34,
        8, 35,
        8, 36,
        8, 37,
        8, 38,
        8, 39,
        8, 40,
        8, 41,
        8, 42,
        8, 43,
        8, 44,
        8, 45,
        8, 46,
        8, 48,
        8, 49,
        8, 50,
        8, 51,
        8, 54,
        8, 55,
        8, 56,
        8, 58,
        8, 59,
        8, 66,
        8, 67,
        8, 68,
        8, 69,
        8, 70,
        8, 71,
        8, 72,
        8, 73,
        8, 74,
        8, 75,
        8, 76,
        8, 77,
        8, 78,
        8, 79,
        8, 80,
        8, 82,
        8, 84,
        8, 85,
        8, 87,
        8, 88,
        8, 89,
        8, 90,
        8, 91,
        9, 1,
        9, 72,
        9, 75,
        9, 90,
        13, 8,
        13, 17,
        13, 19,
        13, 20,
        13, 25,
        13, 26,
        14, 17,
        14, 18,
        14, 19,
        14, 20,
        14, 21,
        14, 23,
        14, 24,
        14, 25,
        14, 34,
        14, 36,
        14, 40,
        14, 43,
        14, 48,
        14, 53,
        14, 55,
        14, 56,
        14, 57,
        14, 58,
        14, 80,
        15, 8,
        15, 17,
        15, 26,
        16, 1,
        16, 34,
        16, 67,
        17, 13,
        17, 14,
        17, 15,
        19, 14,
        20, 13,
        20, 14,
        20, 15,
        21, 13,
        21, 14,
        21, 15,
        22, 14,
        23, 14,
        24, 13,
        24, 14,
        24, 15,
        25, 14,
        26, 13,
        26, 15,
        32, 8,
        34, 8,
        34, 14,
        34, 27,
        34, 28,
        34, 36,
        34, 40,
        34, 48,
        34, 50,
        34, 52,
        34, 53,
        34, 54,
        34, 55,
        34, 56,
        34, 58,
        34, 68,
        34, 69,
        34, 71,
        34, 72,
        34, 77,
        34, 80,
        34, 82,
        34, 85,
        34, 86,
        34, 87,
        34, 88,
        34, 90,
        35, 8,
        35, 14,
        35, 55,
        35, 56,
        35, 58,
        35, 80,
        35, 90,
        36, 8,
        36, 14,
        36, 40,
        36, 43,
        36, 66,
        36, 70,
        36, 73,
        36, 74,
        36, 75,
        36, 77,
        36, 80,
        36, 83,
        36, 84,
        36, 89,
        36, 90,
        36, 91,
        37, 14,
        37, 34,
        37, 55,
        37, 56,
        37, 58,
        38, 36,
        38, 72,
        39, 8,
        39, 13,
        39, 14,
        39, 15,
        39, 27,
        39, 28,
        39, 34,
        39, 36,
        39, 72,
        39, 83,
        39, 86,
        40, 14,
        40, 53,
        40, 56,
        40, 58,
        41, 8,
        41, 13,
        41, 15,
        42, 72,
        43, 8,
        43, 14,
        43, 16,
        43, 72,
        44, 8,
        44, 14,
        44, 36,
        44, 48,
        44, 53,
        44, 54,
        44, 56,
        44, 58,
        44, 66,
        44, 70,
        44, 72,
        44, 80,
        44, 86,
        44, 90,
        45, 8,
        45, 14,
        45, 48,
        45, 53,
        45, 54,
        45, 55,
        45, 56,
        45, 58,
        45, 72,
        45, 90,
        48, 8,
        48, 13,
        48, 14,
        48, 15,
        48, 27,
        48, 28,
        48, 34,
        48, 55,
        48, 57,
        48, 58,
        48, 72,
        49, 8,
        49, 13,
        49, 14,
        49, 15,
        49, 16,
        49, 27,
        49, 28,
        49, 34,
        49, 66,
        49, 70,
        49, 72,
        49, 79,
        49, 80,
        49, 83,
        49, 84,
        51, 8,
        51, 14,
        51, 58,
        51, 66,
        51, 70,
        51, 72,
        51, 80,
        51, 86,
        52, 16,
        53, 13,
        53, 14,
        53, 15,
        53, 16,
        53, 27,
        53, 28,
        53, 34,
        53, 36,
        53, 66,
        53, 68,
        53, 70,
        53, 72,
        53, 80,
        53, 83,
        53, 84,
        53, 86,
        53, 88,
        53, 89,
        53, 90,
        54, 16,
        54, 34,
        54, 72,
        55, 13,
        55, 14,
        55, 15,
        55, 16,
        55, 27,
        55, 28,
        55, 34,
        55, 48,
        55, 66,
        55, 70,
        55, 72,
        55, 80,
        55, 86,
        55, 90,
        56, 8,
        56, 13,
        56, 14,
        56, 15,
        56, 16,
        56, 27,
        56, 28,
        56, 34,
        56, 66,
        56, 70,
        56, 72,
        56, 80,
        56, 83,
        56, 86,
        56, 90,
        57, 1,
        57, 14,
        57, 36,
        57, 48,
        57, 72,
        58, 13,
        58, 14,
        58, 15,
        58, 16,
        58, 27,
        58, 28,
        58, 34,
        58, 36,
        58, 48,
        58, 66,
        58, 70,
        58, 72,
        58, 74,
        58, 80,
        58, 86,
        59, 14,
        59, 72,
        66, 72,
        66, 79,
        67, 8,
        67, 10,
        67, 66,
        67, 91,
        68, 10,
        68, 70,
        70, 8,
        70, 10,
        70, 67,
        70, 72,
        71, 8,
        71, 10,
        71, 13,
        71, 15,
        71, 16,
        71, 66,
        71, 70,
        71, 72,
        71, 74,
        71, 75,
        71, 80,
        71, 82,
        71, 84,
        71, 88,
        71, 90,
        71, 91,
        72, 8,
        72, 10,
        72, 15,
        72, 34,
        72, 53,
        72, 55,
        72, 56,
        72, 57,
        72, 58,
        72, 66,
        72, 69,
        72, 70,
        72, 71,
        72, 72,
        72, 75,
        72, 77,
        72, 78,
        72, 79,
        72, 80};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t london_tube_12_kern_pair_values[] =
    {
        -27, -27, -9, -27, -4, -27, -27, -27,
        -9, -7, -11, -4, -11, -11, -14, -6,
        -7, -7, -15, -5, -38, -37, 8, -24,
        7, -5, 7, 7, 6, -6, 6, 8,
        -33, 9, 9, 0, -7, 5, -5, 5,
        0, 6, 8, 7, -7, -11, 2, -14,
        -17, -17, -3, -15, 0, 3, 2, 4,
        4, -7, -5, -15, -12, -10, -5, 5,
        7, 5, 5, -7, -27, 11, 23, 12,
        -23, -2, 9, 2, 4, -4, 9, -9,
        -7, -6, 6, 7, -13, 8, -4, 4,
        7, -16, 7, -31, -11, -11, -7, -17,
        4, -26, -3, -9, -27, -12, 3, -4,
        5, -5, -5, -6, 3, -3, -5, 5,
        -5, 5, 5, -12, -18, -14, 9, -16,
        -15, 8, -17, -4, 4, 4, -4, -3,
        -7, -5, 4, -14, -4, -14, -10, -11,
        5, 7, 2, 3, -1, 5, 5, -1,
        1, -4, -4, -12, -8, 5, -4, -4,
        -4, 1, -4, 3, 4, -3, -3, 4,
        1, 1, 3, 3, 2, -2, -3, -2,
        -5, -3, -5, 6, -4, -4, -4, -7,
        -6, -4, 4, -37, -10, -37, -8, -8,
        -23, -7, -17, -4, -4, 4, -4, -4,
        -4, 5, -4, 0, -3, 2, -4, -6,
        -2, 4, -18, -13, -12, -7, -4, -7,
        -7, -4, -10, -2, -11, -9, -13, -39,
        -4, -7, -39, -4, -20, -21, -27, -2,
        -16, -2, -8, 5, -8, 4, 4, -4,
        -4, -11, -7, -2, 4, -35, -15, -34,
        -36, 2, 5, -18, -7, -7, -6, -4,
        -7, 0, -4, -16, -20, -20, -4, -4,
        -9, -4, -12, -4, -29, -34, -37, -33,
        -26, -26, -30, -7, -28, -30, -33, -38,
        -33, -33, -33, -33, -33, -30, -33, -9,
        -10, -5, -31, -24, -34, -42, -13, -13,
        -28, -12, -22, -16, -18, -18, -11, -5,
        4, -23, -11, -23, -29, -11, -11, -7,
        -11, -11, -14, -11, -7, -7, -4, -13,
        -13, -14, -11, -7, -25, -30, -32, -32,
        -20, -25, -31, -16, -19, -27, -21, -29,
        -7, -26, -22, -12, 0, 2, -1, -7,
        -8, 1, 2, -10, 1, -6, -9, 1,
        -2, 5, 5, -21, -21, -20, -5, -3,
        -3, 3, 3, -5, -5, -3, 3, 1,
        -5, 5, 5, -10, -6, -24, -12, -10,
        -6, -21, -4, -6, -2, 6, 3, 14,
        -4, -1, -4, -4};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t london_tube_12_kern_pairs =
    {
        .glyph_ids = london_tube_12_kern_pair_glyph_ids,
        .values = london_tube_12_kern_pair_values,
        .pair_cnt = 380,
        .glyph_ids_size = 0};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t london_tube_12_font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = london_tube_12_glyph_bitmap,
    .glyph_dsc = london_tube_12_glyph_dsc,
    .cmaps = london_tube_12_cmaps,
    .kern_dsc = &london_tube_12_kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t london_tube_12 = {
#else
lv_font_t LondonTube_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 12,                              /*The maximum line height required by the font*/
    .base_line = 3,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &london_tube_12_font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if LONDONTUBE_12*/
