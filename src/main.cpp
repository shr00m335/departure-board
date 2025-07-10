#include "datetime.h"
#include "globals.h"
#include "usbSerial.h"

SemaphoreHandle_t lvgl_mutex;
bool isConfigMode = false;

void updateText(String id, String text) {
  xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
  updateLabelText(id, text);
  xSemaphoreGive(lvgl_mutex);
}

bool initWifi() {
  if ((EEPROM.read(0) & 0x0C) != 0x0C) {
    printErrorLog("Failed to connect WiFi: WiFi not configured");
    xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
    showWarningMessage("WiFi Not Configured");
    xSemaphoreGive(lvgl_mutex);
    return false;
  }
  String ssid = readWifiSSID();
  String pwd = readWifiPassword();
  // String ssid = "Wokwi-GUEST";
  // String pwd = "";
  wl_status_t status = connectWifi(ssid, pwd);
  switch (status) {
    case WL_CONNECTED:
      printInfoLog("Connected to WiFi: " + ssid);
      updateText("status", "Successfully connected to WiFi");
      delay(1000);
      return true;
    case WL_NO_SSID_AVAIL:
      printErrorLog("Failed to connect WiFi: WiFi SSID not found");
      xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
      showWarningMessage("WiFi SSID not found");
      xSemaphoreGive(lvgl_mutex);
      return false;
    default:
      xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
      String message = "Failed to connect WiFi (Code: ";
      message.concat(status);
      message.concat(')');
      showWarningMessage(message);
      xSemaphoreGive(lvgl_mutex);
      return false;
  }
}

bool initClock() {
  if (!syncTime()) {
    xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
    printErrorLog("Failed to sync with time server");
    showWarningMessage("Failed to sync with time server");
    xSemaphoreGive(lvgl_mutex);
    return false;
  } 
  updateText("status", "Successfully synced with time server");
  delay(1000);
  return true;
}

bool initStation() {
  updateText("status", "Setting up station...");
    uint8_t status = EEPROM.read(0);
    if ((status & 0x02) == 0) {
      printErrorLog("Failed to set up station: Station not configured");
      xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
      showWarningMessage("Station not configured");
      xSemaphoreGive(lvgl_mutex);
      vTaskDelete(NULL);
      return false;
    } 
    if ((status & 0x01) == 0) {
      printErrorLog("Failed to set up station: Line not configured");
      xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
      showWarningMessage("Line not configured");
      xSemaphoreGive(lvgl_mutex);
      vTaskDelete(NULL);
      return false;
    } 
    String stationId = readStationId();
    String lineId = readLineId();
    // String stationId = "940GZZLUEBY";
    // String lineId = "district";
    setStationLineId(stationId, lineId);
    delay(1000);
    return true;
}

void setupTask(void* pamas) {
  // Setup
  updateText("status", "Connecting to WiFi...");
  if (!initWifi() || !initStation() || !initClock()) {
    updateText("setup_text", "Setup Failed");
    vTaskDelete(NULL);
    return;
  }
  // Fetch initial data
  updateText("status", "Fetching data...");
  String stationId = readStationId();
  String lineId = readLineId();
  String stationName = readStationName();
  // String stationId = "940GZZLUEBY";
  // String lineId = "district";
  // String stationName = "Ealing Boardway";
  TflDeparturesResponse departures = getDepartures();
  // Setup complete message
  updateText("setup_text", "Setup Completed");
  showSuccessMessage("Done");
  delay(1000);
  switchToMainPage(stationName, lineId, departures);
  vTaskDelete(NULL);
}

void setup() {
  Serial.begin(115200);
  initFlash();
  lvgl_mutex = xSemaphoreCreateMutex();
  initDisplay();
  switchToLoadingPage();
  updateDisplay();
  xTaskCreate(setupTask, "setup", 8192, NULL, 1, NULL);
} 

void loop() {
  if (!isConfigMode) {
    xSemaphoreTake(lvgl_mutex, portMAX_DELAY);
    updateDisplay();
    xSemaphoreGive(lvgl_mutex);
  }
  usbSerialRead();
  delay(10);
}