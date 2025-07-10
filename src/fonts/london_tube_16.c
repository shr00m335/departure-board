/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --font LondonTube-MABx.ttf --range 32-127 --format lvgl -o LondonTube.c
 ******************************************************************************/

#include "lvgl.h"

#ifndef LONDONTUBE_16
#define LONDONTUBE_16 1
#endif

#if LONDONTUBE_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t london_tube_16_glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xcf,

    /* U+0022 "\"" */
    0xd6, 0xe5, 0x20,

    /* U+0023 "#" */
    0x6, 0x60, 0x33, 0x1, 0x98, 0x7f, 0xf0, 0xcc,
    0x4, 0x60, 0x66, 0x1f, 0xfc, 0x11, 0x1, 0x98,
    0x0,

    /* U+0024 "$" */
    0x18, 0x79, 0xf3, 0xc7, 0x87, 0x87, 0x8f, 0x5e,
    0xfd, 0xf0, 0xc0,

    /* U+0025 "%" */
    0x78, 0x66, 0x62, 0x33, 0x21, 0x9b, 0xc, 0xd0,
    0x3d, 0x0, 0x1b, 0xc0, 0xb3, 0xd, 0x98, 0x4c,
    0xc4, 0x66, 0x61, 0xe0,

    /* U+0026 "&" */
    0x7c, 0x63, 0x31, 0x99, 0xc7, 0xc1, 0xc1, 0xe1,
    0xb8, 0xcd, 0x63, 0x91, 0xc7, 0xe0,

    /* U+0027 "'" */
    0x19, 0x24,

    /* U+0028 "(" */
    0x26, 0x64, 0xcc, 0xcc, 0xcc, 0xc4, 0x66, 0x20,

    /* U+0029 ")" */
    0x46, 0x62, 0x33, 0x33, 0x33, 0x36, 0x66, 0x40,

    /* U+002A "*" */
    0x10, 0x18, 0x18, 0xff, 0x3c, 0x3c, 0x3c, 0x44,

    /* U+002B "+" */
    0x63, 0x3e, 0xc6, 0x0,

    /* U+002C "," */
    0x19, 0x24,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xb0,

    /* U+002F "/" */
    0x0, 0xc0, 0x20, 0x18, 0xc, 0x3, 0x1, 0x80,
    0x60, 0x30, 0xc, 0x6, 0x1, 0x0, 0xc0, 0x60,
    0x18, 0xc, 0x0,

    /* U+0030 "0" */
    0x3c, 0x66, 0x42, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x42, 0x66, 0x3c,

    /* U+0031 "1" */
    0x7f, 0xb6, 0xdb, 0x6d, 0xb0,

    /* U+0032 "2" */
    0x79, 0x18, 0x18, 0x30, 0x61, 0xc3, 0xe, 0x38,
    0x61, 0x83, 0xf0,

    /* U+0033 "3" */
    0xfe, 0x18, 0x60, 0xc3, 0x83, 0x83, 0x83, 0x6,
    0xe, 0x37, 0xc0,

    /* U+0034 "4" */
    0xc, 0x18, 0x70, 0xe3, 0xcd, 0x9b, 0x66, 0xfe,
    0x18, 0x30, 0x60,

    /* U+0035 "5" */
    0x3f, 0x30, 0x20, 0x20, 0x7c, 0x6, 0x3, 0x3,
    0x3, 0x3, 0x46, 0x7c,

    /* U+0036 "6" */
    0x10, 0x30, 0x60, 0x60, 0xfc, 0xe6, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0037 "7" */
    0xff, 0x7, 0x6, 0x6, 0xc, 0xc, 0x18, 0x18,
    0x30, 0x30, 0x60, 0x60,

    /* U+0038 "8" */
    0x38, 0xee, 0xc6, 0xc6, 0x7c, 0x38, 0x6e, 0xc7,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x67, 0x3e,
    0x6, 0x4, 0xc, 0x18,

    /* U+003A ":" */
    0xb0, 0xb,

    /* U+003B ";" */
    0x48, 0x0, 0x32, 0x48,

    /* U+003C "<" */
    0x19, 0x88, 0xc4, 0x63, 0x8, 0x61, 0xc, 0x30,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0xc2, 0x18, 0x63, 0xc, 0x66, 0x33, 0x11, 0x80,

    /* U+003F "?" */
    0x7d, 0xc, 0x18, 0x71, 0xc3, 0xc, 0x18, 0x30,
    0x0, 0xc0, 0x0,

    /* U+0040 "@" */
    0xf, 0x3, 0xc, 0x47, 0xa4, 0x9a, 0x81, 0x98,
    0xf9, 0x99, 0x1b, 0x31, 0x5f, 0x24, 0x2, 0x30,
    0xc0, 0xf0,

    /* U+0041 "A" */
    0x8, 0x7, 0x1, 0xc0, 0x58, 0x36, 0xd, 0x86,
    0x31, 0x8c, 0x7f, 0x30, 0x6c, 0x1a, 0x2,

    /* U+0042 "B" */
    0xf8, 0xc4, 0xc6, 0xc6, 0xcc, 0xfc, 0xc6, 0xc3,
    0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0043 "C" */
    0xf, 0xc7, 0xd, 0x80, 0xb0, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0x60, 0xc, 0x4, 0xe1, 0x87,
    0xe0,

    /* U+0044 "D" */
    0xfe, 0x30, 0xcc, 0x1b, 0x6, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc1, 0xb0, 0x6c, 0x33, 0xf8,

    /* U+0045 "E" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0x6, 0x0,

    /* U+0047 "G" */
    0xf, 0xc7, 0xd, 0x80, 0x30, 0xc, 0x1, 0x83,
    0xf0, 0x1e, 0x3, 0x60, 0x6c, 0xc, 0xc3, 0x87,
    0xe0,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xff, 0xfc,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x39,
    0x9c,

    /* U+004B "K" */
    0xc3, 0xb1, 0xcc, 0xc3, 0x60, 0xf0, 0x38, 0xf,
    0x3, 0x60, 0xcc, 0x31, 0x8c, 0x33, 0x6,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+004D "M" */
    0xc0, 0x3e, 0x7, 0xf0, 0xfd, 0xb, 0xd9, 0xbc,
    0xf3, 0xc6, 0x3c, 0x43, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3,

    /* U+004E "N" */
    0xc0, 0xf8, 0x3f, 0xf, 0xc3, 0xd8, 0xf3, 0x3c,
    0xcf, 0x1b, 0xc3, 0xf0, 0xfc, 0x1f, 0x3,

    /* U+004F "O" */
    0xf, 0x3, 0xc, 0x60, 0x66, 0x6, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0x60, 0x66, 0x6, 0x30,
    0xc0, 0xf0,

    /* U+0050 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0xf, 0x3, 0xc, 0x60, 0x66, 0x6, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xe0, 0xf6, 0xe, 0x30,
    0xf1, 0xfb,

    /* U+0052 "R" */
    0xf8, 0x66, 0x31, 0x98, 0xcc, 0x66, 0x63, 0xe1,
    0x90, 0xcc, 0x63, 0x31, 0xd8, 0x60,

    /* U+0053 "S" */
    0x3e, 0x64, 0x60, 0x60, 0x7c, 0x3e, 0x1f, 0x7,
    0x3, 0x43, 0x66, 0x3c,

    /* U+0054 "T" */
    0xff, 0x8c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x26, 0x18, 0x78,

    /* U+0056 "V" */
    0x80, 0xb0, 0x6c, 0x19, 0x4, 0x63, 0x18, 0xc3,
    0x20, 0xd8, 0x16, 0x7, 0x1, 0xc0, 0x30,

    /* U+0057 "W" */
    0xc0, 0x7, 0x86, 0xb, 0xe, 0x32, 0x1c, 0x66,
    0x68, 0xcc, 0xd9, 0x9, 0x36, 0x1e, 0x2c, 0x3c,
    0x78, 0x78, 0xe0, 0x61, 0xc0, 0xc1, 0x80,

    /* U+0058 "X" */
    0x70, 0x63, 0xc, 0x19, 0xc0, 0xd8, 0xf, 0x0,
    0x60, 0xf, 0x0, 0xd8, 0x19, 0xc3, 0xc, 0x70,
    0x66, 0x3,

    /* U+0059 "Y" */
    0x61, 0x98, 0x63, 0x30, 0x78, 0x1e, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+005A "Z" */
    0x7f, 0xc0, 0x38, 0xe, 0x1, 0x80, 0x70, 0x1c,
    0x3, 0x0, 0xe0, 0x38, 0x6, 0x1, 0xc0, 0x7f,
    0xf0,

    /* U+005B "[" */
    0x7b, 0x6d, 0xb6, 0xdb, 0x6d, 0xb3,

    /* U+005C "\\" */
    0xc0, 0x30, 0x6, 0x0, 0x80, 0x30, 0x6, 0x1,
    0x80, 0x30, 0xc, 0x1, 0x80, 0x60, 0xc, 0x1,
    0x0, 0x60, 0xc,

    /* U+005D "]" */
    0xcd, 0xb6, 0xdb, 0x6d, 0xb6, 0xde,

    /* U+005E "^" */
    0x63, 0xa2,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0x99, 0x80,

    /* U+0061 "a" */
    0x78, 0x30, 0xdf, 0xef, 0x3c, 0xdf,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc6, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0063 "c" */
    0x3e, 0xc7, 0x6, 0xc, 0x18, 0x18, 0x9f,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3, 0x3f, 0x63, 0xc3, 0xc3,
    0xc3, 0xc3, 0x63, 0x3f,

    /* U+0065 "e" */
    0x3c, 0xcb, 0xf, 0xfc, 0x18, 0x18, 0x9f,

    /* U+0066 "f" */
    0x1d, 0xc6, 0x18, 0xfd, 0x86, 0x18, 0x61, 0x86,
    0x18,

    /* U+0067 "g" */
    0x3f, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x60, 0x3e,
    0x67, 0xc3, 0xc3, 0x7e,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xf, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x30,

    /* U+0069 "i" */
    0xf3, 0xff, 0xfc,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0x33, 0xe0,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xce, 0xd8, 0xf0, 0xf0,
    0xf8, 0xdc, 0xce, 0xc6,

    /* U+006C "l" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc7,

    /* U+006D "m" */
    0xff, 0xec, 0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63,

    /* U+006E "n" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0070 "p" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3f, 0x63, 0xc3, 0xc3, 0xc3, 0xc3, 0x63, 0x3f,
    0x3, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0xfe, 0x31, 0x8c, 0x63, 0x18,

    /* U+0073 "s" */
    0x7d, 0x8b, 0x7, 0xe3, 0xe0, 0xe1, 0xfe,

    /* U+0074 "t" */
    0x61, 0x8f, 0xd8, 0x61, 0x86, 0x18, 0x60, 0xf0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbf,

    /* U+0076 "v" */
    0xc2, 0x46, 0x66, 0x64, 0x3c, 0x3c, 0x18, 0x18,

    /* U+0077 "w" */
    0xc0, 0x34, 0x63, 0x67, 0x26, 0xf6, 0x2d, 0x62,
    0x9c, 0x39, 0xc1, 0x8c,

    /* U+0078 "x" */
    0x66, 0x26, 0x3c, 0x18, 0x1c, 0x3c, 0x66, 0x63,

    /* U+0079 "y" */
    0xc3, 0x63, 0x66, 0x26, 0x3c, 0x1c, 0x18, 0x18,
    0x10, 0x30, 0x20, 0xc0,

    /* U+007A "z" */
    0xfc, 0x71, 0x8c, 0x31, 0x8c, 0x3f,

    /* U+007B "{" */
    0x19, 0x8c, 0x63, 0x19, 0x98, 0x61, 0x8c, 0x63,
    0x18, 0xc3,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc3, 0x18, 0xc6, 0x30, 0x83, 0x33, 0x18, 0xc6,
    0x31, 0x98,

    /* U+007E "~" */
    0x1, 0xfd, 0x30,

    /* U+007F "" */
    0xfa};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t london_tube_16_glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 73, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 59, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 105, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 7, .adv_w = 231, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 24, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 226, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 151, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 58, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 71, .adv_w = 68, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 79, .adv_w = 68, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 87, .adv_w = 163, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 95, .adv_w = 124, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 99, .adv_w = 55, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 101, .adv_w = 89, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 102, .adv_w = 55, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 133, .box_w = 10, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 122, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 87, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 129, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 140, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 131, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 155, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 55, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 55, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 238, .adv_w = 105, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 124, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 249, .adv_w = 105, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 115, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 211, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 167, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 188, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 185, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 150, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 206, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 183, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 59, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 134, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 220, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 198, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 211, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 501, .adv_w = 217, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 169, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 141, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 199, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 182, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 267, .box_w = 15, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 200, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 68, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 668, .adv_w = 133, .box_w = 10, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 687, .adv_w = 68, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 693, .adv_w = 134, .box_w = 5, .box_h = 3, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 695, .adv_w = 125, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 696, .adv_w = 91, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 698, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 136, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 763, .adv_w = 143, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 59, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 58, .box_w = 4, .box_h = 15, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 785, .adv_w = 138, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 98, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 216, .box_w = 12, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 842, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 854, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 143, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 196, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 131, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 921, .adv_w = 132, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 95, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 937, .adv_w = 54, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 941, .adv_w = 95, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 951, .adv_w = 121, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 954, .adv_w = 57, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t london_tube_16_cmaps[] =
    {
        {.range_start = 32, .range_length = 96, .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Pair left and right glyphs for kerning*/
static const uint8_t london_tube_16_kern_pair_glyph_ids[] =
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
static const int8_t london_tube_16_kern_pair_values[] =
    {
        -37, -37, -12, -37, -5, -37, -37, -37,
        -12, -9, -14, -5, -14, -14, -18, -8,
        -10, -9, -20, -6, -50, -49, 11, -31,
        10, -7, 10, 10, 8, -8, 8, 10,
        -44, 12, 12, 0, -9, 6, -6, 7,
        1, 8, 11, 9, -9, -15, 3, -19,
        -22, -22, -4, -19, 1, 4, 3, 5,
        5, -9, -6, -19, -16, -14, -6, 6,
        10, 6, 7, -10, -37, 15, 31, 15,
        -30, -3, 12, 3, 5, -5, 12, -12,
        -9, -8, 8, 9, -18, 11, -5, 5,
        9, -21, 9, -41, -15, -14, -9, -23,
        5, -34, -4, -13, -37, -16, 5, -6,
        7, -6, -7, -8, 4, -5, -6, 6,
        -7, 7, 7, -15, -24, -19, 12, -21,
        -20, 11, -23, -6, 5, 5, -5, -5,
        -9, -7, 5, -18, -5, -18, -14, -14,
        6, 9, 3, 4, -2, 7, 7, -2,
        2, -5, -5, -15, -11, 7, -5, -5,
        -5, 2, -5, 5, 6, -5, -4, 5,
        2, 2, 5, 4, 3, -3, -5, -3,
        -7, -4, -6, 8, -5, -5, -5, -9,
        -8, -5, 5, -50, -13, -50, -10, -10,
        -31, -10, -23, -5, -5, 6, -5, -5,
        -5, 6, -5, 0, -4, 3, -5, -8,
        -2, 5, -24, -17, -16, -9, -5, -9,
        -9, -5, -14, -3, -15, -12, -17, -52,
        -5, -9, -52, -5, -26, -27, -36, -3,
        -21, -3, -10, 7, -10, 5, 5, -5,
        -5, -14, -9, -2, 5, -47, -20, -45,
        -47, 3, 7, -24, -9, -9, -7, -5,
        -9, 0, -5, -22, -27, -26, -5, -5,
        -12, -5, -16, -5, -39, -45, -50, -44,
        -35, -35, -40, -9, -38, -40, -44, -50,
        -44, -44, -44, -44, -44, -40, -44, -12,
        -13, -7, -42, -31, -45, -57, -17, -17,
        -37, -16, -29, -21, -24, -24, -14, -7,
        5, -31, -15, -31, -38, -15, -15, -9,
        -14, -14, -18, -14, -9, -9, -5, -18,
        -18, -18, -14, -10, -34, -40, -42, -43,
        -26, -34, -41, -22, -25, -37, -28, -39,
        -9, -35, -30, -15, 1, 3, -2, -10,
        -11, 1, 2, -14, 1, -8, -12, 1,
        -2, 6, 6, -28, -28, -27, -6, -4,
        -4, 5, 5, -6, -6, -5, 4, 2,
        -7, 7, 6, -14, -7, -33, -15, -13,
        -8, -28, -5, -7, -3, 8, 5, 19,
        -6, -1, -5, -6};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t london_tube_16_kern_pairs =
    {
        .glyph_ids = london_tube_16_kern_pair_glyph_ids,
        .values = london_tube_16_kern_pair_values,
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
static const lv_font_fmt_txt_dsc_t london_tube_16_font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = london_tube_16_glyph_bitmap,
    .glyph_dsc = london_tube_16_glyph_dsc,
    .cmaps = london_tube_16_cmaps,
    .kern_dsc = &london_tube_16_kern_pairs,
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
const lv_font_t london_tube_16 = {
#else
lv_font_t LondonTube_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 17,                              /*The maximum line height required by the font*/
    .base_line = 4,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 0,
#endif
    .dsc = &london_tube_16_font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if LONDONTUBE_16*/
