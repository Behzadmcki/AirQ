/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font C:\Users\Behzad\Desktop\mohsen project\assets\fonts\PublicSans-Medium.ttf -o C:\Users\Behzad\Desktop\mohsen project\assets\fonts\ui_font_SansMedium12.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "lv_demo_widgets.h"

#ifndef UI_FONT_SANSMEDIUM12
#define UI_FONT_SANSMEDIUM12 1
#endif

#if UI_FONT_SANSMEDIUM12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd,

    /* U+0022 "\"" */
    0xaa, 0xa0,

    /* U+0023 "#" */
    0x4, 0x48, 0x93, 0xf2, 0x9f, 0x8a, 0x24, 0x48,

    /* U+0024 "$" */
    0x11, 0xef, 0xe1, 0xc0, 0xe0, 0x61, 0x78, 0x40,

    /* U+0025 "%" */
    0x61, 0x24, 0x89, 0x41, 0x9e, 0xc, 0x45, 0x12,
    0x44, 0x8e,

    /* U+0026 "&" */
    0x38, 0x44, 0x44, 0x38, 0x73, 0x8e, 0xc6, 0x7a,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x5a, 0xaa, 0x50,

    /* U+0029 ")" */
    0xa5, 0x55, 0xa0,

    /* U+002A "*" */
    0x27, 0x88, 0xa0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x11, 0x22, 0x24, 0x48, 0x80,

    /* U+0030 "0" */
    0x79, 0x28, 0x61, 0x86, 0x1c, 0xde,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49,

    /* U+0032 "2" */
    0x79, 0x1c, 0x43, 0x39, 0x84, 0x3f,

    /* U+0033 "3" */
    0x7b, 0x10, 0x4e, 0x6, 0x1c, 0x5e,

    /* U+0034 "4" */
    0x8, 0x30, 0xa2, 0x4c, 0x9f, 0xc2, 0x4,

    /* U+0035 "5" */
    0xff, 0xc, 0x2e, 0x44, 0x1c, 0x5e,

    /* U+0036 "6" */
    0x79, 0x18, 0x2e, 0xc6, 0x14, 0x5e,

    /* U+0037 "7" */
    0xfc, 0x30, 0x84, 0x10, 0xc2, 0x8,

    /* U+0038 "8" */
    0x38, 0x89, 0x11, 0xcc, 0x70, 0x71, 0xbe,

    /* U+0039 "9" */
    0x7a, 0x28, 0x63, 0x74, 0x18, 0x9e,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x86,

    /* U+003C "<" */
    0x1f, 0x38, 0x70, 0x0,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0xc1, 0xcf, 0xc0, 0x0,

    /* U+003F "?" */
    0x74, 0x42, 0x21, 0x10, 0x4,

    /* U+0040 "@" */
    0x1e, 0x30, 0xb6, 0xb4, 0xda, 0x4d, 0x27, 0x6c,
    0xc0, 0x3e, 0x0,

    /* U+0041 "A" */
    0x18, 0x1c, 0x14, 0x24, 0x26, 0x7e, 0x43, 0x41,

    /* U+0042 "B" */
    0xfa, 0x18, 0x7e, 0x86, 0x18, 0x7e,

    /* U+0043 "C" */
    0x38, 0x8a, 0x1c, 0x8, 0x10, 0xd1, 0x1c,

    /* U+0044 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0x61, 0x7c,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf8, 0x42, 0x1f,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf8, 0x42, 0x10,

    /* U+0047 "G" */
    0x3c, 0x8e, 0x1c, 0x8, 0xf0, 0x51, 0x9d,

    /* U+0048 "H" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x24, 0x92, 0x4f,

    /* U+004B "K" */
    0x8e, 0x6b, 0x3c, 0xd2, 0x68, 0xe1,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x1f,

    /* U+004D "M" */
    0xc3, 0xc3, 0xc7, 0xa5, 0xa5, 0xbd, 0x99, 0x99,

    /* U+004E "N" */
    0x83, 0x87, 0x8d, 0x99, 0xb1, 0xe1, 0xc1,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0050 "P" */
    0xfa, 0x18, 0x63, 0xfa, 0x8, 0x20,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x9e, 0x6,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0x28, 0xa1,

    /* U+0053 "S" */
    0x7a, 0x38, 0x38, 0x1c, 0x18, 0x5e,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0xde,

    /* U+0056 "V" */
    0xc3, 0x42, 0x42, 0x26, 0x24, 0x34, 0x18, 0x18,

    /* U+0057 "W" */
    0xc4, 0x28, 0xcd, 0x39, 0x35, 0x22, 0xb4, 0x53,
    0xc, 0x60, 0x8c,

    /* U+0058 "X" */
    0x42, 0x26, 0x3c, 0x18, 0x18, 0x34, 0x26, 0x43,

    /* U+0059 "Y" */
    0xc6, 0x88, 0xa1, 0x41, 0x2, 0x4, 0x8,

    /* U+005A "Z" */
    0xfc, 0x21, 0x84, 0x21, 0x84, 0x3f,

    /* U+005B "[" */
    0xea, 0xaa, 0xb0,

    /* U+005C "\\" */
    0x84, 0x44, 0x22, 0x21, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x70,

    /* U+005E "^" */
    0x1, 0x8c, 0xa4, 0x80,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x88,

    /* U+0061 "a" */
    0x74, 0x5f, 0x18, 0xbc,

    /* U+0062 "b" */
    0x82, 0xb, 0xb3, 0x86, 0x18, 0xfe,

    /* U+0063 "c" */
    0x74, 0x61, 0x8, 0xb8,

    /* U+0064 "d" */
    0x4, 0x17, 0x73, 0x86, 0x1c, 0x5f,

    /* U+0065 "e" */
    0x7a, 0x2f, 0xa0, 0xc9, 0xe0,

    /* U+0066 "f" */
    0x74, 0xe4, 0x44, 0x44,

    /* U+0067 "g" */
    0x3e, 0x89, 0x11, 0xc7, 0xd0, 0xa1, 0x3c,

    /* U+0068 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x31,

    /* U+0069 "i" */
    0xbf,

    /* U+006A "j" */
    0x45, 0x55, 0x70,

    /* U+006B "k" */
    0x84, 0x27, 0x6e, 0x7a, 0x51,

    /* U+006C "l" */
    0xaa, 0xab,

    /* U+006D "m" */
    0xff, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0xc4,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+0070 "p" */
    0xbb, 0x38, 0x61, 0xce, 0xe8, 0x20,

    /* U+0071 "q" */
    0x77, 0x38, 0x61, 0xcd, 0xd0, 0x41,

    /* U+0072 "r" */
    0xf2, 0x49, 0x0,

    /* U+0073 "s" */
    0x74, 0x70, 0x78, 0xb8,

    /* U+0074 "t" */
    0x4b, 0xa4, 0x93,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+0076 "v" */
    0xcd, 0x24, 0x8e, 0x30, 0xc0,

    /* U+0077 "w" */
    0xc8, 0xa6, 0xd5, 0x4e, 0xa3, 0x31, 0x90,

    /* U+0078 "x" */
    0x44, 0x50, 0xc1, 0xc6, 0x88, 0x80,

    /* U+0079 "y" */
    0xc5, 0x36, 0x8a, 0x30, 0x43, 0x18,

    /* U+007A "z" */
    0xf8, 0x8c, 0xc4, 0x7c,

    /* U+007B "{" */
    0x69, 0x2c, 0x92, 0x4c,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0xc9, 0x26, 0x92, 0x58,

    /* U+007E "~" */
    0xe9, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 50, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 84, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 20, .adv_w = 175, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 140, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 48, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 39, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 61, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 48, .adv_w = 108, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 52, .adv_w = 48, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 73, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 54, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 69, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 60, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 79, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 123, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 122, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 122, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 46, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 48, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 121, .adv_w = 106, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 125, .adv_w = 108, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 128, .adv_w = 106, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 132, .adv_w = 101, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 159, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 148, .adv_w = 137, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 129, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 120, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 115, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 147, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 56, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 75, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 133, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 111, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 172, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 146, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 123, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 145, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 251, .adv_w = 131, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 130, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 136, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 131, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 184, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 124, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 319, .adv_w = 69, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 324, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 327, .adv_w = 91, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 331, .adv_w = 101, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 332, .adv_w = 44, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 333, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 109, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 76, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 369, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 48, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 52, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 378, .adv_w = 109, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 60, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 168, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 109, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 407, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 413, .adv_w = 76, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 76, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 110, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 451, .adv_w = 93, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 66, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 459, .adv_w = 51, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 461, .adv_w = 66, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 465, .adv_w = 111, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
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
    0, 0, 0, 0, 0, -18, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, -8, 0, -10, -8, -8,
    0, -8, -8, -14, -2, -5, 1, 1,
    -4, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -11, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    9, 0, 0, 0, 4, -1, 0, -11,
    0, 6, 1, -6, 5, 1, -12, -4,
    -10, 0, -14, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -27, 0, 0,
    0, 0, 0, 0, -14, 0, 0, 0,
    -22, 2, -5, 0, 0, -5, -4, -25,
    0, -15, -11, -15, -6, 1, 0, 0,
    -1, 0, 0, 0, 0, 0, 1, -3,
    0, -4, -4, -7, -1, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, -23, 0, -3,
    3, 1, -4, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -2, -2, 0,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -13, 0, -2, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, 0, -17, 0, -9, 0,
    -14, 0, -1, 0, -4, -1, 0, 0,
    0, 0, 0, -1, -4, 0, -2, -2,
    -7, -2, -1, 0, 0, 0, 1, 1,
    -6, -1, 0, 0, 0, 0, -10, -3,
    2, 0, -7, 2, -3, -17, -7, -22,
    4, -15, 1, 0, 0, -9, -3, 0,
    0, 0, 0, 0, -3, -10, -2, -12,
    -12, -3, 1, 0, 0, 0, -1, -1,
    0, -2, 0, 0, 0, 0, 0, 0,
    1, -1, 2, -1, 0, 1, -4, 0,
    -4, -5, -8, -3, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, -1, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -1, 0, -3,
    0, -2, -5, -4, -2, -2, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -3, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, -3, -1,
    -4, 0, -5, -7, -9, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 1, -4, -4, 0, 0, 0,
    0, 0, 0, -1, -1, 1, 0, 3,
    1, 4, 0, 1, 4, 4, 0, -1,
    -2, -1, -2, -2, -2, 0, -2, -2,
    -2, -5, -1, -3, -3, -2, 1, 2,
    0, 0, 0, 2, -12, -1, 0, 0,
    0, 0, 0, 0, -3, -13, 0, 0,
    -10, -2, 6, 0, 2, 0, 5, -2,
    -2, 0, 0, -2, 0, 0, 0, 0,
    0, -2, 0, -2, -2, -2, -4, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 1, -1, -7, 0, -7, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    -6, 3, 0, 0, 3, -6, 1, -4,
    2, 0, 2, 0, -2, 0, -3, 0,
    0, 0, 0, 0, 0, -3, -11, -6,
    -8, -8, 0, 0, 0, 0, 0, 0,
    -1, 1, -10, 0, 0, 0, 0, 0,
    0, -3, 3, 0, -4, 6, 3, -18,
    -4, -13, 2, -18, 0, -3, 0, -6,
    1, 0, 0, 0, 0, 0, 0, -9,
    1, -8, -8, 2, 2, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, -3, -2, -7, 0, -1, -2, 0,
    2, -3, -4, -2, -6, -5, -2, -2,
    0, -1, -2, -2, 0, -2, -2, -1,
    -1, 0, 0, 0, -4, 0, 0, 0,
    0, 0, -1, -21, -5, 0, 0, 0,
    0, 0, 0, -2, -12, 0, 1, -11,
    2, 0, 0, 0, -5, -2, -3, -2,
    0, 1, -3, 0, 0, 0, 0, 0,
    -3, 1, -1, 4, 4, 1, 0, 2,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, -3, -2, -7, 0, -1,
    -2, 0, 2, -3, -4, -2, -6, -5,
    -2, -2, 0, -1, -2, -2, 0, -2,
    -2, -1, -1, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, -1, -8, 0,
    0, 0, 0, 0, 0, -3, 1, 0,
    -2, 1, -4, -2, -4, -6, 0, -3,
    0, -2, -1, 0, -3, -1, -1, 0,
    -1, -1, 0, 0, -2, 0, 0, -2,
    -2, 0, 0, 0, 0, 0, -3, 1,
    0, 0, 0, 0, 0, 0, 0, -3,
    -1, -2, 1, 1, -2, 0, -4, -4,
    -6, -1, -1, 0, 0, -5, 0, 0,
    0, 0, 0, 0, -4, 0, 1, 1,
    -4, -2, 2, 0, 0, -2, 3, -15,
    -10, 0, 0, 0, -13, 0, 0, -14,
    -17, 0, -1, -8, 0, 6, 0, 7,
    2, 8, 2, -11, 0, 0, -14, 0,
    0, 3, 0, -5, -13, -5, -11, -9,
    -9, -10, -8, 2, 0, 0, -5, 5,
    -9, -9, 0, 0, 0, 0, 0, 0,
    -9, -22, 0, -4, -9, -3, 7, 0,
    2, 0, 9, 3, -9, -2, 1, -7,
    0, 0, 3, 0, -2, -6, -1, 0,
    0, 0, -4, -2, 0, 0, 0, 0,
    0, 0, -9, 0, 0, 0, 0, 0,
    0, -5, 1, 0, -4, 5, -3, 1,
    -2, 0, 9, -3, 2, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -5, -3,
    -4, -8, -8, 2, 0, 2, -3, 0,
    0, 4, -16, -15, 0, 0, 0, 0,
    0, 0, -14, -15, 0, -6, -12, -8,
    7, 1, 7, 3, 8, 0, -13, -3,
    -3, -16, 0, -3, 0, 0, -3, -14,
    -9, -10, -9, -9, -8, -8, 3, 0,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, -3, 1, 0, 0, 2,
    -1, 4, 0, 2, 2, 1, 3, 1,
    -3, 0, 0, -3, -3, 0, -3, -3,
    0, 0, -1, -3, -3, 0, 2, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, -21, 0, -8, 0, -11, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, -1, -4, 0, -3, -3, -2, 0,
    0, -1, -13, 0, -2, 0, 2, 0,
    0, 0, 0, 0, 0, -1, 0, -2,
    0, -2, 0, -17, 0, -9, 0, -14,
    0, -1, -1, -4, -1, -1, -1, 0,
    -1, -1, -1, -4, 0, -2, -2, -7,
    -2, -1, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 1, 1,
    0, 1, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, -3,
    -2, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 1, 0, -4, -2, 0,
    0, 0, 0, 0, -1, -5, 0, 2,
    2, 2, -1, -1, 0, 1, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 2, -2,
    0, 0, 6, 0, 0, -3, 1, -3,
    1, 1, 0, 1, 3, 0, -8, 0,
    -1, 0, -6, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -3, 0, 2,
    -4, 0, 0, 0, 0, 0, -3, -2,
    -2, 3, 3, 0, 0, 0, 0, -8,
    0, 0, 1, -3, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 1, 0,
    -7, 0, -4, 0, -5, 0, -1, -1,
    -4, 2, -1, -1, 0, -3, -1, -3,
    -7, -3, -4, -4, 0, 1, 1, 0,
    1, 0, -3, -13, -8, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 2, -3, 0, 0, 0, 0, 0,
    -1, -2, 0, 2, 2, 2, 1, 0,
    -1, -1, 0, -2, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -3, -1,
    -1, 0, -4, 0, 1, 0, -5, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, -1, 0, -7, 2, 0, 0, 2,
    0, 0, 0, -9, -1, 0, 0, 0,
    0, 0, -1, 1, 0, -6, -10, -1,
    0, 0, 0, 0, 0, 0, -2, -10,
    0, 0, 0, 0, 0, 0, -4, 0,
    -6, 0, -3, 0, 2, -3, 0, 0,
    0, 0, 0, -2, 1, 0, 2, 2,
    0, 0, 0, 0, 0, 0, -1, 0,
    -8, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, -3, 0, 0, -2,
    0, 0, 0, -4, 0, 1, 2, 0,
    0, 0, 0, 0, -3, -4, -1, 0,
    0, -2, 1, 0, 0, -4, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -4, 0, 1, 0, -1, -1,
    0, 0, 0, 0, 0, 1, 1, 0,
    -1, -1, -2, 2, 0
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
const lv_font_t ui_font_SansMedium12 = {
#else
lv_font_t ui_font_SansMedium12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SANSMEDIUM12*/

