#include "usbSerial.h"

void sendResponse(std::vector<uint8_t> res) {
  for (int i = 0; i < res.size(); i++) {
    Serial.write(res[i]);
  }
}

String readString(int size) {
  String output;
  for (int i = 0; i < size; i++) {
    char c = Serial.read();
    output.concat(c);
  }
  return output;
}

void getDeviceStatus() {
  uint8_t status = EEPROM.read(0);
  std::vector<uint8_t> response;
  response.push_back(0);
  response.push_back(~status & 0x0F);
  sendResponse(response);
}

void scanWiFi() {
  int wifiCount = WiFi.scanNetworks();
  std::vector<uint8_t> response;
  response.push_back(0x00);
  response.push_back(wifiCount);
  for (int i = 0; i < wifiCount; i++) {
    String ssid = WiFi.SSID(i);
    response.push_back(ssid.length());
    for (int j = 0; j < ssid.length(); j++) {
      response.push_back(ssid[j]);
    }
  }
  sendResponse(response);
} 

void setWiFi() {
  uint8_t ssidLength = Serial.read();
  String ssid = readString(ssidLength);
  uint8_t passwordLength = Serial.read();
  String password = readString(passwordLength);
  bool status = writeWifi(ssid, password);
  Serial.write(!status);
}

void getConnectedSSID() {
  std::vector<uint8_t> output;
  output.push_back(0x00);
  uint8_t wifiStatus = WiFi.status();
  output.push_back(wifiStatus == WL_NO_SHIELD ? 0xFE : wifiStatus); // 0xFF will send two bytes, can't find a fix
  if (wifiStatus == WL_CONNECTED) {
    String ssid = WiFi.SSID();
    output.push_back(ssid.length());
    for (int i = 0; i < ssid.length(); i++) {
      output.push_back(ssid[i]);
    }
  } else {
    output.push_back(0);
  }
  sendResponse(output);
}

void getSavedSSID() {
  String ssid = readWifiSSID();
  std::vector<uint8_t> result;
  result.push_back(0);
  result.push_back(ssid.length());
  for (int i = 0; i < ssid.length(); i++) {
    result.push_back(ssid[i]);
  }
  sendResponse(result);
}

void getSavedPassword() {
  String pwd = readWifiPassword();
  std::vector<uint8_t> result;
  result.push_back(0);
  result.push_back(pwd.length());
  for (int i = 0; i < pwd.length(); i++) {
    result.push_back(pwd[i]);
  }
  sendResponse(result);
}

void getIPAddress() {
  std::vector<uint8_t> output;
  output.push_back(0x00);
  uint8_t wifiStatus = WiFi.status();
  output.push_back(wifiStatus == WL_NO_SHIELD ? 0xFE : wifiStatus); // 0xFF will send two bytes, can't find a fix
  if (wifiStatus == WL_CONNECTED) {
    IPAddress ip = WiFi.localIP();
    for (int i = 0; i < 4; i++) {
      output.push_back(ip[i]);
    }
  } else {
    for (int i = 0; i < 4; i++) {
      output.push_back(0);
    }
  }
  sendResponse(output);
}

void setStationId() {
  uint8_t stationIdLength = Serial.read();
  String stationId = readString(stationIdLength);
  uint8_t stationNameLength = Serial.read();
  String stationName = readString(stationNameLength);
  bool status = writeStation(stationId, stationName);
  Serial.write(!status);
}

void getStationId() {
  std::vector<uint8_t> output;
  output.push_back(0);
  String stationId = readStationId();
  output.push_back(stationId.length());
  for (int i = 0; i < stationId.length(); i++) {
    output.push_back(stationId[i]);
  }
  sendResponse(output);
}

void getStationName() {
  std::vector<uint8_t> output;
  output.push_back(0);
  String stationName = readStationName();
  output.push_back(stationName.length());
  for (int i = 0; i < stationName.length(); i++) {
    output.push_back(stationName[i]);
  }
  sendResponse(output);
}

void setLineId() {
  uint8_t lineIdLength = Serial.read();
  String lineId = readString(lineIdLength);
  bool status = writeLineId(lineId);
  Serial.write(!status);
}

void getLineId() {
  std::vector<uint8_t> output;
  output.push_back(0);
  String lineId = readLineId();
  output.push_back(lineId.length());
  for (int i = 0; i < lineId.length(); i++) {
    output.push_back(lineId[i]);
  }
  sendResponse(output);
}

void enterConfigMode() {
  isConfigMode = true;
  switchToConfigPage();
  Serial.write(0x00);
}

void setRotation() {
  uint8_t rotation = Serial.read();
  bool status = writeRotation(rotation == 0 ? LV_DISP_ROTATION_90 : LV_DISP_ROTATION_270);
  Serial.write(!status);
}

void getRotation() {
  std::vector<uint8_t> output;
  output.push_back(0);
  output.push_back(readRotation() == LV_DISPLAY_ROTATION_90 ? 0 : 1);
  sendResponse(output);
}

void echo() {
  std::vector<uint8_t> output;
  output.push_back(0x00);
  uint8_t length = Serial.read();
  output.push_back(length);
  for (int i = 0; i < length; i++) {
    output.push_back(Serial.read());
  }
  sendResponse(output);
}

void resetConfig() {
  bool status = writeResetConfig();
  Serial.write(!status);
}

void usbSerialRead() {
  if (Serial.available()) {
    uint8_t code = Serial.read();
    if (!isConfigMode && code == ConfigMode) {
      enterConfigMode();
    }
    else {
      switch (code) {
        case Echo:
          echo();
          break;
        case GetConnectedSSID:
          getConnectedSSID();
          break;
        case GetSavedSSID:
          getSavedSSID();
          break;
        case GetSavedPassword:
          getSavedPassword();
          break;
        case GetIP:
          getIPAddress();
          break;
        case GetStationId:
          getStationId();
          break;
        case GetStationName:
          getStationName();
          break;
        case GetLine:
          getLineId();
        case GetRotation:
          getRotation();
          break;
        default:
          if (isConfigMode) {
            switch (code) {
              case DeviceStatus:
                getDeviceStatus();
                break;
              case Restart:
                ESP.restart();
                break;
              case ScanWiFi:
                scanWiFi();
                break;
              case SetWiFi:
                setWiFi();
                break;
              
              case SetStation:
                setStationId();
                break;
              case SetLine:
                setLineId();
                break;
              case ResetConfig:
                resetConfig();
                break;
              case SetRotation:
                setRotation();
                break;
              default:
                break;
          }
          break;
      }
    } 
    }
  }
}