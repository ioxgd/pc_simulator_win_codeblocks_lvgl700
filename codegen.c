#include "lvgl.h"

void codeSimulator() {
    lv_obj_t * obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj1, 300, 300);
    lv_obj_align(obj1, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_obj_set_style_local_bg_color(obj1, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_style_local_border_width(obj1, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 0);
}
