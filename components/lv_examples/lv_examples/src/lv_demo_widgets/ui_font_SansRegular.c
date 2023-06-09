/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\Behzad\Desktop\mohsen project\assets\fonts\PublicSans-Regular.ttf -o C:\Users\Behzad\Desktop\mohsen project\assets\fonts\ui_font_SansRegular.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "lv_demo_widgets.h"

#ifndef UI_FONT_SANSREGULAR
#define UI_FONT_SANSREGULAR 1
#endif

#if UI_FONT_SANSREGULAR

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xb0,

    /* U+0022 "\"" */
    0xde, 0xf5, 0x20,

    /* U+0023 "#" */
    0x12, 0x22, 0x22, 0x24, 0xff, 0x24, 0x24, 0x24,
    0xff, 0x44, 0x48, 0x48, 0x48,

    /* U+0024 "$" */
    0x8, 0x4, 0x2, 0x7, 0xc4, 0x14, 0x6, 0x1,
    0x80, 0x7c, 0xf, 0x80, 0x60, 0x18, 0xe, 0x8,
    0xf8, 0x10, 0x8, 0x0,

    /* U+0025 "%" */
    0x70, 0x66, 0xc2, 0x22, 0x21, 0x12, 0x8, 0x90,
    0x6d, 0x79, 0xd6, 0x60, 0xa1, 0x9, 0x8, 0x88,
    0x44, 0x66, 0x41, 0xe0,

    /* U+0026 "&" */
    0x1c, 0x8, 0x82, 0x20, 0x88, 0x34, 0x6, 0x3,
    0x89, 0xb2, 0xc7, 0xb0, 0xce, 0x71, 0xf6,

    /* U+0027 "'" */
    0xfe,

    /* U+0028 "(" */
    0x29, 0x29, 0x24, 0x92, 0x44, 0x88,

    /* U+0029 ")" */
    0x89, 0x22, 0x49, 0x24, 0xb4, 0xa0,

    /* U+002A "*" */
    0x21, 0x3e, 0x45, 0x0,

    /* U+002B "+" */
    0x10, 0x20, 0x40, 0x8f, 0xe2, 0x4, 0x8,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x46, 0x21, 0x8, 0x84, 0x22, 0x10, 0x8c,
    0x0,

    /* U+0030 "0" */
    0x3c, 0x42, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x42, 0x3c,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49, 0x24, 0x90,

    /* U+0032 "2" */
    0x3c, 0x8a, 0xc, 0x10, 0x21, 0x87, 0x38, 0x41,
    0x2, 0x7, 0xf0,

    /* U+0033 "3" */
    0x3c, 0x43, 0x81, 0x1, 0x2, 0x1c, 0x2, 0x1,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0034 "4" */
    0x2, 0x3, 0x3, 0x83, 0x41, 0x21, 0x11, 0x89,
    0x84, 0xff, 0x81, 0x0, 0x80, 0x40,

    /* U+0035 "5" */
    0x7f, 0x40, 0x40, 0x40, 0x7c, 0xe2, 0x1, 0x1,
    0x1, 0xc1, 0x62, 0x3c,

    /* U+0036 "6" */
    0x3c, 0x62, 0x41, 0x80, 0xbc, 0xe2, 0xc1, 0x81,
    0x81, 0x41, 0x62, 0x3c,

    /* U+0037 "7" */
    0xff, 0x3, 0x6, 0x6, 0xc, 0xc, 0x8, 0x18,
    0x18, 0x10, 0x30, 0x30,

    /* U+0038 "8" */
    0x3e, 0x31, 0x90, 0x48, 0x26, 0x31, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+0039 "9" */
    0x3c, 0x46, 0x82, 0x81, 0x83, 0x43, 0x3d, 0x1,
    0x1, 0x82, 0x46, 0x3c,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0xf0, 0x3, 0xda,

    /* U+003C "<" */
    0x6, 0x7b, 0x87, 0x3, 0x81, 0xc0, 0x0,

    /* U+003D "=" */
    0xfe, 0x0, 0x0, 0xf, 0xe0,

    /* U+003E ">" */
    0xc0, 0xf0, 0x38, 0x73, 0x9c, 0x0, 0x0,

    /* U+003F "?" */
    0x3c, 0x8c, 0x8, 0x10, 0x61, 0x82, 0x8, 0x10,
    0x0, 0x40, 0x80,

    /* U+0040 "@" */
    0xf, 0x83, 0x4, 0x60, 0x24, 0xe9, 0x89, 0x99,
    0x19, 0x91, 0x99, 0x19, 0x93, 0x24, 0xec, 0x40,
    0x3, 0x4, 0xf, 0x80,

    /* U+0041 "A" */
    0xc, 0x7, 0x1, 0x40, 0x58, 0x32, 0x8, 0x82,
    0x31, 0xfc, 0x41, 0x10, 0x6c, 0xa, 0x3,

    /* U+0042 "B" */
    0xfc, 0x83, 0x81, 0x81, 0x83, 0xfc, 0x82, 0x81,
    0x81, 0x81, 0x83, 0xfc,

    /* U+0043 "C" */
    0x3e, 0x31, 0x90, 0x50, 0x38, 0x4, 0x2, 0x1,
    0x0, 0x81, 0xa0, 0x98, 0xc7, 0xc0,

    /* U+0044 "D" */
    0xf8, 0x86, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x82, 0x86, 0xf8,

    /* U+0045 "E" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0047 "G" */
    0x1e, 0x31, 0x90, 0x70, 0x38, 0x4, 0x2, 0x1f,
    0x1, 0x81, 0xa0, 0xd8, 0xe7, 0xd0,

    /* U+0048 "H" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xfe, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x10,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x11, 0x11, 0x1e,

    /* U+004B "K" */
    0x83, 0x86, 0x8c, 0x98, 0xb0, 0xb8, 0xd8, 0xcc,
    0x84, 0x86, 0x82, 0x83,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+004D "M" */
    0xc0, 0x78, 0xf, 0x83, 0xf0, 0x7a, 0xb, 0x63,
    0x64, 0x4c, 0xd9, 0x9b, 0x31, 0x46, 0x38, 0xc2,
    0x10,

    /* U+004E "N" */
    0x80, 0xe0, 0x78, 0x36, 0x1b, 0xc, 0xc6, 0x33,
    0xd, 0x86, 0xc1, 0xe0, 0x70, 0x10,

    /* U+004F "O" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x50, 0x26, 0x18, 0x78,

    /* U+0050 "P" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x82, 0xfc, 0x80,
    0x80, 0x80, 0x80, 0x80,

    /* U+0051 "Q" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x50, 0x36, 0x18, 0x7c, 0x1,
    0x80, 0x30,

    /* U+0052 "R" */
    0xfe, 0x83, 0x81, 0x81, 0x81, 0x83, 0xfe, 0x84,
    0x86, 0x82, 0x83, 0x81,

    /* U+0053 "S" */
    0x3c, 0x42, 0x81, 0x80, 0xc0, 0x7c, 0x1e, 0x3,
    0x1, 0x81, 0xc2, 0x3c,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0x40, 0x50, 0x36, 0xc, 0x82, 0x21, 0x8c, 0x61,
    0x10, 0x4c, 0x1a, 0x2, 0x80, 0xe0, 0x30,

    /* U+0057 "W" */
    0x41, 0x6, 0x83, 0x9, 0x8e, 0x13, 0x14, 0x62,
    0x28, 0xc4, 0x59, 0xd, 0x92, 0x1a, 0x2c, 0x14,
    0x78, 0x38, 0xe0, 0x60, 0xc0, 0x41, 0x80,

    /* U+0058 "X" */
    0xc1, 0xb1, 0x98, 0x86, 0xc1, 0x40, 0xc0, 0x70,
    0x28, 0x36, 0x31, 0x90, 0x58, 0x30,

    /* U+0059 "Y" */
    0xc1, 0xa0, 0x98, 0xc4, 0x41, 0x40, 0xa0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+005A "Z" */
    0xff, 0x2, 0x6, 0x4, 0xc, 0x18, 0x10, 0x30,
    0x20, 0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0x38,

    /* U+005C "\\" */
    0xc2, 0x10, 0x82, 0x10, 0x82, 0x10, 0x86, 0x10,
    0x80,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x78,

    /* U+005E "^" */
    0x20, 0xc7, 0x14, 0x4a, 0x28, 0xc0,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xc8, 0x80,

    /* U+0061 "a" */
    0x7d, 0x84, 0x9, 0xfc, 0x30, 0x60, 0xe3, 0x7a,

    /* U+0062 "b" */
    0x81, 0x2, 0x4, 0xb, 0x98, 0xa0, 0xc1, 0x83,
    0x6, 0xe, 0x2b, 0x80,

    /* U+0063 "c" */
    0x38, 0x8a, 0x1c, 0x8, 0x10, 0x21, 0xa2, 0x38,

    /* U+0064 "d" */
    0x2, 0x4, 0x8, 0x13, 0xa8, 0xe0, 0xc1, 0x83,
    0x6, 0xa, 0x33, 0xa0,

    /* U+0065 "e" */
    0x38, 0x8a, 0xc, 0x1f, 0xf0, 0x20, 0xa3, 0x3c,

    /* U+0066 "f" */
    0x39, 0x9, 0xf2, 0x10, 0x84, 0x21, 0x8, 0x40,

    /* U+0067 "g" */
    0x3d, 0xb3, 0x90, 0x88, 0x46, 0x61, 0xe1, 0x0,
    0xfc, 0x81, 0x40, 0xb0, 0xcf, 0xc0,

    /* U+0068 "h" */
    0x81, 0x2, 0x4, 0xb, 0xd8, 0xe0, 0xc1, 0x83,
    0x6, 0xc, 0x18, 0x20,

    /* U+0069 "i" */
    0x9f, 0xf0,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x24, 0x92, 0x70,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x8, 0xd1, 0x24, 0x58, 0xf1,
    0xb2, 0x24, 0x68, 0x40,

    /* U+006C "l" */
    0x92, 0x49, 0x24, 0x92, 0x46,

    /* U+006D "m" */
    0xb9, 0xd9, 0xce, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21, 0x84, 0x20,

    /* U+006E "n" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0070 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xe2, 0xb9,
    0x2, 0x4, 0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3a,
    0x4, 0x8, 0x10,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0073 "s" */
    0x7a, 0x38, 0x30, 0x78, 0x38, 0x61, 0x78,

    /* U+0074 "t" */
    0x21, 0x9, 0xf2, 0x10, 0x84, 0x21, 0x8, 0x70,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7a,

    /* U+0076 "v" */
    0x43, 0x42, 0x62, 0x26, 0x24, 0x24, 0x1c, 0x18,
    0x18,

    /* U+0077 "w" */
    0x42, 0x14, 0x63, 0x47, 0x26, 0x52, 0x2d, 0x62,
    0x96, 0x39, 0xc1, 0x8c, 0x18, 0xc0,

    /* U+0078 "x" */
    0x63, 0x11, 0xd, 0x83, 0x80, 0x80, 0xe0, 0xd8,
    0x46, 0x41, 0x0,

    /* U+0079 "y" */
    0x83, 0x8f, 0x1a, 0x26, 0xc5, 0xa, 0x1c, 0x10,
    0x20, 0xc7, 0x0,

    /* U+007A "z" */
    0xfc, 0x31, 0x84, 0x30, 0x86, 0x30, 0xfc,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x10, 0x98, 0x61, 0x8, 0x42,
    0x10, 0x60,

    /* U+007C "|" */
    0xff, 0xff, 0x80,

    /* U+007D "}" */
    0xe1, 0x8, 0x42, 0x10, 0x83, 0x31, 0x8, 0x42,
    0x13, 0x80,

    /* U+007E "~" */
    0x73, 0x3c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 64, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 109, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 169, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 231, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 63, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 75, .adv_w = 77, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 81, .adv_w = 79, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 87, .adv_w = 101, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 91, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 98, .adv_w = 62, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 99, .adv_w = 97, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 100, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 90, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 110, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 104, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 153, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 164, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 159, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 160, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 58, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 61, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 232, .adv_w = 140, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 239, .adv_w = 142, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 244, .adv_w = 140, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 251, .adv_w = 133, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 213, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 282, .adv_w = 182, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 172, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 178, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 159, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 188, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 196, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 72, .box_w = 1, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 99, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 175, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 148, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 227, .box_w = 11, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 193, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 188, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 163, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 191, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 490, .adv_w = 173, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 172, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 152, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 179, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 244, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 155, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 163, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 78, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 624, .adv_w = 90, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 633, .adv_w = 78, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 639, .adv_w = 121, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 645, .adv_w = 132, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 646, .adv_w = 56, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 648, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 153, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 153, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 145, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 101, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 159, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 718, .adv_w = 148, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 63, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 67, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 738, .adv_w = 144, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 78, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 221, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 148, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 145, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 795, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 806, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 130, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 100, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 149, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 844, .adv_w = 200, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 145, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 880, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 84, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 897, .adv_w = 67, .box_w = 1, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 900, .adv_w = 85, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 910, .adv_w = 145, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 2, 3, 0, 0, 0, 4,
    3, 0, 0, 0, 0, 5, 6, 5,
    0, 7, 0, 8, 7, 9, 0, 7,
    10, 7, 7, 5, 0, 0, 0, 0,
    0, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 19, 20, 21, 22, 19, 19,
    23, 24, 25, 26, 27, 28, 20, 29,
    29, 30, 31, 32, 0, 0, 0, 0,
    5, 0, 33, 11, 34, 35, 11, 36,
    37, 33, 35, 35, 38, 39, 33, 33,
    11, 11, 35, 40, 41, 42, 35, 43,
    43, 44, 43, 45, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 3,
    2, 0, 4, 0, 0, 5, 6, 5,
    0, 7, 8, 9, 7, 10, 11, 7,
    12, 7, 7, 0, 0, 0, 0, 0,
    4, 13, 14, 15, 16, 15, 15, 15,
    16, 15, 15, 17, 15, 15, 15, 15,
    16, 15, 16, 15, 18, 19, 20, 21,
    21, 22, 23, 24, 0, 0, 4, 0,
    5, 0, 25, 26, 13, 13, 13, 27,
    28, 29, 30, 31, 29, 32, 33, 33,
    13, 33, 13, 33, 34, 35, 36, 37,
    38, 39, 38, 40, 0, 41, 4, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, -29, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, -11, 0, -14, -11, -11,
    0, -11, -11, -19, -3, -8, 1, 1,
    -6, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    13, 0, 0, 0, 5, -2, 0, -13,
    0, 9, 1, -8, 6, 1, -15, -6,
    -12, 0, -17, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -42, 0, 0,
    0, 0, 0, 0, -19, 0, 0, 0,
    -30, 2, -6, 0, 0, -8, -6, -33,
    0, -20, -14, -20, -8, 1, 0, 0,
    -1, 0, 0, 0, 0, 0, 1, -4,
    0, -4, -4, -9, -2, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, -31, 0, -5,
    5, 2, -7, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -3, -3, 0,
    -3, -3, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -18, 0, -3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -4, 0, -24, 0, -11, 0,
    -16, 0, -2, 0, -5, -1, 0, 0,
    0, 0, 0, -1, -6, 0, -3, -2,
    -9, -3, -1, 0, 0, 0, 0, 1,
    -8, -2, 0, 0, 0, 0, -14, -3,
    2, 0, -9, 2, -4, -23, -9, -29,
    6, -19, 2, 0, 0, -13, -4, 0,
    0, 0, 0, 0, -4, -14, -2, -15,
    -15, -3, 1, 0, 0, 0, -1, -2,
    0, -3, 0, 0, 0, 0, 0, 0,
    1, -1, 2, -1, 0, 1, -6, 0,
    -6, -6, -10, -3, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, -2, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -2, 0, -5,
    0, -3, -6, -5, -2, -2, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -3, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, -4, -2,
    -7, 0, -6, -9, -11, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 1, -6, -5, 0, 0, 0,
    0, 0, 0, -2, -2, 2, 0, 5,
    1, 4, 0, 1, 5, 5, 0, -2,
    -3, -2, -3, -3, -3, 0, -3, -3,
    -3, -7, -2, -4, -4, -3, 1, 3,
    0, 0, 0, 3, -15, -2, 0, 0,
    0, 0, 0, 0, -4, -17, 0, 0,
    -13, -3, 7, 0, 3, 0, 6, -2,
    -3, 0, 0, -3, 0, 0, 0, 0,
    0, -3, 0, -3, -3, -3, -5, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 1, -1, -11, 0, -9, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -1, 0, 0, -2, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    -7, 3, 0, 0, 3, -8, 1, -5,
    3, 0, 2, 0, -2, 0, -4, 0,
    0, 0, 0, 0, 0, -3, -14, -8,
    -10, -10, 0, 0, 0, 0, 0, 0,
    -2, 1, -14, 0, 0, 0, 0, 0,
    0, -5, 4, 0, -5, 7, 4, -24,
    -6, -17, 2, -23, 0, -4, 0, -10,
    1, 0, 0, 0, 0, 0, 0, -13,
    1, -10, -10, 3, 3, 0, 0, 0,
    0, 0, -10, 0, 0, 0, 0, 0,
    0, -4, -2, -9, 0, -1, -3, -1,
    3, -4, -4, -3, -6, -6, -3, -2,
    0, -2, -2, -2, 0, -2, -2, -1,
    -2, 0, 0, 0, -5, 0, 0, 0,
    0, 0, -1, -27, -7, 0, 0, 0,
    0, 0, 0, -2, -15, 0, 1, -13,
    3, 0, 0, 0, -6, -3, -4, -2,
    0, 1, -4, 0, 0, 0, 0, 0,
    -4, 2, -1, 5, 5, 1, 0, 2,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, -4, -2, -9, 0, -1,
    -3, -1, 3, -4, -4, -3, -6, -6,
    -3, -2, 0, -2, -2, -2, 0, -2,
    -2, -1, -2, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, -1, -11, 0,
    0, 0, 0, 0, 0, -4, 1, 0,
    -3, 1, -5, -3, -5, -7, 0, -3,
    0, -3, -2, 0, -4, -2, -2, 0,
    -2, -2, 0, 0, -2, 0, 0, -2,
    -2, 0, 0, 0, 0, 0, -5, 1,
    0, 0, 0, 0, 0, 0, 0, -4,
    -1, -3, 0, 2, -4, 0, -5, -5,
    -7, -1, -1, 0, 0, -6, 0, 0,
    0, 0, 0, 0, -5, 0, 2, 2,
    -4, -2, 3, 0, 0, -2, 4, -19,
    -15, 0, 0, 0, -17, 0, 0, -18,
    -23, 0, -2, -11, 0, 7, 0, 9,
    2, 12, 3, -15, 0, 0, -19, 0,
    0, 5, 0, -8, -17, -7, -14, -11,
    -11, -13, -10, 2, 0, 0, -6, 6,
    -11, -12, 0, 0, 0, 0, 0, 0,
    -12, -29, 0, -4, -12, -3, 9, 0,
    3, -1, 12, 5, -11, -2, 1, -8,
    0, 0, 5, 0, -2, -6, -1, 0,
    0, 0, -4, -2, 0, 0, 0, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    0, -6, 0, 0, -5, 6, -4, 1,
    -3, 0, 13, -5, 2, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -3,
    -5, -10, -10, 2, 0, 3, -3, 0,
    0, 4, -21, -20, 0, 0, 0, 0,
    0, 0, -16, -20, 0, -7, -16, -10,
    9, 1, 9, 4, 12, 0, -17, -5,
    -3, -19, 0, -5, 0, 0, -5, -18,
    -11, -12, -11, -11, -9, -9, 4, 0,
    0, 0, 0, 0, -14, 0, 0, 0,
    0, 0, 0, -4, 1, 0, 0, 3,
    -2, 5, 0, 3, 2, 2, 4, 1,
    -4, 0, 0, -4, -4, 0, -4, -4,
    0, 0, -1, -3, -3, 0, 2, 0,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, -29, 0, -10, 0, -13, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, -1, -6, 0, -4, -4, -3, 0,
    0, -2, -18, 0, -3, 0, 3, 0,
    0, 0, 0, 0, 0, -1, 0, -2,
    0, -4, 0, -24, 0, -11, 0, -16,
    0, -2, -2, -5, -1, -2, -2, 0,
    -2, -2, -1, -6, 0, -2, -2, -9,
    -3, -1, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 2, 2,
    0, 2, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, -5,
    -3, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 1, 0, -6, -4, 0,
    0, 0, 0, 0, -2, -8, 0, 2,
    2, 2, -1, -1, 0, 1, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 3, -3,
    0, 0, 8, 0, 0, -5, 1, -4,
    0, 0, -1, 1, 4, 0, -11, 0,
    -2, 0, -8, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, -3, 0, 3,
    -5, 0, 0, 0, 0, 0, -3, -4,
    -3, 3, 3, 0, 0, 0, 0, -11,
    0, 0, 1, -5, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 1, 0,
    -10, 0, -6, 0, -6, 0, -1, -1,
    -6, 3, -1, -1, 0, -4, -1, -4,
    -10, -4, -5, -5, 0, 2, 1, 0,
    1, 0, -4, -19, -13, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 2, -4, 0, 0, 0, 0, 0,
    -1, -4, 0, 3, 3, 3, 2, 0,
    -1, -2, 0, -2, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -3, -1,
    -1, 0, -6, 0, 1, 0, -6, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, -1, 0, -10, 3, 0, 0, 2,
    0, 0, 0, -13, -1, 0, 0, 0,
    0, 0, -1, 2, 0, -8, -13, -1,
    0, 0, 0, 0, 0, 0, -3, -12,
    0, 0, 0, 0, 0, 0, -6, 0,
    -6, 0, -3, 0, 2, -4, 0, 0,
    0, 0, 0, -3, 1, 0, 3, 3,
    0, 0, 0, 0, 0, 0, -2, 0,
    -10, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, -4, 0, 0, -2,
    0, 0, 0, -5, 0, 1, 3, 0,
    0, 0, 0, 0, -3, -6, -1, 0,
    0, -3, 1, 0, 0, -6, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -4, 0, 1, 0, -1, -2,
    0, 0, 0, 0, 0, 1, 1, 0,
    -2, -2, -3, 3, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 45,
    .right_class_cnt     = 41,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_SansRegular = {
#else
lv_font_t ui_font_SansRegular = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SANSREGULAR*/

