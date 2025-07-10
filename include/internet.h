#pragma once

#include <Arduino.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <vector>
#include "flash.h"
#include "logging.h"

struct ApiResult {
  bool success;
  JsonDocument data;
};

wl_status_t connectWifi(String, String, uint32_t = 10000);
ApiResult apiGet(String);