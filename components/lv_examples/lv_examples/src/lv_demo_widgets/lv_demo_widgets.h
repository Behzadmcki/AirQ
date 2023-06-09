/**
 * @file lv_demo_widgets.h
 *
 */

#ifndef LV_DEMO_WIDGETS_H
#define LV_DEMO_WIDGETS_H


#ifdef __cplusplus
extern "C" {
#endif
#include "lvgl.h"
#include "UserInterface.h"
/*********************
 *      INCLUDES
 *********************/

/*********************
 *      DEFINES
 *********************/
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Screen1_Image5;
/**********************
 *      TYPEDEFS
 **********************/

LV_IMG_DECLARE(ui_img_temperature_png);    // assets\temperature.png
LV_IMG_DECLARE(ui_img_drop_png);    // assets\drop.png
LV_IMG_DECLARE(ui_img_smile_png);    // assets\smile.png
LV_IMG_DECLARE(ui_img_medicalmask_png);    // assets\medinalmask.png
LV_IMG_DECLARE(ui_img_sad_png);    // assets\sad.png
LV_IMG_DECLARE(ui_img_pokerface_png);    // assets\pokerface.png
LV_IMG_DECLARE(ui_img_fan_png);    // assets\fan.png
LV_IMG_DECLARE(ui_img_like_png);    // assets\like.png
LV_IMG_DECLARE(ui_img_co2_png);    // assets\co2.png
LV_IMG_DECLARE(ui_img_next_png);    // assets\next.png
LV_IMG_DECLARE(ui_img_wifi_png);    // assets\wifi.png
LV_IMG_DECLARE(ui_img_dislike_png);    // assets\dislike.png
LV_IMG_DECLARE(ui_img_marginal2_png); 
LV_IMG_DECLARE(ui_img_high2_png); 

LV_FONT_DECLARE(ui_font_Big_Number);
LV_FONT_DECLARE(ui_font_Bold_Font);
LV_FONT_DECLARE(ui_font_SansBlack);
LV_FONT_DECLARE(ui_font_SansBold);
LV_FONT_DECLARE(ui_font_SansBold30);
LV_FONT_DECLARE(ui_font_SansRegular);
LV_FONT_DECLARE(ui_font_SansMedium10);
LV_FONT_DECLARE(ui_font_SansMedium12);
LV_FONT_DECLARE(ui_font_NumberDigit40);
LV_FONT_DECLARE(ui_font_NumberSevenSegment40);

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_demo_widgets(void);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_WIDGETS_H*/
