/**
 * @file lv_demo_widgets.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_examples.h"
#include "lv_demo_widgets.h"
#include "lvgl.h"
#include "esp_log.h"
//#include "esp_log.h"

//#if LV_USE_DEMO_WIDGETS

#if 1

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static lv_obj_t * tv;

//LV_IMG_DECLARE(ui_img_v5_png);

//static lv_style_t ARC1_style;
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Screen1_Panel1;
lv_obj_t * ui_Screen1_Panel2;
lv_obj_t * ui_Screen1_Label3;
lv_obj_t * ui_Screen1_Label4;
lv_obj_t * ui_Screen1_Image3;
lv_obj_t * ui_Screen1_Image2;
lv_obj_t * ui_Screen1_Image1;
lv_obj_t * ui_Screen1_Label2;
lv_obj_t * ui_Screen1_Label1;
lv_obj_t * ui_Screen1_Panel3;
lv_obj_t * ui_Screen1_Label5;
lv_obj_t * ui_Screen1_Panel4;
lv_obj_t * ui_Screen1_Panel7;
lv_obj_t * ui_Screen1_Label8;
lv_obj_t * ui_Screen1_Image9;
lv_obj_t * ui_Screen1_Panel5;
lv_obj_t * ui_Screen1_Panel8;
lv_obj_t * ui_Screen1_Label9;
lv_obj_t * ui_Screen1_Label7;
lv_obj_t * ui_Screen1_Panel6;
lv_obj_t * ui_Screen1_Panel9;
lv_obj_t * ui_Screen1_Label6;
lv_obj_t * ui_Screen1_Image8;
lv_obj_t * ui_Screen1_Label10;
lv_obj_t * ui_Screen1_Image5;
lv_obj_t * ui_Screen1_Image7;
lv_obj_t * ui_Screen1_Image4;


/**********************
 *      MACROS
 **********************/
#define font_en true
#define img_en true


/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_demo_widgets(void)
{

	tv = lv_obj_create(NULL,NULL);
	lv_obj_set_size(tv, 320, 240);
	lv_obj_set_style_local_bg_color(tv, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xE8E8E8));

	ui_Screen1_Panel1 = lv_obj_create(tv,NULL);
	lv_obj_set_width(ui_Screen1_Panel1, 120);
	lv_obj_set_height(ui_Screen1_Panel1, 120);
	lv_obj_align(ui_Screen1_Panel1, tv, LV_ALIGN_CENTER, -74, -20);
    lv_obj_set_style_local_radius(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x77D251));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
	lv_obj_set_style_local_bg_grad_color(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xF2F2F2));
	lv_obj_set_style_local_bg_grad_dir(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,LV_GRAD_DIR_VER);
	lv_obj_set_style_local_border_color(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_border_opa(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_border_width(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,2);
	lv_obj_set_style_local_shadow_color(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xD4D4D4));
	lv_obj_set_style_local_shadow_opa(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_shadow_width(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,10);
	lv_obj_set_style_local_shadow_spread(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,5);
	lv_obj_set_style_local_shadow_ofs_x(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_shadow_ofs_y(ui_Screen1_Panel1, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);


    ui_Screen1_Panel2 = lv_obj_create(ui_Screen1_Panel1,NULL);
    lv_obj_set_width(ui_Screen1_Panel2, 122);
    lv_obj_set_height(ui_Screen1_Panel2, 35);
	lv_obj_align(ui_Screen1_Panel2, ui_Screen1_Panel1, LV_ALIGN_IN_BOTTOM_MID, 0, 0);
    lv_obj_set_style_local_radius(ui_Screen1_Panel2, LV_WIN_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel2, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel2, LV_WIN_PART_BG, LV_STATE_DEFAULT, 242);
	lv_obj_set_style_local_bg_blend_mode(ui_Screen1_Panel2, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_BLEND_MODE_NORMAL);

	ui_Screen1_Label3 = lv_label_create(ui_Screen1_Panel2,NULL);
    lv_obj_set_width(ui_Screen1_Label3, 1);
    lv_obj_set_height(ui_Screen1_Label3, 1);
	lv_obj_align(ui_Screen1_Label3, ui_Screen1_Panel2, LV_ALIGN_CENTER, -10, 1);
    lv_label_set_text(ui_Screen1_Label3, "25");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label3, LV_WIN_PART_BG, LV_STATE_DEFAULT, &ui_font_Bold_Font);
#endif

	ui_Screen1_Label4 = lv_label_create(ui_Screen1_Panel2,NULL);
    lv_obj_set_width(ui_Screen1_Label4, 1);
    lv_obj_set_height(ui_Screen1_Label4, 1);
	lv_obj_align(ui_Screen1_Label4, ui_Screen1_Panel2, LV_ALIGN_CENTER, 38, 0);
    lv_label_set_text(ui_Screen1_Label4, "10%");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label4, LV_WIN_PART_BG, LV_STATE_DEFAULT, &ui_font_Bold_Font);
#endif

    ui_Screen1_Image2 = lv_img_create(ui_Screen1_Panel2, NULL);
#if img_en
    lv_img_set_src(ui_Screen1_Image2, &ui_img_drop_png);
#endif
    lv_obj_set_width(ui_Screen1_Image2, 24);   /// 24
    lv_obj_set_height(ui_Screen1_Image2, 24);
	lv_obj_align(ui_Screen1_Image2, ui_Screen1_Panel2, LV_ALIGN_CENTER, 9, 0);/// 24


    ui_Screen1_Image3 = lv_img_create(ui_Screen1_Panel2, NULL);
#if img_en
    lv_img_set_src(ui_Screen1_Image3, &ui_img_temperature_png);
#endif
    lv_obj_set_width(ui_Screen1_Image3, 24);   /// 24
    lv_obj_set_height(ui_Screen1_Image3, 24);
	lv_obj_align(ui_Screen1_Image3, ui_Screen1_Panel2, LV_ALIGN_CENTER, -38, 0);/// 24


    ui_Screen1_Image1 = lv_img_create(ui_Screen1_Panel1, NULL);
#if img_en
    lv_img_set_src(ui_Screen1_Image1, &ui_img_smile_png);
#endif
    lv_obj_set_width(ui_Screen1_Image1, 32);
    lv_obj_set_height(ui_Screen1_Image1, 32);
	lv_obj_align(ui_Screen1_Image1, ui_Screen1_Panel1, LV_ALIGN_CENTER, -32, -13);/// 24//

    ui_Screen1_Label2 = lv_label_create(ui_Screen1_Panel1,NULL);
    lv_obj_set_width(ui_Screen1_Label2, 1);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, 1);
	lv_obj_align(ui_Screen1_Label2, ui_Screen1_Panel1, LV_ALIGN_CENTER, 12, -28);
    lv_label_set_text(ui_Screen1_Label2, "26");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label2, LV_WIN_PART_BG, LV_STATE_DEFAULT, &ui_font_SansBold30);
