#include "internet.h"

wl_status_t connectWifi(String ssid, String password, uint32_t timeout) {
  printInfoLog("Connecting WiFi (SSID: " + ssid + ")");
  WiFi.begin(ssid, password);
  for (int i = 0; i < timeout / 100; i++) {
    if (WiFi.status() != WL_DISCONNECTED && WiFi.status() != WL_IDLE_STATUS) {
      printInfoLog("Connect WiFi (SSID: " + ssid + ") Status: " + WiFi.status());
      return WiFi.status();
    }
    delay(100);
  }
  printInfoLog("Connect WiFi (SSID: " + ssid + ") Failed: Timeout");
  return WL_DISCONNECTED;
}

String readHttpResponse(WiFiClient* stream) {
  String response;
  while (stream->connected()) {
    // Read chunk size line
    String chunkSizeLine = stream->readStringUntil('\n');
    chunkSizeLine.trim(); // Remove \r and whitespace
    int chunkSize = (int) strtol(chunkSizeLine.c_str(), NULL, 16);
    if (chunkSize == 0) break; // End of chunks

    // Read the chunk data
    int remaining = chunkSize;
    while (remaining > 0) {
      char buf[128];
      int toRead = remaining > 128 ? 128 : remaining;
      int n = stream->readBytes(buf, toRead);
      if (n <= 0) break;
      response.concat(buf, n);  // Append exactly n bytes
      remaining -= n;
    }
    // Read the trailing \r\n after each chunk
    stream->readStringUntil('\n');
  }
  return response;
}

ApiResult apiGet(String url) {
  printInfoLog("Fetching API (GET) " + url);
  HTTPClient http;
  http.begin(url);
  int httpCode = http.GET();
  if (httpCode == HTTP_CODE_OK) {
    WiFiClient* stream = http.getStreamPtr();
    String response = readHttpResponse(stream);
    http.end();
    JsonDocument doc;
    DeserializationError jsonError = deserializeJson(doc, response);
    if (!jsonError) {
      printInfoLog("Fetching API (GET) Success");
      return ApiResult {
        true,
        doc
      };
    }
    String errorMsg = "JSON Parsing Error: ";
    errorMsg.concat(jsonError.c_str());
    printErrorLog(errorMsg);
  }
  http.end();
  String errorMsg = "Fetch API (GET) Failed: ";
  errorMsg.concat(httpCode);
  printErrorLog(errorMsg);
  JsonDocument emptyDoc;
  return ApiResult {
    false,
    emptyDoc
  };
}