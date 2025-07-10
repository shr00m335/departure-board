#include <Arduino.h>
#include <EEPROM.h>
#include <lvgl.h>

#define EEPROM_SIZE 284

void initFlash();
bool writeWifi(String, String);
String readWifiSSID();
String readWifiPassword();
bool writeStation(String, String);
String readStationId();
String readStationName();
bool writeLineId(String);
String readLineId();
bool writeRotation(lv_display_rotation_t);
lv_display_rotation_t readRotation();
bool writeResetConfig();