#endif

    ui_Screen1_Label1 = lv_label_create(ui_Screen1_Panel1,NULL);
    lv_obj_set_width(ui_Screen1_Label1, 1);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, 1);    /// 1
	lv_obj_align(ui_Screen1_Label1, ui_Screen1_Panel1, LV_ALIGN_CENTER, 20,12);/// 1
    lv_label_set_text(ui_Screen1_Label1, "AQI");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label1, LV_WIN_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_14);
#endif


    ui_Screen1_Panel3 = lv_obj_create(tv,NULL);
	lv_obj_set_width(ui_Screen1_Panel3, 120);
	lv_obj_set_height(ui_Screen1_Panel3, 35);
	lv_obj_align(ui_Screen1_Panel3, tv, LV_ALIGN_CENTER, -74, 80);
    lv_obj_set_style_local_radius(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x54D2C4));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
	lv_obj_set_style_local_border_color(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_border_opa(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_border_width(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,2);
	lv_obj_set_style_local_shadow_color(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xD4D4D4));
	lv_obj_set_style_local_shadow_opa(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_shadow_width(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,10);
	lv_obj_set_style_local_shadow_spread(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,5);
	lv_obj_set_style_local_shadow_ofs_x(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_shadow_ofs_y(ui_Screen1_Panel3, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);

	ui_Screen1_Label5 = lv_label_create(ui_Screen1_Panel3,NULL);
    lv_obj_set_width(ui_Screen1_Label5, 10);
    lv_obj_set_height(ui_Screen1_Label5, 1);
	lv_obj_align(ui_Screen1_Label5, ui_Screen1_Panel3, LV_ALIGN_CENTER,-25, 0);
    lv_label_set_text(ui_Screen1_Label5, "Manual Fan");
    lv_obj_set_style_local_text_opa(ui_Screen1_Label5, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
    lv_obj_set_style_local_text_color(ui_Screen1_Label5, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label5, LV_WIN_PART_BG, LV_STATE_DEFAULT, &ui_font_SansRegular);
#endif



    ui_Screen1_Panel4 = lv_obj_create(tv,NULL);
	lv_obj_set_width(ui_Screen1_Panel4, 120);
	lv_obj_set_height(ui_Screen1_Panel4, 50);
	lv_obj_align(ui_Screen1_Panel4, tv, LV_ALIGN_CENTER, 70, -54);
    lv_obj_set_style_local_radius(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
	lv_obj_set_style_local_border_color(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_border_opa(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_border_width(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,1);
	lv_obj_set_style_local_shadow_color(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xD4D4D4));
	lv_obj_set_style_local_shadow_opa(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_shadow_width(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,10);
	lv_obj_set_style_local_shadow_spread(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,5);
	lv_obj_set_style_local_shadow_ofs_x(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_shadow_ofs_y(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);

	ui_Screen1_Panel7 = lv_obj_create(ui_Screen1_Panel4,NULL);
    lv_obj_set_width(ui_Screen1_Panel7, 10);
    lv_obj_set_height(ui_Screen1_Panel7, 40);
	lv_obj_align(ui_Screen1_Panel7, ui_Screen1_Panel4, LV_ALIGN_CENTER, -46, 2);
    lv_obj_set_style_local_radius(ui_Screen1_Panel7, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel7, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x54D2C4));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel7, LV_WIN_PART_BG, LV_STATE_DEFAULT, 242);

	ui_Screen1_Label8 = lv_label_create(ui_Screen1_Panel4,NULL);
    lv_obj_set_width(ui_Screen1_Label8, 1);
    lv_obj_set_height(ui_Screen1_Label8, 1);
	lv_obj_align(ui_Screen1_Label8, ui_Screen1_Panel4, LV_ALIGN_CENTER, 48, -5);
    lv_label_set_text(ui_Screen1_Label8, "1");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Panel4, LV_WIN_PART_BG, LV_STATE_DEFAULT, &ui_font_NumberSevenSegment40);
#endif

    ui_Screen1_Image9 = lv_img_create(ui_Screen1_Panel4, NULL);
#if img_en
    lv_img_set_src(ui_Screen1_Image9, &ui_img_fan_png);
#endif
    lv_obj_set_width(ui_Screen1_Image9, 24);
    lv_obj_set_height(ui_Screen1_Image9, 24);
	lv_obj_align(ui_Screen1_Image9, ui_Screen1_Panel4, LV_ALIGN_CENTER, -16, 2);/// 24//



	ui_Screen1_Panel5 = lv_obj_create(tv,NULL);
	lv_obj_set_width(ui_Screen1_Panel5, 120);
	lv_obj_set_height(ui_Screen1_Panel5, 50);
	lv_obj_align(ui_Screen1_Panel5, tv, LV_ALIGN_CENTER, 70, 72);
    lv_obj_set_style_local_radius(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
	lv_obj_set_style_local_border_color(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_border_opa(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_border_width(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,1);
	lv_obj_set_style_local_shadow_color(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xD4D4D4));
	lv_obj_set_style_local_shadow_opa(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_shadow_width(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,10);
	lv_obj_set_style_local_shadow_spread(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,5);
	lv_obj_set_style_local_shadow_ofs_x(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_shadow_ofs_y(ui_Screen1_Panel5, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);



	ui_Screen1_Panel8 = lv_obj_create(ui_Screen1_Panel5,NULL);
    lv_obj_set_width(ui_Screen1_Panel8, 10);
    lv_obj_set_height(ui_Screen1_Panel8, 40);
	lv_obj_align(ui_Screen1_Panel8, ui_Screen1_Panel5, LV_ALIGN_CENTER, -46, 2);
    lv_obj_set_style_local_radius(ui_Screen1_Panel8, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel8, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x54D2C4));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel8, LV_WIN_PART_BG, LV_STATE_DEFAULT, 242);

	ui_Screen1_Label9 = lv_label_create(ui_Screen1_Panel5,NULL);
    lv_obj_set_width(ui_Screen1_Label9, 1);
    lv_obj_set_height(ui_Screen1_Label9, 1);
	lv_obj_align(ui_Screen1_Label9, ui_Screen1_Panel5, LV_ALIGN_CENTER, 32, -3);
    lv_label_set_text(ui_Screen1_Label9, "550");

#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label9, LV_WIN_PART_BG, LV_STATE_DEFAULT, &ui_font_Bold_Font);
#endif

    ui_Screen1_Label7 = lv_label_create(ui_Screen1_Panel5,NULL);
    lv_obj_set_width(ui_Screen1_Label7, 1);
    lv_obj_set_height(ui_Screen1_Label7, 1);
	lv_obj_align(ui_Screen1_Label7, ui_Screen1_Panel5, LV_ALIGN_CENTER, 35, 12);
    lv_label_set_text(ui_Screen1_Label7, "ppm");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label7, LV_WIN_PART_BG, LV_STATE_DEFAULT,&ui_font_SansMedium12);
#endif

    ui_Screen1_Image5 = lv_img_create(ui_Screen1_Panel5, NULL);
#if img_en
    lv_img_set_src(ui_Screen1_Image5, &ui_img_co2_png);
#endif
    lv_obj_set_width(ui_Screen1_Image5, 32);
    lv_obj_set_height(ui_Screen1_Image5, 32);
	lv_obj_align(ui_Screen1_Image5, ui_Screen1_Panel5, LV_ALIGN_CENTER, -15, 0);/// 24//


	ui_Screen1_Panel6 = lv_obj_create(tv,NULL);
	lv_obj_set_width(ui_Screen1_Panel6, 120);
	lv_obj_set_height(ui_Screen1_Panel6, 50);
	lv_obj_align(ui_Screen1_Panel6, tv, LV_ALIGN_CENTER, 70, 9);
    lv_obj_set_style_local_radius(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
	lv_obj_set_style_local_border_color(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xFFFFFF));
	lv_obj_set_style_local_border_opa(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_border_width(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,1);
	lv_obj_set_style_local_shadow_color(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xD4D4D4));
	lv_obj_set_style_local_shadow_opa(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_shadow_width(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,10);
	lv_obj_set_style_local_shadow_spread(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,5);
	lv_obj_set_style_local_shadow_ofs_x(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_shadow_ofs_y(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);

	ui_Screen1_Panel9 = lv_obj_create(ui_Screen1_Panel6,NULL);
    lv_obj_set_width(ui_Screen1_Panel9, 10);
    lv_obj_set_height(ui_Screen1_Panel9, 40);
	lv_obj_align(ui_Screen1_Panel9, ui_Screen1_Panel6, LV_ALIGN_CENTER, -46, 2);
    lv_obj_set_style_local_radius(ui_Screen1_Panel9, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_bg_color(ui_Screen1_Panel9, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x54D2C4));
	lv_obj_set_style_local_bg_opa(ui_Screen1_Panel9, LV_WIN_PART_BG, LV_STATE_DEFAULT, 242);

	ui_Screen1_Label6 = lv_label_create(ui_Screen1_Panel6,NULL);
    lv_obj_set_width(ui_Screen1_Label6, 1);
    lv_obj_set_height(ui_Screen1_Label6, 1);
	lv_obj_align(ui_Screen1_Label6, ui_Screen1_Panel6, LV_ALIGN_CENTER, -16, 0);
    lv_label_set_text(ui_Screen1_Label6, "VOC");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Panel6, LV_WIN_PART_BG, LV_STATE_DEFAULT, &ui_font_Bold_Font);
#endif

    ui_Screen1_Label10 = lv_label_create(ui_Screen1_Panel6,NULL);
    lv_obj_set_width(ui_Screen1_Label10, 1);
    lv_obj_set_height(ui_Screen1_Label10, 1);
	lv_obj_align(ui_Screen1_Label10, ui_Screen1_Panel6, LV_ALIGN_CENTER, 35, 17);
    lv_label_set_text(ui_Screen1_Label10, "Good");
#if font_en
    lv_obj_set_style_local_text_font(ui_Screen1_Label10, LV_WIN_PART_BG, LV_STATE_DEFAULT,&ui_font_SansMedium12);
#endif

    ui_Screen1_Image8 = lv_img_create(ui_Screen1_Panel6, NULL);
#if img_en
    lv_img_set_src(ui_Screen1_Image8, &ui_img_like_png);
#endif
    lv_obj_set_width(ui_Screen1_Image8, 32);
    lv_obj_set_height(ui_Screen1_Image8, 32);
	lv_obj_align(ui_Screen1_Image8, ui_Screen1_Panel6, LV_ALIGN_CENTER, 34, -6);/// 24//

//
//	ui_Screen1_Image7 = lv_img_create(tv, NULL);
//#if img_en
//    lv_img_set_src(ui_Screen1_Image7, &ui_img_next_png);
//#endif
//    lv_obj_set_width(ui_Screen1_Image7, 24);
//    lv_obj_set_height(ui_Screen1_Image7, 24);
//	lv_obj_align(ui_Screen1_Image7, ui_Screen1, LV_ALIGN_CENTER, 139, -100);
//	lv_obj_set_style_local_bg_color(ui_Screen1_Image7, LV_WIN_PART_BG, LV_STATE_DEFAULT,lv_color_hex(0xE8E8E8));
//	lv_obj_set_style_local_border_width(ui_Screen1_Image7, LV_WIN_PART_BG, LV_STATE_DEFAULT,0);// 24//

	ui_Screen1_Image4 = lv_img_create(tv, NULL);
#if img_en
    lv_img_set_src(ui_Screen1_Image4, &ui_img_wifi_png);
#endif
    lv_obj_set_width(ui_Screen1_Image4, 24);
    lv_obj_set_height(ui_Screen1_Image4,24);
	lv_obj_align(ui_Screen1_Image4, ui_Screen1, LV_ALIGN_CENTER, -139, -100);/// 24//

	lv_disp_load_scr(tv);
#if false
		lv_style_set_bg_color(&ARC1_style, LV_STATE_DEFAULT, lv_color_hex(0x1E1E1E));
		lv_style_set_bg_opa(&ARC1_style,LV_STATE_DEFAULT , 255);
		lv_obj_add_style(tv, LV_WIN_PART_BG, &ARC1_style);


	    lv_obj_set_style_local_bg_opa(tv, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_t * ui_Screen1_ARC_Mid= lv_arc_create(tv, NULL);
		lv_obj_set_width(ui_Screen1_ARC_Mid, 135);
		lv_obj_set_height(ui_Screen1_ARC_Mid, 135);
		lv_obj_set_x(ui_Screen1_ARC_Mid, 0);
		lv_obj_set_y(ui_Screen1_ARC_Mid, 0);
		lv_obj_align(ui_Screen1_ARC_Mid, tv, LV_ALIGN_CENTER, 0, 0);
		lv_arc_set_value(ui_Screen1_ARC_Mid, 75);
		lv_obj_set_style_local_radius(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 150);
		lv_obj_set_style_local_border_width(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 0);
		lv_obj_set_style_local_bg_color(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT,  lv_color_hex(0x1E2336));
		lv_obj_set_style_local_bg_opa(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_pad_left(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 2);
		lv_obj_set_style_local_pad_right(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 2);
		lv_obj_set_style_local_pad_top(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 2);
		lv_obj_set_style_local_pad_bottom(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 2);
		lv_obj_set_style_local_line_color(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x0F1215));
		lv_obj_set_style_local_line_opa(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_line_width(ui_Screen1_ARC_Mid, LV_ARC_PART_BG, LV_STATE_DEFAULT, 7);

		lv_obj_set_style_local_border_color(ui_Screen1_ARC_Mid, LV_ARC_PART_INDIC, LV_STATE_DEFAULT,  lv_color_hex(0xF3082B));
		lv_obj_set_style_local_border_opa(ui_Screen1_ARC_Mid, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_border_width(ui_Screen1_ARC_Mid, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, 10);
		lv_obj_set_style_local_border_side(ui_Screen1_ARC_Mid, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, LV_BORDER_SIDE_FULL);
		lv_obj_set_style_local_line_color(ui_Screen1_ARC_Mid, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, lv_color_hex(0x32C8B4));
		lv_obj_set_style_local_line_opa(ui_Screen1_ARC_Mid, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_line_width(ui_Screen1_ARC_Mid, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, 7);


		lv_obj_set_style_local_bg_color(ui_Screen1_ARC_Mid, LV_ARC_PART_KNOB, LV_STATE_DEFAULT,  lv_color_hex(0x60BE86));
		lv_obj_set_style_local_bg_opa(ui_Screen1_ARC_Mid, LV_ARC_PART_KNOB, LV_STATE_DEFAULT, LV_OPA_0);


		lv_obj_t * ui_Screen1_ARC_panel1_Mid= lv_obj_create(ui_Screen1_ARC_Mid, NULL);
		lv_obj_set_width(ui_Screen1_ARC_panel1_Mid, 110);
		lv_obj_set_height(ui_Screen1_ARC_panel1_Mid, 110);
		lv_obj_align(ui_Screen1_ARC_panel1_Mid, ui_Screen1_ARC_Mid, LV_ALIGN_CENTER, 0, 0);
		lv_obj_set_style_local_radius(ui_Screen1_ARC_panel1_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 100);
		lv_obj_set_style_local_bg_color(ui_Screen1_ARC_panel1_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT,  lv_color_hex(0x1E2337));
		lv_obj_set_style_local_bg_opa(ui_Screen1_ARC_panel1_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_bg_grad_color(ui_Screen1_ARC_panel1_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xC8C8C8));
		lv_obj_set_style_local_bg_grad_dir(ui_Screen1_ARC_panel1_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
		lv_obj_set_style_local_border_width(ui_Screen1_ARC_panel1_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);

		lv_obj_t * ui_Screen1_ARC_panel2_Mid= lv_obj_create(ui_Screen1_ARC_Mid, NULL);
		lv_obj_set_width(ui_Screen1_ARC_panel2_Mid, 105);
		lv_obj_set_height(ui_Screen1_ARC_panel2_Mid, 105);
		lv_obj_align(ui_Screen1_ARC_panel2_Mid, ui_Screen1_ARC_Mid, LV_ALIGN_CENTER, 0, 0);
		lv_obj_set_style_local_radius(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 150);
		lv_obj_set_style_local_bg_color(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT,  lv_color_hex(0x1E231E));
		lv_obj_set_style_local_bg_opa(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_bg_grad_color(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xC8C864));
		lv_obj_set_style_local_bg_main_stop(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);
		lv_obj_set_style_local_bg_grad_stop(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_bg_grad_dir(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
		lv_obj_set_style_local_border_width(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);
		lv_obj_set_style_local_shadow_color(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x10111C));
		lv_obj_set_style_local_shadow_opa(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_shadow_width(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);
		lv_obj_set_style_local_shadow_spread(ui_Screen1_ARC_panel2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, 10);


		lv_obj_t * ui_Screen1_ARC_label1_Mid= lv_label_create(ui_Screen1_ARC_Mid, NULL);
		lv_obj_set_width(ui_Screen1_ARC_label1_Mid,5);
		lv_obj_set_height(ui_Screen1_ARC_label1_Mid, 5);
		lv_obj_align(ui_Screen1_ARC_label1_Mid, ui_Screen1_ARC_Mid, LV_ALIGN_CENTER, 0, -18);
		lv_label_set_text(ui_Screen1_ARC_label1_Mid,"AQI");
		lv_obj_set_style_local_text_color(ui_Screen1_ARC_label1_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xEEF4F1));
		lv_obj_set_style_local_text_opa(ui_Screen1_ARC_label1_Mid, LV_STATE_DEFAULT, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_text_font(ui_Screen1_ARC_label1_Mid, LV_STATE_DEFAULT, LV_STATE_DEFAULT, &lv_font_montserrat_14);


		lv_obj_t * ui_Screen1_ARC_label2_Mid= lv_label_create(ui_Screen1_ARC_Mid, NULL);
		lv_obj_set_width(ui_Screen1_ARC_label2_Mid,5);
		lv_obj_set_height(ui_Screen1_ARC_label2_Mid, 5);
		lv_obj_align(ui_Screen1_ARC_label2_Mid, ui_Screen1_ARC_Mid, LV_ALIGN_CENTER, 0, 15);
		lv_label_set_text(ui_Screen1_ARC_label2_Mid,"75");
		lv_obj_set_style_local_text_color(ui_Screen1_ARC_label2_Mid, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xEEF4F1));
		lv_obj_set_style_local_text_opa(ui_Screen1_ARC_label2_Mid, LV_STATE_DEFAULT, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_text_font(ui_Screen1_ARC_label2_Mid, LV_STATE_DEFAULT, LV_STATE_DEFAULT, &lv_font_montserrat_20);


		lv_obj_t * ui_Screen1_Panel_L= lv_obj_create(tv, NULL);
		lv_obj_set_width(ui_Screen1_Panel_L, 75);
		lv_obj_set_height(ui_Screen1_Panel_L, 75);
		lv_obj_align(ui_Screen1_Panel_L, tv, LV_ALIGN_CENTER, -110, 0);
		lv_obj_set_style_local_radius(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT, 150);
		lv_obj_set_style_local_bg_color(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT,  lv_color_hex(0x1E1E1E));
		lv_obj_set_style_local_bg_opa(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_bg_grad_color(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xC8C864));
		lv_obj_set_style_local_bg_main_stop(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);
		lv_obj_set_style_local_bg_grad_stop(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_bg_grad_dir(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
		lv_obj_set_style_local_border_width(ui_Screen1_Panel_L, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);

		lv_obj_t * ui_Screen1_Panel_L_inside= lv_obj_create(ui_Screen1_Panel_L, NULL);
		lv_obj_set_width(ui_Screen1_Panel_L_inside, 40);
		lv_obj_set_height(ui_Screen1_Panel_L_inside, 15);
		lv_obj_align(ui_Screen1_Panel_L_inside, ui_Screen1_Panel_L, LV_ALIGN_CENTER, 0, -20);
		lv_obj_set_style_local_bg_color(ui_Screen1_Panel_L_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT,  lv_color_hex(0x32C8B4));
		lv_obj_set_style_local_bg_opa(ui_Screen1_Panel_L_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_bg_grad_color(ui_Screen1_Panel_L_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xC8C864));
		lv_obj_set_style_local_bg_main_stop(ui_Screen1_Panel_L_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);
		lv_obj_set_style_local_bg_grad_stop(ui_Screen1_Panel_L_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_bg_grad_dir(ui_Screen1_Panel_L_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
		lv_obj_set_style_local_border_width(ui_Screen1_Panel_L_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);

		lv_obj_t * ui_Screen1_Panel_L_label_up= lv_label_create(ui_Screen1_Panel_L_inside, NULL);
		lv_obj_set_width(ui_Screen1_Panel_L_label_up,5);
		lv_obj_set_height(ui_Screen1_Panel_L_label_up, 5);
		lv_obj_align(ui_Screen1_Panel_L_label_up, ui_Screen1_Panel_L_inside, LV_ALIGN_CENTER, 0, 0);
		lv_label_set_text(ui_Screen1_Panel_L_label_up,"CO2");
		lv_obj_set_style_local_text_color(ui_Screen1_Panel_L_label_up, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xEEF4F1));
		lv_obj_set_style_local_text_opa(ui_Screen1_Panel_L_label_up, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_text_font(ui_Screen1_Panel_L_label_up, LV_WIN_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_14);


		lv_obj_t * ui_Screen1_Panel_L_label_down= lv_label_create(ui_Screen1_Panel_L, NULL);
		lv_obj_set_width(ui_Screen1_Panel_L_label_down,5);
		lv_obj_set_height(ui_Screen1_Panel_L_label_down, 5);
		lv_obj_align(ui_Screen1_Panel_L_label_down, ui_Screen1_Panel_L, LV_ALIGN_CENTER, 0, 20);
		lv_label_set_text(ui_Screen1_Panel_L_label_down,"550");
		lv_obj_set_style_local_text_color(ui_Screen1_Panel_L_label_down, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xEEF4F1));
		lv_obj_set_style_local_text_opa(ui_Screen1_Panel_L_label_down, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_text_font(ui_Screen1_Panel_L_label_down, LV_WIN_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_20);



		lv_obj_t * ui_Screen1_Panel_R= lv_obj_create(tv, NULL);
		lv_obj_set_width(ui_Screen1_Panel_R, 75);
		lv_obj_set_height(ui_Screen1_Panel_R, 75);
		lv_obj_align(ui_Screen1_Panel_R, tv, LV_ALIGN_CENTER, +110, 0);
		lv_obj_set_style_local_radius(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT, 150);
		lv_obj_set_style_local_bg_color(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT,  lv_color_hex(0x1E1E1E));
		lv_obj_set_style_local_bg_opa(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_bg_grad_color(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xC8C864));
		lv_obj_set_style_local_bg_main_stop(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);
		lv_obj_set_style_local_bg_grad_stop(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_bg_grad_dir(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
		lv_obj_set_style_local_border_width(ui_Screen1_Panel_R, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);

		lv_obj_t * ui_Screen1_Panel_R_inside= lv_obj_create(ui_Screen1_Panel_R, NULL);
		lv_obj_set_width(ui_Screen1_Panel_R_inside, 40);
		lv_obj_set_height(ui_Screen1_Panel_R_inside, 15);
		lv_obj_align(ui_Screen1_Panel_R_inside, ui_Screen1_Panel_R, LV_ALIGN_CENTER, 0, -20);
		lv_obj_set_style_local_bg_color(ui_Screen1_Panel_R_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT,  lv_color_hex(0x32C8B4));
		lv_obj_set_style_local_bg_opa(ui_Screen1_Panel_R_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_obj_set_style_local_bg_grad_color(ui_Screen1_Panel_R_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xC8C864));
		lv_obj_set_style_local_bg_main_stop(ui_Screen1_Panel_R_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);
		lv_obj_set_style_local_bg_grad_stop(ui_Screen1_Panel_R_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_bg_grad_dir(ui_Screen1_Panel_R_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
		lv_obj_set_style_local_border_width(ui_Screen1_Panel_R_inside, LV_WIN_PART_BG, LV_STATE_DEFAULT, 0);

		lv_obj_t * ui_Screen1_Panel_R_label_up= lv_label_create(ui_Screen1_Panel_R_inside, NULL);
		lv_obj_set_width(ui_Screen1_Panel_R_label_up,5);
		lv_obj_set_height(ui_Screen1_Panel_R_label_up, 5);
		lv_obj_align(ui_Screen1_Panel_R_label_up, ui_Screen1_Panel_R_inside, LV_ALIGN_CENTER, 0, 0);
		lv_label_set_text(ui_Screen1_Panel_R_label_up,"VOC");
		lv_obj_set_style_local_text_color(ui_Screen1_Panel_R_label_up, LV_WIN_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xEEF4F1));
		lv_obj_set_style_local_text_opa(ui_Screen1_Panel_R_label_up, LV_WIN_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_text_font(ui_Screen1_Panel_R_label_up, LV_WIN_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_14);


		lv_obj_t * ui_Screen1_Panel_R_bar= lv_bar_create(ui_Screen1_Panel_R, NULL);
		lv_bar_set_value(ui_Screen1_Panel_R_bar, 25, LV_ANIM_OFF);
		lv_obj_set_width(ui_Screen1_Panel_R_bar,40);
		lv_obj_set_height(ui_Screen1_Panel_R_bar, 10);
		lv_obj_align(ui_Screen1_Panel_R_bar, ui_Screen1_Panel_R, LV_ALIGN_CENTER, 0, 20);
		lv_obj_set_style_local_bg_color(ui_Screen1_Panel_R_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0x212121));
		lv_obj_set_style_local_bg_opa(ui_Screen1_Panel_R_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_border_color(ui_Screen1_Panel_R_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
		lv_obj_set_style_local_border_opa(ui_Screen1_Panel_R_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, 255);
		lv_obj_set_style_local_border_width(ui_Screen1_Panel_R_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, 2);
		lv_obj_set_style_local_bg_blend_mode(ui_Screen1_Panel_R_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, LV_BLEND_MODE_NORMAL);

	    lv_obj_set_style_local_bg_color(ui_Screen1_Panel_R_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, lv_color_hex(0x32FA7D));
	    lv_obj_set_style_local_bg_opa(ui_Screen1_Panel_R_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, 255);
	    lv_obj_set_style_local_border_color(ui_Screen1_Panel_R_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
	    lv_obj_set_style_local_border_opa(ui_Screen1_Panel_R_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, 255);
	    lv_obj_set_style_local_border_width(ui_Screen1_Panel_R_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, 2);



		    lv_img_set_angle(ui_Screen1_Image1, 900);

		tv = lv_tabview_create(lv_scr_act(), NULL);
	#if LV_USE_THEME_MATERIAL
		if(LV_THEME_DEFAULT_INIT == lv_theme_material_init) {
			lv_disp_size_t disp_size = lv_disp_get_size_category(NULL);
			if(disp_size >= LV_DISP_SIZE_MEDIUM) {
				lv_style_set_local_pad_left(tv, LV_TABVIEW_PART_TAB_BG, LV_STATE_DEFAULT, LV_HOR_RES / 2);
				lv_obj_t * sw = lv_switch_create(lv_scr_act(), NULL);
				if(lv_theme_get_flags() & LV_THEME_MATERIAL_FLAG_DARK)
					lv_switch_on(sw, LV_ANIM_OFF);
				lv_obj_set_event_cb(sw, color_chg_event_cb);
				lv_obj_set_pos(sw, LV_DPX(10), LV_DPX(10));
				lv_obj_set_style_local_value_str(sw, LV_SWITCH_PART_BG, LV_STATE_DEFAULT, "Dark");
				lv_obj_set_style_local_value_align(sw, LV_SWITCH_PART_BG, LV_STATE_DEFAULT, LV_ALIGN_OUT_RIGHT_MID);
				lv_obj_set_style_local_value_ofs_x(sw, LV_SWITCH_PART_BG, LV_STATE_DEFAULT, LV_DPI/35);
			}
		}
	#endif

		t1 = lv_tabview_add_tab(tv, "Controls");
		t2 = lv_tabview_add_tab(tv, "Visuals");
		t3 = lv_tabview_add_tab(tv, "Selectors");


		lv_style_init(&style_box);
		lv_style_set_value_align(&style_box, LV_STATE_DEFAULT, LV_ALIGN_OUT_TOP_LEFT);
		lv_style_set_value_ofs_y(&style_box, LV_STATE_DEFAULT, - LV_DPX(10));
		lv_style_set_margin_top(&style_box, LV_STATE_DEFAULT, LV_DPX(30));

		controls_create(t1);
		visuals_create(t2);
		selectors_create(t3);

	#if LV_DEMO_WIDGETS_SLIDESHOW
		lv_task_create(tab_changer_task_cb, 8000, LV_TASK_PRIO_LOW, NULL);
	#endif
#endif
}

/**********************
 *   STATIC FUNCTIONS
 **********************/



#endif
