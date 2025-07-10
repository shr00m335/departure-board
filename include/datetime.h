#include <Arduino.h>
#include <time.h>

bool syncTime();
String getCurrentTime();
unsigned long isoToTimestamp(String);
String isoToHHmm(String);