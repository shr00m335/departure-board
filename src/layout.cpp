#include "layout.h"

lv_obj_t* loadingPage;
lv_obj_t* mainPage;
lv_obj_t* configPage = NULL;
lv_obj_t* spinner;
lv_obj_t* noServiceText;
lv_obj_t* lastUpdateText;

void createLoadingPage() {
  loadingPage = lv_obj_create(NULL);
  setBackground(loadingPage, 0x000000);
  // Title
  createTextLabel(loadingPage, "Departure Board", LARGE, 0x00FF00, 0, 60, LV_ALIGN_TOP_MID);
  // Setup text
  createTextLabel(loadingPage, "Setting up...", MEDIUM, 0xFFFFFF, 0, -10, LV_ALIGN_CENTER, "setup_text");
  createTextLabel(loadingPage, "Status", MEDIUM, 0xFFFFFF, 0, 10, LV_ALIGN_CENTER, "status");
  // Spinner
  spinner = lv_arc_create(loadingPage);
  lv_obj_align(spinner, LV_ALIGN_CENTER, 0, 60);
  lv_obj_set_size(spinner, 32, 32);
  lv_obj_set_style_arc_width(spinner, 4, 0);
  lv_obj_set_style_arc_width(spinner, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_arc_color(spinner, lv_color_hex(0x000000), 0);
  lv_obj_set_style_arc_color(spinner, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_arc_set_bg_angles(spinner, 0, 360); // Full circle background
  lv_arc_set_angles(spinner, 0, 60);    // Constant spinner size (60 degrees)
  lv_obj_remove_style(spinner, NULL, LV_PART_KNOB); // Hide knob
  lv_obj_clear_flag(spinner, LV_OBJ_FLAG_CLICKABLE); // Not clickable

  // Animate the spinner's start/end angle to rotate it
  lv_anim_t a;
  lv_anim_init(&a);
  lv_anim_set_var(&a, spinner);
  lv_anim_set_values(&a, 0, 360);
  lv_anim_set_time(&a, 1000); // 1 second per rotation
  lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
  lv_anim_set_exec_cb(&a, [](void* obj, int32_t v) {
      lv_arc_set_angles((lv_obj_t*)obj, v, v + 60); // 60-degree spinner, rotates
  });
  lv_anim_start(&a);
}

void createDeparture(String id, lv_obj_t* screen, int32_t y, lv_align_t align, bool rollingText = false) {
  // Time label
  createTextLabel(screen, "", MEDIUM, 0xFFFFFF, 8, y, align, id + "_time"); // Time
  createTextLabel(screen, "", MEDIUM, 0xFFFFFF, 58, y, align, id + "_destination"); // Destination
  createTextLabel(screen, "", MEDIUM, 0xFFFFFF, 218, y, align, id + "_platform"); // Platform
  lv_obj_t* statusLabel = createTextLabel(screen, "", MEDIUM, 0xFFFFFF, 256, y, align, id + "_status"); // Status
  lv_obj_set_width(statusLabel, 60);
  lv_obj_set_style_text_align(statusLabel, LV_TEXT_ALIGN_CENTER, 0);
  if (rollingText) {
    createRollingTextLabel(screen, "lv_obj_t* createRollingTextLabel(lv_obj_t* screen, String text, font_size fontSize, uint32_t color, int32_t x, int32_t y, lv_align_t align, uint32_t animSpeed, String id)", SMALL, 0xFFFFFF, 8, y + 14, LV_ALIGN_TOP_LEFT, 20, id + "_rollingText");
  }
}

void updateDeparture(String id, TflDeparture departure) {
  updateLabelText(id + "_time", isoToHHmm(departure.scheduled));
  updateLabelText(id + "_destination", departure.destination);
  updateLabelText(id + "_platform", departure.platform);
  String statusText;
  if (departure.status.compareTo("OnTime") == 0) {
    statusText = "On Time";
  } else if (departure.status.compareTo("Delayed") == 0) {
    statusText = departure.expected.length() > 0 ? "Exp. " + isoToHHmm(departure.expected) : "Delayed";
  } else {
    statusText = departure.status;
  }
  updateLabelText(id + "_status", statusText);
}

void updateArrival(int index, String id, TflDeparture arrival) {
  updateLabelText(id + "_time", String(index));
  updateLabelText(id + "_destination", arrival.destination);
  updateLabelText(id + "_platform", arrival.platform);
  String timeToStationText = "";
  if (arrival.timeToStation / 60 == 0) {
    timeToStationText = "Due";
  } else {
    timeToStationText.concat(arrival.timeToStation / 60);
    timeToStationText.concat(" mins");
  }
  updateLabelText(id + "_status", timeToStationText);
}

void clearDepartures() {
  for (int i = 0; i < 9; i++) {
      String departureId = "departure_";
      departureId.concat(i + 1);
      updateLabelText(departureId + "_time", "");
      updateLabelText(departureId + "_destination", "");
      updateLabelText(departureId + "_platform", "");
      updateLabelText(departureId + "_status", "");
    }
}

void createMainPage(String stationName, String lineId) {
  bool isDeparture = false;
  for (int i = 0; i < 8; i++) {
    if (lineId.compareTo(arrivalDepartureLines[i]) == 0) {
      isDeparture = true;
    }
  }
  mainPage = lv_obj_create(NULL);
  setBackground(mainPage, 0x000000);
  // Header
  fillRect(mainPage, 0x0019A8, 0, 0, 320, 30);
  createTextLabel(mainPage, stationName, LARGE, 0xFFFFFF, 8, 7, LV_ALIGN_TOP_LEFT);
  createTextLabel(mainPage, getCurrentTime(), LARGE, 0xFFFFFF, 258, 7, LV_ALIGN_TOP_LEFT, "clock");
  // Description
  fillRect(mainPage, 0xFFFFFF, 0, 30, 320, 12);
  createTextLabel(mainPage, isDeparture ? "Time" : "No.", SMALL, 0x000000, 10, 31, LV_ALIGN_TOP_LEFT);
  createTextLabel(mainPage, "Destination", SMALL, 0x000000, 58, 31, LV_ALIGN_TOP_LEFT);
  createTextLabel(mainPage, "Platform", SMALL, 0x000000, 200, 31, LV_ALIGN_TOP_LEFT);
  createTextLabel(mainPage, isDeparture ? "Status" : "Est.", SMALL, 0x000000, 270, 31, LV_ALIGN_TOP_LEFT);
  // Departures
  for (int i = 0; i < 9; i++) {
    String departureId = "departure_";
    departureId.concat(i + 1);
    createDeparture(departureId, mainPage, 49 + (19 * i), LV_ALIGN_TOP_LEFT);
  }
  // Footer
  fillRect(mainPage, TflLineColors[lineId.c_str()], 0, 220, 320, 20);
  createTextLabel(mainPage, TflLineNames[lineId.c_str()], MEDIUM, 0xFFFFFF, 0, -2, LV_ALIGN_BOTTOM_MID, "clock");
  lastUpdateText = lv_label_create(mainPage);
  lv_obj_set_style_text_font(lastUpdateText, &lv_font_montserrat_8, 0);
  lv_label_set_text(lastUpdateText, "Last Update: 22:23:22");
  lv_obj_align(lastUpdateText, LV_ALIGN_BOTTOM_RIGHT, -4, 0);
  lv_obj_set_style_text_color(lastUpdateText, lv_color_hex(0xFFFFFF), 0);
  // No service text
  noServiceText = createTextLabel(mainPage, "No service at the moment", MEDIUM, 0xFFFFFF, 0, 0, LV_ALIGN_CENTER);
}

void createConfigPage()  {
  configPage = lv_obj_create(NULL);
  setBackground(configPage, 0x000000);
  lv_obj_t* headerTextLabel = lv_label_create(configPage);
  lv_obj_set_style_text_font(headerTextLabel, &lv_font_montserrat_24, 0);
  lv_obj_set_style_text_color(headerTextLabel, lv_color_hex(0x00FF00), 0);
  lv_obj_align(headerTextLabel, LV_ALIGN_CENTER, 0, 0);
  lv_label_set_text(headerTextLabel, "Configuration Mode");
}



void clockTimer(lv_timer_t* timer) {
  String time = getCurrentTime();
  updateLabelText("clock", time);
}

void showWarningMessage(String message) {
  lv_obj_delete(spinner);
  spinner = NULL;
  updateLabelText("status", message, 0xFF0000);
  createTextLabel(loadingPage, LV_SYMBOL_WARNING, ICON, 0x00FF00, 0, 60, LV_ALIGN_CENTER);
}

void showSuccessMessage(String message) {
  lv_obj_delete(spinner);
  spinner = NULL;
  updateLabelText("status", message, 0x00FF00);
  createTextLabel(loadingPage, LV_SYMBOL_OK, ICON, 0x00FF00, 0, 60, LV_ALIGN_CENTER);
}

void updateDeparturesText(std::vector<TflDeparture> departures) {
  if (departures.size() == 0) {
    lv_obj_remove_flag(noServiceText, LV_OBJ_FLAG_HIDDEN);
    clearDepartures();
  } else {
    lv_obj_add_flag(noServiceText, LV_OBJ_FLAG_HIDDEN);
    for (int i = 0; i < departures.size(); i++) {
      String departureId = "departure_";
      departureId.concat(i + 1);
      if (departures[i].isDeparture) {
        updateDeparture(departureId, departures[i]);
      } else {
        updateArrival(i + 1, departureId, departures[i]);
      }
    }
  }
  lv_label_set_text(lastUpdateText, String("Last Update: " + getCurrentTime()).c_str());
}

void fetchDeparturesTask(void* param) {
  TflDeparturesResponse departures = getDepartures();
  if (departures.success) {
    xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
    updateDeparturesText(departures.departures);
    xSemaphoreGive(lvgl_mutex);
  }
  vTaskDelete(NULL);
}

void updateDepartures(lv_timer_t* timer) {
  printInfoLog("Updating departures info...");
  xTaskCreate(fetchDeparturesTask, "fetchDepartures", 16384, NULL, 1, NULL);
}

void switchToLoadingPage() {
  createLoadingPage();
  lv_scr_load(loadingPage);
}

void switchToMainPage(String stationName, String lineId, TflDeparturesResponse departures) {
  createMainPage(stationName, lineId);
  if (departures.success) {
    updateDeparturesText(departures.departures);
  }
  lv_timer_create(clockTimer, 1000, NULL);
  lv_scr_load(mainPage);
  lv_timer_create(updateDepartures, 50000, NULL);
}

void switchToConfigPage() {
  if (configPage == NULL) {
    createConfigPage();
  }
  lv_scr_load(configPage);
  updateDisplay();
}