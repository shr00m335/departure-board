/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --font LondonTube-MABx.ttf --range 32-127 --format lvgl -o london_tube_10.c
 ******************************************************************************/

#include "lvgl.h"

#ifndef LONDON_TUBE_10
#define LONDON_TUBE_10 1
#endif

#if LONDON_TUBE_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t london_tube_10_glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfe,

    /* U+0022 "\"" */
    0x7, 0x0,

    /* U+0023 "#" */
    0x12, 0x12, 0x7f, 0x24, 0xfe, 0x68, 0x48,

    /* U+0024 "$" */
    0x5b, 0x37, 0xd0,

    /* U+0025 "%" */
    0x66, 0x94, 0x68, 0x1e, 0x19, 0x29, 0x66,

    /* U+0026 "&" */
    0x64, 0xac, 0xca, 0x4d, 0xe0,

    /* U+0027 "'" */
    0x54,

    /* U+0028 "(" */
    0x6a, 0xaa, 0x40,

    /* U+0029 ")" */
    0x95, 0x55, 0x80,

    /* U+002A "*" */
    0x0, 0x47, 0x8c, 0x68,

    /* U+002B "+" */
    0x5d, 0x0,

    /* U+002C "," */
    0x54,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0xc, 0x21, 0x4, 0x20, 0x84, 0x30, 0x80,

    /* U+0030 "0" */
    0x76, 0x63, 0x18, 0xed, 0xc0,

    /* U+0031 "1" */
    0xf5, 0x54,

    /* U+0032 "2" */
    0xe0, 0x84, 0x22, 0x23, 0xe0,

    /* U+0033 "3" */
    0xf2, 0x63, 0x11, 0xe0,

    /* U+0034 "4" */
    0x13, 0x55, 0xf1, 0x10,

    /* U+0035 "5" */
    0xf8, 0xe1, 0x11, 0xe0,

    /* U+0036 "6" */
    0x62, 0x3d, 0x18, 0xe5, 0xc0,

    /* U+0037 "7" */
    0xf8, 0x84, 0x42, 0x21, 0x0,

    /* U+0038 "8" */
    0x64, 0xb4, 0xe8, 0xc5, 0xc0,

    /* U+0039 "9" */
    0x74, 0xe3, 0x17, 0x88, 0x80,

    /* U+003A ":" */
    0x40, 0xc0,

    /* U+003B ";" */
    0x41, 0x50,

    /* U+003C "<" */
    0x22, 0x4c, 0x42, 0x20,

    /* U+003D "=" */
    0xe3, 0x80,

    /* U+003E ">" */
    0x44, 0x21, 0x24, 0x40,

    /* U+003F "?" */
    0xe1, 0x12, 0x44, 0x4,

    /* U+0040 "@" */
    0x38, 0xba, 0x2c, 0xda, 0xaf, 0x8e, 0x0,

    /* U+0041 "A" */
    0x10, 0x50, 0xa1, 0x47, 0xc8, 0x91, 0x0,

    /* U+0042 "B" */
    0xf4, 0xbd, 0x18, 0xc7, 0xc0,

    /* U+0043 "C" */
    0x3c, 0x86, 0x4, 0x8, 0x8, 0x4f, 0x0,

    /* U+0044 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x2f, 0x0,

    /* U+0045 "E" */
    0xf4, 0x3d, 0x8, 0x43, 0xe0,

    /* U+0046 "F" */
    0xf8, 0xf8, 0x88, 0x80,

    /* U+0047 "G" */
    0x3c, 0x86, 0x4, 0x78, 0x28, 0x4f, 0x0,

    /* U+0048 "H" */
    0x86, 0x1f, 0xe1, 0x86, 0x18, 0x40,

    /* U+0049 "I" */
    0xfe,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x60,

    /* U+004B "K" */
    0x9a, 0xcc, 0x30, 0xa2, 0x48, 0x80,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0xf0,

    /* U+004D "M" */
    0x83, 0x8e, 0xac, 0x99, 0x30, 0x60, 0x80,

    /* U+004E "N" */
    0x87, 0x1a, 0x6d, 0x96, 0x38, 0x40,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+0050 "P" */
    0xf4, 0x63, 0xe8, 0x42, 0x0,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x80,

    /* U+0052 "R" */
    0xe4, 0xa5, 0xca, 0x4a, 0x60,

    /* U+0053 "S" */
    0x68, 0xc6, 0x19, 0xe0,

    /* U+0054 "T" */
    0xfc, 0x82, 0x8, 0x20, 0x82, 0x0,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x80,

    /* U+0056 "V" */
    0x44, 0x89, 0x11, 0x42, 0x87, 0x4, 0x0,

    /* U+0057 "W" */
    0x44, 0x53, 0x34, 0xc8, 0xaa, 0x32, 0x8c, 0xc3,
    0x10,

    /* U+0058 "X" */
    0x46, 0x24, 0x18, 0x18, 0x3c, 0x64, 0x42,

    /* U+0059 "Y" */
    0x8a, 0x9c, 0x42, 0x10, 0x80,

    /* U+005A "Z" */
    0x7e, 0x8, 0x20, 0x83, 0x4, 0x1f, 0x80,

    /* U+005B "[" */
    0xea, 0xaa, 0x90,

    /* U+005C "\\" */
    0xc1, 0x2, 0x8, 0x10, 0x40, 0x83, 0x4,

    /* U+005D "]" */
    0xd5, 0x55, 0x70,

    /* U+005E "^" */
    0x54,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0xc0,

    /* U+0061 "a" */
    0x71, 0xf9, 0xf0,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc7, 0xc0,

    /* U+0063 "c" */
    0x78, 0x88, 0x70,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc5, 0xe0,

    /* U+0065 "e" */
    0x74, 0xbd, 0x7, 0x0,

    /* U+0066 "f" */
    0x34, 0xf4, 0x44, 0x40,

    /* U+0067 "g" */
    0x3d, 0x24, 0x9c, 0x61, 0x64, 0xde,

    /* U+0068 "h" */
    0x88, 0xe9, 0x99, 0x90,

    /* U+0069 "i" */
    0xfe,

    /* U+006A "j" */
    0x55, 0x55, 0x70,

    /* U+006B "k" */
    0x84, 0x2d, 0xcc, 0x52, 0x40,

    /* U+006C "l" */
    0x92, 0x49, 0x38,

    /* U+006D "m" */
    0xed, 0x26, 0x4c, 0x99, 0x20,

    /* U+006E "n" */
    0xe9, 0x99, 0x90,

    /* U+006F "o" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0070 "p" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+0071 "q" */
    0x7c, 0x63, 0x17, 0x84, 0x21,

    /* U+0072 "r" */
    0xf2, 0x48,

    /* U+0073 "s" */
    0xf8, 0x71, 0xf0,

    /* U+0074 "t" */
    0x4f, 0x44, 0x47,

    /* U+0075 "u" */
    0x99, 0x99, 0xf0,

    /* U+0076 "v" */
    0x8a, 0x94, 0xe2, 0x0,

    /* U+0077 "w" */
    0x92, 0x5a, 0x5a, 0x6c, 0x24,

    /* U+0078 "x" */
    0x5b, 0x88, 0xa5, 0x80,

    /* U+0079 "y" */
    0x8a, 0x94, 0x62, 0x11, 0x18,

    /* U+007A "z" */
    0x73, 0x6c, 0xf0,

    /* U+007B "{" */
    0x69, 0x28, 0x92, 0x4c,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0xc9, 0x22, 0x92, 0x58,

    /* U+007E "~" */
    0xf,

    /* U+007F "" */
    0x10};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t london_tube_10_glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 37, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 66, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 144, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 88, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 141, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 27, .adv_w = 42, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 30, .adv_w = 42, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 33, .adv_w = 102, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 37, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 39, .adv_w = 35, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 55, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 41, .adv_w = 35, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 83, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 49, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 54, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 90, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 85, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 82, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 35, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 35, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 97, .adv_w = 66, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 103, .adv_w = 66, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 72, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 111, .adv_w = 132, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 104, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 115, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 90, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 129, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 37, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 84, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 132, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 136, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 105, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 88, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 167, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 125, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 42, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 271, .adv_w = 83, .box_w = 6, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 278, .adv_w = 42, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 281, .adv_w = 84, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 282, .adv_w = 78, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 57, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 284, .adv_w = 80, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 83, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 85, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 314, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 37, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 36, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 322, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 135, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 88, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 93, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 347, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 352, .adv_w = 61, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 78, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 70, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 89, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 123, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 82, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 381, .adv_w = 82, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 60, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 388, .adv_w = 34, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 390, .adv_w = 60, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 394, .adv_w = 76, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 395, .adv_w = 35, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t london_tube_10_cmaps[] =
    {
        {.range_start = 32, .range_length = 96, .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Pair left and right glyphs for kerning*/
static const uint8_t london_tube_10_kern_pair_glyph_ids[] =
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
static const int8_t london_tube_10_kern_pair_values[] =
    {
        -23, -23, -7, -23, -3, -23, -23, -23,
        -7, -6, -9, -3, -9, -9, -12, -5,
        -6, -6, -13, -4, -32, -31, 7, -20,
        6, -4, 6, 6, 5, -5, 5, 6,
        -27, 7, 8, 0, -6, 4, -4, 4,
        0, 5, 7, 6, -6, -9, 2, -12,
        -14, -14, -2, -12, 0, 2, 2, 3,
        3, -6, -4, -12, -10, -8, -4, 4,
        6, 4, 4, -6, -23, 9, 20, 10,
        -19, -2, 7, 2, 3, -3, 7, -7,
        -6, -5, 5, 6, -11, 7, -3, 3,
        6, -13, 6, -26, -9, -9, -6, -15,
        3, -21, -2, -8, -23, -10, 3, -4,
        4, -4, -4, -5, 2, -3, -4, 4,
        -4, 4, 4, -10, -15, -12, 7, -13,
        -13, 7, -15, -4, 3, 3, -3, -3,
        -6, -4, 3, -12, -3, -12, -9, -9,
        4, 6, 2, 3, -1, 4, 4, -1,
        1, -3, -3, -10, -7, 4, -3, -3,
        -3, 1, -3, 3, 4, -3, -2, 3,
        1, 1, 3, 2, 2, -2, -3, -2,
        -4, -2, -4, 5, -3, -3, -3, -6,
        -5, -3, 3, -31, -8, -31, -7, -7,
        -19, -6, -14, -3, -3, 4, -3, -3,
        -3, 4, -3, 0, -2, 2, -3, -5,
        -1, 3, -15, -11, -10, -6, -3, -6,
        -6, -3, -9, -2, -9, -7, -11, -32,
        -3, -6, -33, -3, -16, -17, -23, -2,
        -13, -2, -7, 4, -7, 3, 3, -3,
        -3, -9, -6, -1, 3, -29, -12, -28,
        -30, 2, 4, -15, -6, -6, -5, -3,
        -6, 0, -3, -14, -17, -16, -3, -3,
        -7, -3, -10, -3, -24, -28, -31, -27,
        -22, -22, -25, -6, -24, -25, -28, -31,
        -28, -28, -28, -28, -28, -25, -28, -7,
        -8, -4, -26, -20, -28, -35, -11, -11,
        -23, -10, -18, -13, -15, -15, -9, -4,
        3, -20, -9, -20, -24, -9, -9, -6,
        -9, -9, -12, -9, -6, -6, -3, -11,
        -11, -12, -9, -6, -21, -25, -27, -27,
        -16, -21, -25, -14, -16, -23, -17, -24,
        -6, -22, -19, -10, 0, 2, -1, -6,
        -7, 0, 1, -8, 0, -5, -7, 0,
        -1, 4, 4, -17, -17, -17, -4, -2,
        -2, 3, 3, -4, -4, -3, 2, 1,
        -4, 4, 4, -9, -5, -20, -10, -8,
        -5, -18, -3, -5, -2, 5, 3, 12,
        -4, -1, -3, -4};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t london_tube_10_kern_pairs =
    {
        .glyph_ids = london_tube_10_kern_pair_glyph_ids,
        .values = london_tube_10_kern_pair_values,
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
static const lv_font_fmt_txt_dsc_t london_tube_10_font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = london_tube_10_glyph_bitmap,
    .glyph_dsc = london_tube_10_glyph_dsc,
    .cmaps = london_tube_10_cmaps,
    .kern_dsc = &london_tube_10_kern_pairs,
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
const lv_font_t london_tube_10 = {
#else
lv_font_t london_tube_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 11,                              /*The maximum line height required by the font*/
    .base_line = 3,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &london_tube_10_font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if LONDON_TUBE_10*/
