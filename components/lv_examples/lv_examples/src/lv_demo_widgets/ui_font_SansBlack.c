/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\Behzad\Desktop\mohsen project\assets\fonts\PublicSans-Black.ttf -o C:\Users\Behzad\Desktop\mohsen project\assets\fonts\ui_font_SansBlack.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "lv_demo_widgets.h"

#ifndef UI_FONT_SANSBLACK
#define UI_FONT_SANSBLACK 1
#endif

#if UI_FONT_SANSBLACK

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xda, 0x1f, 0xf0,

    /* U+0022 "\"" */
    0xef, 0x9f, 0x36, 0x6c, 0xc0,

    /* U+0023 "#" */
    0x12, 0x9, 0x8c, 0xc6, 0x6f, 0xff, 0xfc, 0xc8,
    0x44, 0xff, 0xff, 0xd9, 0x8c, 0xc6, 0x63, 0x20,

    /* U+0024 "$" */
    0x1c, 0xe, 0xf, 0x8f, 0xef, 0xff, 0x1f, 0xc1,
    0xfc, 0x7f, 0x3, 0xf8, 0xff, 0xff, 0xf1, 0xf0,
    0x70, 0x38,

    /* U+0025 "%" */
    0x78, 0x21, 0xe1, 0xc, 0xc4, 0x33, 0x20, 0xcd,
    0x1, 0xe5, 0xe7, 0xa7, 0x81, 0xbf, 0xc, 0xfc,
    0x23, 0xf1, 0x87, 0x8c, 0x1e,

    /* U+0026 "&" */
    0xf, 0x0, 0xfe, 0xe, 0x70, 0x73, 0x81, 0xf8,
    0xf, 0xb8, 0xfd, 0xcf, 0xfc, 0x73, 0xe3, 0x9f,
    0x1f, 0xf8, 0x7c, 0xe0,

    /* U+0027 "'" */
    0xfb, 0x6c,

    /* U+0028 "(" */
    0x39, 0x9c, 0xee, 0x73, 0x9c, 0xe7, 0x38, 0xe7,
    0x18, 0xe0,

    /* U+0029 ")" */
    0xe3, 0x1c, 0xe3, 0x9c, 0xe7, 0x39, 0xce, 0xe7,
    0x33, 0x80,

    /* U+002A "*" */
    0x18, 0x18, 0x7b, 0xff, 0x1c, 0x3c, 0x76, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18,
    0x18,

    /* U+002C "," */
    0xff, 0xa8,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xc, 0x31, 0x86, 0x18, 0xc3, 0xc, 0x61, 0x86,
    0x30,

    /* U+0030 "0" */
    0x3e, 0x3f, 0x9d, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xbb, 0x9f, 0xc7, 0xc0,

    /* U+0031 "1" */
    0x1f, 0xfe, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x70,

    /* U+0032 "2" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x70, 0x78, 0xfc, 0xfc,
    0xfc, 0xf8, 0x78, 0x3f, 0xff, 0xf0,

    /* U+0033 "3" */
    0x1f, 0x1f, 0xe7, 0x1f, 0x87, 0x7, 0xc3, 0xe0,
    0xf8, 0xf, 0xe1, 0xdc, 0x77, 0xf8, 0xfc,

    /* U+0034 "4" */
    0x7, 0x3, 0xc1, 0xf0, 0x7c, 0x37, 0x1d, 0xce,
    0x73, 0xff, 0xff, 0xc1, 0xc0, 0x70, 0x1c,

    /* U+0035 "5" */
    0x7f, 0x9f, 0xe7, 0x1, 0xc0, 0x7f, 0x1f, 0xe0,
    0x3c, 0x7, 0x21, 0xdc, 0xf7, 0xf8, 0xfc,

    /* U+0036 "6" */
    0x1f, 0xf, 0xe7, 0x1f, 0x80, 0xec, 0x3f, 0xef,
    0xff, 0x87, 0xe1, 0xdc, 0xf7, 0xf8, 0x7c,

    /* U+0037 "7" */
    0xff, 0xff, 0xc1, 0xe0, 0xe0, 0xe0, 0x70, 0x70,
    0x38, 0x1c, 0x1c, 0xe, 0x7, 0x0,

    /* U+0038 "8" */
    0x1e, 0xf, 0xc7, 0x39, 0xce, 0x73, 0x8f, 0xc7,
    0xfb, 0x87, 0xe1, 0xf8, 0x77, 0xf8, 0xfc,

    /* U+0039 "9" */
    0x3c, 0x3f, 0xb8, 0xdc, 0x7e, 0x3b, 0xfc, 0xfe,
    0x7, 0xe3, 0xf3, 0x9f, 0xc7, 0x80,

    /* U+003A ":" */
    0xff, 0x80, 0x3f, 0xe0,

    /* U+003B ";" */
    0xff, 0x80, 0x3f, 0xef, 0x40,

    /* U+003C "<" */
    0x3, 0x1f, 0x7f, 0xf8, 0xf0, 0xfe, 0x3f, 0x7,
    0x1,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0xc0, 0xf8, 0xfe, 0x1f, 0xf, 0x7f, 0xfc, 0xe0,
    0x80,

    /* U+003F "?" */
    0x1e, 0x3f, 0xdc, 0xe0, 0x70, 0x70, 0x70, 0x70,
    0x38, 0x0, 0xe, 0x7, 0x3, 0x80,

    /* U+0040 "@" */
    0xf, 0x83, 0xfc, 0x70, 0xe6, 0xef, 0xcf, 0xbd,
    0x9b, 0xd9, 0xbd, 0x9b, 0xdf, 0xe6, 0xec, 0x70,
    0x3, 0xfc, 0x1f, 0x0,

    /* U+0041 "A" */
    0xf, 0x0, 0xf0, 0x1f, 0x1, 0xf8, 0x1f, 0x83,
    0x98, 0x39, 0xc3, 0xfc, 0x7f, 0xc7, 0xfe, 0x70,
    0xef, 0xe,

    /* U+0042 "B" */
    0xfe, 0x7f, 0xf8, 0xfc, 0x7e, 0x3f, 0xfb, 0xfd,
    0xc7, 0xe3, 0xf1, 0xff, 0xff, 0xe0,

    /* U+0043 "C" */
    0x1f, 0xf, 0xe7, 0x3f, 0x87, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0xe1, 0xdc, 0xf3, 0xf8, 0x7c,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xce, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe3, 0xf8, 0xef, 0xf3, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xfc, 0xe, 0x7, 0xfb, 0xfd,
    0xc0, 0xe0, 0x7f, 0xff, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0xfb, 0xfd,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0,

    /* U+0047 "G" */
    0x1f, 0x7, 0xf9, 0xff, 0xf8, 0xfe, 0x1, 0xcf,
    0xf9, 0xff, 0xf, 0xf1, 0xef, 0xfc, 0xff, 0x8f,
    0xb0,

    /* U+0048 "H" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xff, 0xff,
    0xff, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x1c, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1f, 0xff,
    0xfe,

    /* U+004B "K" */
    0xe3, 0xf9, 0xee, 0x73, 0xb8, 0xfe, 0x3f, 0x8f,
    0xf3, 0xdc, 0xe7, 0xb8, 0xee, 0x3f, 0x87,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xff, 0xff,

    /* U+004D "M" */
    0xf8, 0xff, 0xc7, 0xfe, 0x3f, 0xf1, 0xff, 0xdf,
    0xf6, 0xdf, 0xb6, 0xfd, 0xf7, 0xef, 0xbf, 0x39,
    0xf9, 0xcf, 0xce, 0x70,

    /* U+004E "N" */
    0xe0, 0xfe, 0x1f, 0xe3, 0xfe, 0x7f, 0xcf, 0xfd,
    0xfb, 0xff, 0x3f, 0xe3, 0xfc, 0x7f, 0x87, 0xf0,
    0x70,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xee, 0x38, 0xfe, 0xf,
    0x80,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb8, 0xfc, 0x7e, 0x3f, 0x3f, 0xfd,
    0xfc, 0xe0, 0x70, 0x38, 0x1c, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xee, 0x38, 0xff, 0xf,
    0xe0, 0x1e, 0x1, 0xc0,

    /* U+0052 "R" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x3f, 0xfd,
    0xfc, 0xe7, 0x73, 0xb8, 0xfc, 0x70,

    /* U+0053 "S" */
    0x3f, 0x1f, 0xee, 0x3f, 0x80, 0xfe, 0x3f, 0xe7,
    0xfc, 0x7f, 0x1, 0xf8, 0x77, 0xf8, 0xfc,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xfc, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70,

    /* U+0055 "U" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xf3, 0xff, 0xf7, 0xf8, 0xfc,

    /* U+0056 "V" */
    0xe0, 0xee, 0x1d, 0xc3, 0xb8, 0xe3, 0x9c, 0x73,
    0x8e, 0xe0, 0xfc, 0x1f, 0x83, 0xe0, 0x3c, 0x7,
    0x80,

    /* U+0057 "W" */
    0xe1, 0x8e, 0xe7, 0x1d, 0xcf, 0x3b, 0x9e, 0x63,
    0xbd, 0xc7, 0xfb, 0x8f, 0xff, 0x1f, 0x7c, 0x1e,
    0x78, 0x3c, 0xf0, 0x71, 0xc0, 0x61, 0x80,

    /* U+0058 "X" */
    0x71, 0xe7, 0x9c, 0x3f, 0x83, 0xf8, 0x1f, 0x0,
    0xf0, 0xf, 0x1, 0xf8, 0x3b, 0x83, 0xbc, 0x71,
    0xe7, 0x1e,

    /* U+0059 "Y" */
    0xf1, 0xee, 0x39, 0xef, 0x1d, 0xc1, 0xf0, 0x3e,
    0x3, 0x80, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0,

    /* U+005A "Z" */
    0x7f, 0xdf, 0xf0, 0x78, 0x1c, 0xf, 0x7, 0x81,
    0xc0, 0xf0, 0x78, 0x1f, 0xff, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xf9, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce,
    0x7f, 0xe0,

    /* U+005C "\\" */
    0xc1, 0x86, 0x18, 0x30, 0xc3, 0x6, 0x18, 0x60,
    0xc3,

    /* U+005D "]" */
    0xff, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0xff, 0xe0,

    /* U+005E "^" */
    0x18, 0x30, 0xe1, 0xe6, 0xcc, 0xd9, 0x80,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x71, 0x80,

    /* U+0061 "a" */
    0x3e, 0x7f, 0xe7, 0x3f, 0xff, 0xe7, 0xe7, 0xff,
    0x77,

    /* U+0062 "b" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0xe7, 0xfb, 0xdf,
    0xc7, 0xe3, 0xf1, 0xf9, 0xfb, 0xed, 0xe0,

    /* U+0063 "c" */
    0x3c, 0x7e, 0xe7, 0xe0, 0xe0, 0xe0, 0xf7, 0x7e,
    0x3c,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe0, 0x73, 0xbb, 0xff, 0xdf,
    0xc7, 0xe3, 0xf1, 0xf8, 0xef, 0xb3, 0xd8,

    /* U+0065 "e" */
    0x3c, 0x3f, 0xb9, 0xdf, 0xef, 0xff, 0x3, 0x9c,
    0xfe, 0x3e, 0x0,

    /* U+0066 "f" */
    0x3d, 0xf7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0x1c,

    /* U+0067 "g" */
    0x0, 0x23, 0xdd, 0xff, 0xb9, 0xc7, 0x38, 0x7e,
    0x7, 0x83, 0x80, 0x7f, 0x87, 0xf9, 0x87, 0x3f,
    0xe3, 0xf0,

    /* U+0068 "h" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xee, 0xff, 0xff, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7,

    /* U+0069 "i" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0xff, 0xe0,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x77, 0x73, 0xf9,
    0xf8, 0xfc, 0x7f, 0x3b, 0x9c, 0xee, 0x70,

    /* U+006C "l" */
    0xe7, 0x39, 0xce, 0x73, 0x9c, 0xe7, 0x3d, 0xf7,
    0x80,

    /* U+006D "m" */
    0xee, 0x77, 0xff, 0xff, 0xff, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x38,

    /* U+006E "n" */
    0xee, 0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7,

    /* U+006F "o" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x7e,
    0x3c,

    /* U+0070 "p" */
    0xee, 0x7f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0xdf,
    0xfe, 0xee, 0x70, 0x38, 0x1c, 0x0,

    /* U+0071 "q" */
    0x3b, 0xbf, 0xfd, 0xfc, 0x7e, 0x3f, 0x1f, 0xde,
    0xff, 0x3b, 0x81, 0xc0, 0xe0, 0x70,

    /* U+0072 "r" */
    0xef, 0xff, 0xf8, 0xe3, 0x8e, 0x38, 0xe0,

    /* U+0073 "s" */
    0x3c, 0xfe, 0xe6, 0xf8, 0xfe, 0x3e, 0xe6, 0xfe,
    0x3c,

    /* U+0074 "t" */
    0x30, 0xc7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0xcf,

    /* U+0075 "u" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff,
    0x7b,

    /* U+0076 "v" */
    0xe3, 0x33, 0x9d, 0xce, 0xc3, 0xe1, 0xf0, 0xf0,
    0x38, 0x18, 0x0,

    /* U+0077 "w" */
    0xe7, 0x3b, 0x3b, 0x9d, 0xdc, 0xfe, 0xe7, 0xfe,
    0x1e, 0xf0, 0xf7, 0x87, 0x38, 0x19, 0xc0,

    /* U+0078 "x" */
    0x73, 0x9f, 0xc3, 0xf0, 0x78, 0x1e, 0xf, 0x83,
    0xf1, 0xde, 0xf3, 0x80,

    /* U+0079 "y" */
    0x73, 0x9c, 0xe7, 0x38, 0xfc, 0x3f, 0xf, 0xc1,
    0xe0, 0x78, 0xc, 0x1f, 0x7, 0x81, 0xe0,

    /* U+007A "z" */
    0xff, 0xfc, 0x71, 0xe3, 0x8f, 0x1c, 0x7f, 0xfe,

    /* U+007B "{" */
    0x1e, 0x7c, 0xe1, 0xc3, 0x87, 0x3e, 0x70, 0x38,
    0x70, 0xe1, 0xc3, 0x87, 0xc7, 0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xf1, 0xf0, 0xe1, 0xc3, 0x87, 0xf, 0x8f, 0x38,
    0x70, 0xe1, 0xc3, 0x9f, 0x3c, 0x0,

    /* U+007E "~" */
    0x71, 0xff, 0xce
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 54, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 79, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 135, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 11, .adv_w = 161, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 27, .adv_w = 179, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 249, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 218, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 70, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 88, .adv_w = 92, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 98, .adv_w = 92, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 108, .adv_w = 140, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 116, .adv_w = 158, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 125, .adv_w = 79, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 127, .adv_w = 104, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 129, .adv_w = 79, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 105, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 173, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 115, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 172, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 178, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 178, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 177, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 177, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 79, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 80, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 288, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 297, .adv_w = 158, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 303, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 312, .adv_w = 140, .box_w = 9, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 211, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 346, .adv_w = 190, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 179, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 191, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 190, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 200, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 198, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 84, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 106, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 242, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 207, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 201, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 204, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 597, .adv_w = 183, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 182, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 163, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 191, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 187, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 251, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 190, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 185, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 179, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 94, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 756, .adv_w = 105, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 94, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 775, .adv_w = 126, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 782, .adv_w = 150, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 784, .adv_w = 78, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 786, .adv_w = 148, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 158, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 158, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 102, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 162, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 872, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 73, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 80, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 898, .adv_w = 153, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 90, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 236, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 156, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 969, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 983, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 140, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1008, .adv_w = 156, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1017, .adv_w = 137, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 204, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 156, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 151, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1070, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 112, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1092, .adv_w = 70, .box_w = 2, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1097, .adv_w = 110, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1111, .adv_w = 167, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 5}
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
    0, 1, 0, 2, 0, 0, 0, 3,
    2, 0, 0, 0, 0, 4, 5, 4,
    0, 6, 0, 0, 6, 7, 0, 6,
    8, 6, 6, 4, 0, 0, 0, 0,
    0, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 17, 18, 19, 20, 17, 17,
    21, 22, 23, 24, 25, 26, 18, 27,
    27, 28, 29, 30, 0, 0, 0, 0,
    4, 0, 31, 9, 9, 32, 9, 33,
    34, 31, 32, 32, 35, 36, 31, 31,
    9, 9, 32, 37, 38, 39, 32, 40,
    40, 41, 40, 42, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 3,
    2, 0, 4, 0, 0, 5, 6, 5,
    0, 0, 7, 8, 0, 9, 10, 0,
    11, 0, 0, 0, 0, 0, 0, 0,
    4, 12, 13, 14, 15, 14, 14, 14,
    15, 14, 14, 16, 14, 14, 14, 14,
    15, 14, 15, 14, 17, 18, 19, 20,
    20, 21, 22, 23, 0, 0, 4, 0,
    5, 0, 24, 25, 12, 12, 12, 26,
    27, 28, 28, 29, 28, 30, 25, 25,
    12, 25, 12, 25, 31, 32, 33, 34,
    34, 35, 34, 36, 0, 37, 4, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, -5, 0, -8,
    -5, 0, -5, -13, 0, -3, 3, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, 0, -19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 5, 0,
    0, -28, 0, 8, 3, -5, 8, 3,
    -20, -5, -19, 0, -26, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -16, 0, 0, 0, -29, 5,
    -6, 0, 0, 0, -4, -30, 0, -16,
    -20, -19, -8, 0, 0, 0, -3, 0,
    0, 0, 3, -4, 0, -8, -10, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, -28,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 0, -3, 0, 3, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 4,
    0, -21, 0, -15, 0, -32, 0, 0,
    0, -3, -3, 0, 0, 0, 0, -3,
    -1, -5, -12, -4, -3, 0, 0, 0,
    5, 3, -8, 0, 0, 0, 0, -12,
    -5, 6, 0, -9, 6, -4, -22, -12,
    -28, 5, -25, 0, 0, 0, -9, -3,
    0, 0, 0, -4, -12, -4, -20, -5,
    3, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 3, -4, 5,
    0, 0, 3, -3, 0, -6, -8, -10,
    -5, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, -8, 0, 0, 0, 0,
    -1, 0, -8, -10, -8, -5, -5, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, 0, -3, 0, 0, -10,
    -12, -13, -12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, -5, 0,
    0, 0, 0, 0, 0, 3, 0, -1,
    4, 3, 8, 0, 3, 5, 5, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -4, -3, -4, 0, 3, 8, 0, 0,
    0, 8, -24, 0, 0, 0, 0, 0,
    0, -6, -18, 0, 0, -13, -3, 10,
    0, 0, 0, 8, -5, -3, 0, 0,
    -3, 0, 0, 0, -4, 3, -3, -3,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 3, 0, -6, 0, -10, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    0, 0, 0, 0, 0, -9, 5, 0,
    0, 5, -10, 3, -6, 8, 0, 5,
    0, -4, 0, -4, 0, 0, 0, 0,
    -5, -16, -10, -16, 0, 0, 0, 0,
    0, 0, 0, 3, -13, 0, 0, 0,
    0, 0, 0, 4, 0, -5, 10, 10,
    -22, -5, -20, 5, -30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 4,
    -14, 8, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, -4, -5,
    -9, 0, -3, 0, 3, 0, -1, -12,
    -8, -17, -9, -8, -5, 0, 0, -5,
    0, -5, -4, -3, 0, 0, -13, 0,
    0, 0, 0, 0, -3, -31, -3, 0,
    0, 0, 0, 0, -6, -20, 0, 0,
    -17, -1, 0, 0, 0, -16, -8, -6,
    -5, 0, 0, -4, 0, 0, 0, -5,
    3, 0, 5, -1, 0, 5, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    -4, -5, -9, 0, -3, 0, 3, 0,
    -1, -12, -8, -17, -9, -8, -5, 0,
    0, -5, 0, -5, -4, -3, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, -5, 3,
    0, -5, 3, -3, -3, -6, -9, 0,
    -13, 0, -3, 0, 0, -1, 0, 0,
    0, 0, 0, -1, 0, -1, -1, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, -3, -3, 0, 0, 5,
    3, 3, 0, -5, -6, -9, -4, -3,
    0, 0, -4, 0, 0, 0, 0, -3,
    0, 0, -10, -1, 8, 0, 0, -5,
    10, -23, 0, 0, 0, -13, 0, 0,
    -21, -22, 0, 0, -11, -1, 10, 0,
    8, 4, 9, 3, -16, 0, 0, -22,
    0, 0, 0, -22, -5, -17, -17, -17,
    -13, 6, 0, 0, -17, 10, -15, -13,
    0, 0, 0, 0, 0, -17, -28, 0,
    -12, -13, -8, 8, 0, 8, 8, 8,
    0, -15, -5, 0, -17, 0, 0, 0,
    -15, -3, 0, 0, -13, -5, 0, 0,
    0, 0, 0, 0, -15, 0, 0, 0,
    0, 0, -9, 5, 0, -13, 8, -4,
    3, -4, -1, 8, -4, 5, -3, -1,
    0, 0, -1, 0, -1, -8, -13, -10,
    -19, 5, 0, 8, -9, 0, 0, 8,
    -28, -20, 0, 0, 0, 0, 0, -32,
    -25, 0, -15, -17, -13, 9, 3, 10,
    6, 8, 0, -24, 1, -5, -29, 1,
    0, 1, -25, -16, -20, -16, -15, -15,
    10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 3, 0, 0,
    0, 4, 5, -1, 5, 5, 0, 4,
    4, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -5, 0, 5, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    0, -15, 0, -22, 0, -1, 0, 0,
    0, 0, 0, 0, -1, -4, 0, -5,
    -1, -1, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 5,
    0, 1, 1, 0, 0, 0, 0, 1,
    0, 5, 5, 0, -3, 0, 3, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 5, 0,
    0, 13, 0, -1, 8, -1, 5, 3,
    3, 5, 0, -8, 0, 0, 0, -13,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, -5, 0, 4, -5, 0, 0, 0,
    -6, 4, -1, 5, 0, 0, 0, 0,
    -5, 0, 0, 4, -4, 0, 0, 0,
    0, 0, -9, 0, 0, 0, 3, 0,
    -9, 0, -6, 0, -9, 0, -1, -1,
    -5, 1, -1, 0, -4, -1, -9, 0,
    -8, 0, 3, 4, 0, 3, 0, -5,
    -9, -1, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 6, 0, 0,
    0, 0, 0, 1, 0, 3, 3, 0,
    -1, -3, 0, 0, -5, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    1, 0, 0, -1, 0, 0, 0, -1,
    1, 0, -1, -5, -3, -3, 0, -1,
    0, 3, 0, -4, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, -5,
    1, 0, 5, 0, -1, -5, -1, 0,
    1, -1, 0, -3, -3, 0, -13, -13,
    -1, 0, 0, 0, 0, 0, -5, -19,
    0, 0, 0, 0, 0, 0, -6, 0,
    -17, 0, -6, 0, 6, -5, 0, 0,
    0, -5, 9, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    -3, 0, 0, -5, 0, 0, 0, -5,
    0, 3, 0, 0, 0, 0, -5, 0,
    -4, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, -10, 0,
    0, 0, -13, 0, 4, 0, 0, 0,
    0, 0, 0, 4, 5, -1, 4, 0,
    5, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 42,
    .right_class_cnt     = 37,
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
const lv_font_t ui_font_SansBlack = {
#else
lv_font_t ui_font_SansBlack = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_SANSBLACK*/

