#include <Arduino.h>
#include <lvgl.h>
#include <unordered_map>
#include "fonts/london_tube_10.c"
#include "fonts/london_tube_12.c"
#include "fonts/london_tube_16.c"
#include "flash.h"
#include "logging.h"

#define WIDTH 240
#define HEIGHT 320

#define DRAW_BUF_LINES 10
#define DRAW_BUF_SIZE (WIDTH * DRAW_BUF_LINES)

enum font_size {
  SMALL,
  MEDIUM,
  LARGE,
  ICON
};

void initDisplay();
void setBackground(lv_obj_t*, uint32_t);
void fillRect(lv_obj_t*, uint32_t, int32_t, int32_t, int32_t, int32_t, lv_align_t = LV_ALIGN_TOP_LEFT);
lv_obj_t* createTextLabel(lv_obj_t*, String, font_size, uint32_t, int32_t, int32_t, lv_align_t, String = "");
lv_obj_t* createRollingTextLabel(lv_obj_t*, String, font_size, uint32_t, int32_t, int32_t, lv_align_t, uint32_t = 10, String id = "");
void updateLabelText(String, String, uint32_t = 0);
void updateDisplay();