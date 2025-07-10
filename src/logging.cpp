#include "logging.h"

void printErrorLog(String message) {
  String logMessage = "<#FF0000>";
  logMessage.concat("[" + getCurrentTime() + "] ");
  logMessage.concat(" [ERROR] ");
  logMessage.concat(message);
  Serial.println(logMessage);
}

void printInfoLog(String message) {
  String logMessage = "#000000";
  logMessage.concat("[" + getCurrentTime() + "] ");
  logMessage.concat("[INFO] ");
  logMessage.concat(message);
  Serial.write(0xFF);
  Serial.write(logMessage.length());
  Serial.println(logMessage);
}