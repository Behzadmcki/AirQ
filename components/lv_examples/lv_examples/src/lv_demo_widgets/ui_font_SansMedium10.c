/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font C:\Users\Behzad\Desktop\mohsen project\assets\fonts\PublicSans-Medium.ttf -o C:\Users\Behzad\Desktop\mohsen project\assets\fonts\ui_font_SansMedium10.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "lv_demo_widgets.h"

#ifndef UI_FONT_SANSMEDIUM10
#define UI_FONT_SANSMEDIUM10 1
#endif

#if UI_FONT_SANSMEDIUM10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfa,

    /* U+0022 "\"" */
    0xb4,

    /* U+0023 "#" */
    0x28, 0xa7, 0xd4, 0xf9, 0x45, 0x0,

    /* U+0024 "$" */
    0x23, 0xbf, 0x6, 0xe, 0x2e, 0x20,

    /* U+0025 "%" */
    0x64, 0x94, 0x98, 0x76, 0x19, 0x29, 0x46,

    /* U+0026 "&" */
    0x70, 0x91, 0xc3, 0xa9, 0xd9, 0x1d, 0x0,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x5a, 0xa9, 0x40,

    /* U+0029 ")" */
    0xa5, 0x56, 0x80,

    /* U+002A "*" */
    0x5f, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x24, 0xa5, 0x20,

    /* U+0030 "0" */
    0x74, 0x63, 0x18, 0xc5, 0xc0,

    /* U+0031 "1" */
    0x75, 0x54,

    /* U+0032 "2" */
    0x74, 0x42, 0x26, 0x43, 0xe0,

    /* U+0033 "3" */
    0x74, 0x42, 0x60, 0xc5, 0xc0,

    /* U+0034 "4" */
    0x8, 0x62, 0x92, 0xfc, 0x20, 0x80,

    /* U+0035 "5" */
    0xfc, 0x3d, 0x10, 0xc5, 0xc0,

    /* U+0036 "6" */
    0x76, 0x7d, 0x18, 0xc5, 0xc0,

    /* U+0037 "7" */
    0xf8, 0xc4, 0x42, 0x31, 0x0,

    /* U+0038 "8" */
    0x72, 0x28, 0x9c, 0x8e, 0x17, 0x80,

    /* U+0039 "9" */
    0x74, 0xe3, 0x16, 0xcd, 0xc0,

    /* U+003A ":" */
    0x88,

    /* U+003B ";" */
    0x8c,

    /* U+003C "<" */
    0x3e, 0x1c, 0x10,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0xc1, 0xdd, 0x0,

    /* U+003F "?" */
    0x76, 0x42, 0x22, 0x0, 0x80,

    /* U+0040 "@" */
    0x3e, 0x5f, 0xa5, 0xa5, 0xbe, 0x40, 0x3c,

    /* U+0041 "A" */
    0x10, 0x50, 0xa1, 0x47, 0xc8, 0x90, 0x80,

    /* U+0042 "B" */
    0xf4, 0x63, 0xe8, 0xc7, 0xc0,

    /* U+0043 "C" */
    0x7b, 0x38, 0x20, 0x83, 0x37, 0x80,

    /* U+0044 "D" */
    0xf2, 0x38, 0x61, 0x86, 0x2f, 0x0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xe8, 0x43, 0xe0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xe8, 0x42, 0x0,

    /* U+0047 "G" */
    0x7b, 0x38, 0x27, 0x87, 0x37, 0x40,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x40,

    /* U+0049 "I" */
    0xfe,

    /* U+004A "J" */
    0x24, 0x92, 0x78,

    /* U+004B "K" */
    0x8a, 0x4a, 0x38, 0x92, 0x68, 0x80,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0xf0,

    /* U+004D "M" */
    0xc7, 0x8f, 0x1d, 0x5a, 0xb5, 0x64, 0x80,

    /* U+004E "N" */
    0x87, 0x1a, 0x6d, 0x96, 0x38, 0x40,

    /* U+004F "O" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+0051 "Q" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x83,

    /* U+0052 "R" */
    0xf4, 0x63, 0xe9, 0x4a, 0x20,

    /* U+0053 "S" */
    0x74, 0x60, 0xe0, 0xc5, 0xc0,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x80,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc5, 0xc0,

    /* U+0056 "V" */
    0x84, 0x89, 0x13, 0x42, 0x85, 0x4, 0x0,

    /* U+0057 "W" */
    0x88, 0xa6, 0x53, 0x2a, 0xa3, 0x71, 0x98, 0x88,

    /* U+0058 "X" */
    0x44, 0xd0, 0xa0, 0x82, 0x8d, 0x91, 0x0,

    /* U+0059 "Y" */
    0x8e, 0xd4, 0x42, 0x10, 0x80,

    /* U+005A "Z" */
    0xfc, 0x21, 0x8, 0x61, 0xf, 0x80,

    /* U+005B "[" */
    0xea, 0xaa, 0xc0,

    /* U+005C "\\" */
    0x91, 0x22, 0x48,

    /* U+005D "]" */
    0xd5, 0x55, 0xc0,

    /* U+005E "^" */
    0x26, 0x59,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x79, 0xf9, 0xf0,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc7, 0xc0,

    /* U+0063 "c" */
    0x74, 0xa1, 0x27, 0x0,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc5, 0xe0,

    /* U+0065 "e" */
    0x74, 0xbd, 0x27, 0x0,

    /* U+0066 "f" */
    0x6b, 0xa4, 0x90,

    /* U+0067 "g" */
    0x3d, 0x24, 0x8c, 0x7d, 0x17, 0x80,

    /* U+0068 "h" */
    0x88, 0xf9, 0x99, 0x90,

    /* U+0069 "i" */
    0xbe,

    /* U+006A "j" */
    0x45, 0x55, 0xc0,

    /* U+006B "k" */
    0x84, 0x25, 0x4e, 0x4a, 0x40,

    /* U+006C "l" */
    0xaa, 0xac,

    /* U+006D "m" */
    0xff, 0x26, 0x4c, 0x99, 0x20,

    /* U+006E "n" */
    0xf9, 0x99, 0x90,

    /* U+006F "o" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0070 "p" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+0071 "q" */
    0x7c, 0x63, 0x17, 0x84, 0x20,

    /* U+0072 "r" */
    0xf2, 0x48,

    /* U+0073 "s" */
    0xe9, 0x69, 0xf0,

    /* U+0074 "t" */
    0x4b, 0xa4, 0x98,

    /* U+0075 "u" */
    0x99, 0x99, 0xf0,

    /* U+0076 "v" */
    0x8a, 0x94, 0xa2, 0x0,

    /* U+0077 "w" */
    0x92, 0x5a, 0x5a, 0x6c, 0x24,

    /* U+0078 "x" */
    0x49, 0x8c, 0xe4, 0x80,

    /* U+0079 "y" */
    0x8a, 0x54, 0x63, 0x13, 0x80,

    /* U+007A "z" */
    0xf2, 0x64, 0xf0,

    /* U+007B "{" */
    0x69, 0x28, 0x92, 0x60,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0xc9, 0x22, 0x92, 0xc0,

    /* U+007E "~" */
    0xf0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 38, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 42, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 70, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 15, .adv_w = 146, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 117, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 40, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 30, .adv_w = 50, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 33, .adv_w = 51, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 36, .adv_w = 66, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 38, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 42, .adv_w = 40, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 43, .adv_w = 61, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 44, .adv_w = 38, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 66, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 102, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 102, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 105, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 38, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 40, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 99, .adv_w = 89, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 102, .adv_w = 90, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 104, .adv_w = 89, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 107, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 119, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 108, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 111, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 118, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 123, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 46, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 111, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 92, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 143, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 119, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 121, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 209, .adv_w = 109, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 108, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 113, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 109, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 153, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 111, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 50, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 265, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 50, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 271, .adv_w = 76, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 273, .adv_w = 84, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 274, .adv_w = 37, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 275, .adv_w = 89, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 91, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 305, .adv_w = 93, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 40, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 43, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 313, .adv_w = 91, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 50, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 140, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 93, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 91, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 337, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 342, .adv_w = 63, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 82, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 94, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 125, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 91, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 87, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 371, .adv_w = 78, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 378, .adv_w = 42, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 380, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 384, .adv_w = 93, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 2}
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
    0, 0, 0, 0, 0, -15, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, -7, 0, -8, -7, -7,
    0, -7, -7, -11, -2, -4, 1, 1,
    -3, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    7, 0, 0, 0, 3, -1, 0, -10,
    0, 5, 1, -5, 4, 1, -10, -4,
    -8, 0, -12, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -22, 0, 0,
    0, 0, 0, 0, -12, 0, 0, 0,
    -18, 1, -4, 0, 0, -4, -3, -21,
    0, -12, -9, -12, -5, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 1, -2,
    0, -3, -3, -6, -1, 0, 0, 0,
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
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, -19, 0, -3,
    3, 1, -4, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -1, -1, 0,
    -1, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -11, 0, -2, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -2, 0, -15, 0, -7, 0,
    -11, 0, -1, 0, -3, -1, 0, 0,
    0, 0, 0, 0, -3, 0, -2, -1,
    -6, -2, -1, 0, 0, 0, 0, 1,
    -5, -1, 0, 0, 0, 0, -8, -2,
    2, 0, -6, 2, -2, -14, -6, -18,
    4, -12, 1, 0, 0, -8, -2, 0,
    0, 0, 0, 0, -2, -9, -2, -10,
    -10, -2, 1, 0, 0, 0, -1, -1,
    0, -1, 0, 0, 0, 0, 0, 0,
    1, -1, 1, 0, 0, 1, -3, 0,
    -4, -4, -6, -2, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -1, 0, -3,
    0, -2, -4, -3, -1, -1, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -3, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, -2, -1,
    -4, 0, -4, -6, -7, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 1, -3, -3, 0, 0, 0,
    0, 0, 0, -1, -1, 1, 0, 3,
    1, 3, 0, 1, 3, 3, 0, -1,
    -2, -1, -2, -2, -2, 0, -2, -2,
    -1, -4, -1, -2, -2, -1, 1, 2,
    0, 0, 0, 2, -10, -1, 0, 0,
    0, 0, 0, 0, -3, -11, 0, 0,
    -8, -2, 5, 0, 1, 0, 4, -1,
    -2, 0, 0, -2, 0, 0, 0, 0,
    0, -2, 0, -2, -2, -2, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 1, 0, -6, 0, -6, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    -5, 2, 0, 0, 2, -5, 1, -3,
    2, 0, 1, 0, -2, 0, -2, 0,
    0, 0, 0, 0, 0, -2, -9, -5,
    -7, -7, 0, 0, 0, 0, 0, 0,
    -1, 1, -9, 0, 0, 0, 0, 0,
    0, -3, 2, 0, -3, 5, 3, -15,
    -4, -11, 1, -15, 0, -2, 0, -5,
    0, 0, 0, 0, 0, 0, 0, -8,
    1, -7, -7, 2, 2, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, -2, -1, -6, 0, -1, -2, 0,
    1, -2, -3, -2, -5, -4, -2, -1,
    0, -1, -1, -1, 0, -1, -1, -1,
    -1, 0, 0, 0, -4, 0, 0, 0,
    0, 0, -1, -17, -4, 0, 0, 0,
    0, 0, 0, -2, -10, 0, 0, -9,
    1, 0, 0, 0, -4, -2, -3, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    -3, 1, 0, 3, 3, 1, 0, 1,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, -2, -1, -6, 0, -1,
    -2, 0, 1, -2, -3, -2, -5, -4,
    -2, -1, 0, -1, -1, -1, 0, -1,
    -1, -1, -1, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, -3, 1, 0,
    -2, 1, -3, -2, -3, -5, 0, -3,
    0, -2, -1, 0, -2, -1, -1, 0,
    -1, -1, 0, 0, -1, 0, 0, -1,
    -1, 0, 0, 0, 0, 0, -3, 1,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -2, 0, 1, -2, 0, -3, -3,
    -5, -1, -1, 0, 0, -4, 0, 0,
    0, 0, 0, 0, -3, 0, 1, 1,
    -3, -1, 2, 0, 0, -1, 3, -12,
    -8, 0, 0, 0, -10, 0, 0, -11,
    -14, 0, -1, -7, 0, 5, 0, 6,
    2, 7, 2, -10, 0, 0, -12, 0,
    0, 3, 0, -4, -11, -4, -9, -7,
    -7, -8, -7, 2, 0, 0, -5, 4,
    -7, -8, 0, 0, 0, 0, 0, 0,
    -8, -18, 0, -3, -8, -3, 6, 0,
    2, 0, 7, 3, -7, -1, 0, -6,
    0, 0, 3, 0, -1, -5, -1, 0,
    0, 0, -4, -1, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -4, 4, -2, 1,
    -2, 0, 8, -3, 1, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -3,
    -4, -7, -7, 1, 0, 2, -2, 0,
    0, 3, -14, -12, 0, 0, 0, 0,
    0, 0, -11, -13, 0, -5, -10, -7,
    6, 1, 6, 3, 7, 0, -11, -2,
    -2, -13, 0, -2, 0, 0, -2, -12,
    -8, -8, -8, -8, -6, -6, 3, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, -2, 1, 0, 0, 2,
    -1, 3, 0, 2, 1, 1, 2, 1,
    -2, 0, 0, -2, -2, 0, -2, -2,
    0, 0, -1, -2, -2, 0, 1, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, -17, 0, -7, 0, -9, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -1, -3, 0, -3, -3, -2, 0,
    0, -1, -11, 0, -2, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -2, 0, -15, 0, -7, 0, -11,
    0, -1, -1, -3, -1, -1, -1, 0,
    -1, -1, 0, -3, 0, -1, -1, -6,
    -2, -1, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 1, 1,
    0, 1, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, -3,
    -1, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 1, 0, -3, -2, 0,
    0, 0, 0, 0, -1, -4, 0, 1,
    1, 1, 0, -1, 0, 1, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 2, -2,
    0, 0, 5, 0, 0, -3, 1, -2,
    0, 0, 0, 1, 3, 0, -7, 0,
    -1, 0, -5, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -2, 0, 2,
    -3, 0, 0, 0, 0, 0, -2, -2,
    -2, 2, 2, 0, 0, 0, 0, -7,
    0, 0, 1, -3, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 1, 0,
    -6, 0, -4, 0, -4, 0, -1, -1,
    -4, 2, -1, -1, 0, -2, -1, -2,
    -6, -2, -3, -3, 0, 1, 1, 0,
    1, 0, -3, -11, -7, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 2, -2, 0, 0, 0, 0, 0,
    0, -2, 0, 2, 2, 2, 1, 0,
    -1, -1, 0, -1, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, -2, -1,
    -1, 0, -3, 0, 1, 0, -4, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, -6, 2, 0, 0, 1,
    0, 0, 0, -7, -1, 0, 0, 0,
    0, 0, -1, 1, 0, -5, -8, -1,
    0, 0, 0, 0, 0, 0, -2, -8,
    0, 0, 0, 0, 0, 0, -4, 0,
    -5, 0, -2, 0, 2, -3, 0, 0,
    0, 0, 0, -2, 1, 0, 2, 2,
    0, 0, 0, 0, 0, 0, -1, 0,
    -6, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, -2, 0, 0, -1,
    0, 0, 0, -3, 0, 1, 1, 0,
    0, 0, 0, 0, -2, -3, -1, 0,
    0, -1, 0, 0, 0, -3, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -4, 0, 1, 0, 0, -1,
    0, 0, 0, 0, 0, 1, 1, 0,
    -1, -1, -1, 2, 0
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
const lv_font_t ui_font_SansMedium10 = {
#else
lv_font_t ui_font_SansMedium10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_SANSMEDIUM10*/

