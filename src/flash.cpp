#include "flash.h"

void writeString(int startAddress, String str) {
  for (int i = 0; i < str.length(); i++) {
    EEPROM.writeChar(i + startAddress, str[i]);
  }
}

String readString(int startAddress, int length) {
  String output;
  for (int i = startAddress; i < startAddress + length; i++) {
    output.concat((char)EEPROM.read(i));
  }
  return output;
}

void initFlash() {
  EEPROM.begin(EEPROM_SIZE);
  if (EEPROM.read(0) == 0xFF) {
    EEPROM.write(0, 0x00);
  }
  if (EEPROM.read(241) == 0xFF) {
    EEPROM.write(241, LV_DISP_ROTATION_90);
  }
  EEPROM.commit();
}

bool writeWifi(String ssid, String password) {
  // Write WiFi SSID
  EEPROM.write(1, ssid.length());
  writeString(2, ssid);
  // Write WiFi Password
  EEPROM.write(102, password.length());
  writeString(103, password);
  EEPROM.write(0, EEPROM.read(0) | 0x0C);
  return EEPROM.commit();
}

String readWifiSSID() {
  if ((EEPROM.read(0) & 0x08) == 0) {
    return "";
  }
  uint8_t ssidLength = EEPROM.read(1);
  return readString(2, ssidLength);
}

String readWifiPassword() {
  if ((EEPROM.read(0) & 0x04) == 0) {
    return "";
  }
  uint8_t pwdLength = EEPROM.read(102);
  return readString(103, pwdLength);
}

bool writeStation(String stationId, String stationName) {
  EEPROM.write(203, stationId.length());
  writeString(204, stationId);
  EEPROM.write(242, stationName.length());
  writeString(243, stationName);
  EEPROM.write(0, EEPROM.read(0) | 0x02);
  return EEPROM.commit();
}

String readStationId() {
  uint8_t status = EEPROM.read(0);
  if ((status & 0x02) == 0) {
    return "";
  }
  uint8_t stationIdLength = EEPROM.read(203);
  return readString(204, stationIdLength);
}

String readStationName() {
  uint8_t status = EEPROM.read(0);
  if ((status & 0x02) == 0) {
    return "";
  }
  uint8_t stationNameLength = EEPROM.read(242);
  return readString(243, stationNameLength);
}

bool writeLineId(String lineId) {
  EEPROM.write(224, lineId.length());
  writeString(225, lineId);
  EEPROM.write(0, EEPROM.read(0) | 0x01);
  return EEPROM.commit();
}

String readLineId() {
  uint8_t status = EEPROM.read(0);
  if ((status & 0x01) == 0) {
    return "";
  }
  uint8_t stationIdLength = EEPROM.read(224);
  return readString(225, stationIdLength);
}

bool writeRotation(lv_display_rotation_t rotation) {
  EEPROM.write(241, rotation);
  return EEPROM.commit();
}

lv_display_rotation_t readRotation() {
  return (lv_display_rotation_t)EEPROM.read(241);
}

bool writeResetConfig() {
  EEPROM.write(0, 0x00);
  return EEPROM.commit();
}