#include "display.h"

uint32_t drawBuf[DRAW_BUF_SIZE];

std::unordered_map<std::string, lv_obj_t*> textLabels;

static uint32_t tickCb(void) {
  return millis();
}

// Initialize the display with LVGL
void initDisplay() {
  printInfoLog("Setting up LVGL...");
  lv_init();
  lv_tick_set_cb(tickCb);
  lv_display_rotation_t rotation = readRotation();
  String rotationString = "LVGL Display Rotation: ";
  rotationString.concat(rotation);
  printInfoLog(rotationString);
  lv_display_t* display = lv_tft_espi_create(WIDTH, HEIGHT, drawBuf, sizeof(drawBuf));
  lv_display_set_rotation(display, rotation);
  printInfoLog("LVGL Setup Done");
}

// // Set the background color of the screen with RGB value
void setBackground(lv_obj_t* page, uint32_t rgbColor) {
  lv_obj_set_style_bg_color(page, lv_color_hex(rgbColor), 0);
}

// Update the display
void updateDisplay() {
  lv_task_handler();
  delay(5);
}

// Create a filled rectange at the specified location with width, height and color
void fillRect(lv_obj_t* screen, uint32_t color, int32_t x, int32_t y, int32_t w, int32_t h, lv_align_t align) {
  lv_obj_t* rect = lv_obj_create(screen); // Create rect
  lv_obj_set_size(rect, w, h); // Set size
  lv_obj_align(rect, align, x, y); // Set position
  lv_obj_set_style_bg_color(rect, lv_color_hex(color), 0); // Set color
  lv_obj_set_style_border_color(rect, lv_color_hex(color), 0); // Remove border
  lv_obj_set_style_radius(rect, 0, 0); // Removed rounded corner
  lv_obj_set_scrollbar_mode(rect, LV_SCROLLBAR_MODE_OFF); // Remove scroll bar
}

// Create a new text label with a id (optional if want to modify later) and text
lv_obj_t* createTextLabel(lv_obj_t* screen, String text, font_size fontSize, uint32_t color, int32_t x, int32_t y, lv_align_t align, String id) {
  lv_obj_t* label = lv_label_create(screen); // Create new label
  // Add to map if id is provided
  if (id.length() > 0) {
    textLabels.insert({std::string(id.c_str()), label});
  }
  lv_label_set_text(label, text.c_str()); // Set Text
  lv_obj_align(label, align, x, y); // Set Position
  lv_obj_set_style_text_color(label, lv_color_hex(color), 0); // Set Text Color
  // Set Font Size
  const lv_font_t* font;
  switch (fontSize) {
    case SMALL:
      font = &london_tube_10;
      break;
    case LARGE:
      font = &london_tube_16;
      break;
    case ICON:
      font = &lv_font_montserrat_24;
      break;
    default:
      font = &london_tube_12;
      break;
  }
  lv_obj_set_style_text_font(label, font, 0); // Set Font Size
  return label;
}

// Create a rolling text label
// animSpeed: px/s
lv_obj_t* createRollingTextLabel(lv_obj_t* screen, String text, font_size fontSize, uint32_t color, int32_t x, int32_t y, lv_align_t align, uint32_t animSpeed, String id) {
  lv_obj_t* label = createTextLabel(screen, text, fontSize, color, x, y, align, id);
  lv_obj_set_width(label, 320 - x * 2);
  lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR);
  const lv_font_t* font;
  switch (fontSize) {
    case SMALL:
      font = &london_tube_10;
      break;
    case LARGE:
      font = &london_tube_16;
      break;
    default:
      font = &london_tube_12;
      break;
  }
  int32_t width = lv_text_get_width(text.c_str(), text.length(), font, 0);
  lv_obj_set_style_anim_duration(label, width / animSpeed * 1000, 0);
  return label;
}

// Update text with id
void updateLabelText(String id, String text, uint32_t color) {
  lv_obj_t* label = textLabels.at(std::string(id.c_str()));
  lv_label_set_text(label, text.c_str());
  if (color != 0) {
    lv_obj_set_style_text_color(label, lv_color_hex(color), 0);
  }
}