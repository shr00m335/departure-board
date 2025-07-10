#include <Arduino.h>
#include <WiFi.h>
#include <vector>
#include "flash.h"
#include <esp_system.h>
#include "globals.h"
#include "layout.h"

enum OpCode {
  DeviceStatus,
  Restart,
  ScanWiFi,
  SetWiFi,
  GetConnectedSSID,
  GetSavedSSID,
  GetSavedPassword,
  GetIP,
  SetStation,
  SetLine,
  GetStationId,
  GetStationName,
  GetLine,
  ConfigMode,
  SetRotation,
  GetRotation,
  Echo,
  ResetConfig
};

void usbSerialRead();