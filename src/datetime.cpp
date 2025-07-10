#include "datetime.h"
#include <time.h>

const int daylightSavingSec = 3600;
const char* ntpServer1 = "pool.ntp.org";
const char* ntpServer2 = "time.google.com";

bool syncTime() {
  configTime(0, daylightSavingSec, ntpServer1, ntpServer2);
  struct tm timeinfo;
  return getLocalTime(&timeinfo);
}

String getCurrentTime() {
  struct tm timeInfo;
  getLocalTime(&timeInfo);
  char currentTime[9];
  strftime(currentTime, 9, "%H:%M:%S", &timeInfo);
  return String(currentTime);
}

unsigned long isoToTimestamp(String isoString) {
  struct tm t;
  t.tm_year = isoString.substring(0, 4).toInt() - 1900;
  t.tm_mon  = isoString.substring(5, 7).toInt() - 1;
  t.tm_mday = isoString.substring(8, 10).toInt();
  t.tm_hour = isoString.substring(11, 13).toInt();
  t.tm_min  = isoString.substring(14, 16).toInt();
  t.tm_sec  = isoString.substring(17, 19).toInt();
  t.tm_isdst = -1; // Not set by default
  time_t ts = mktime(&t);
  return (unsigned long)ts;
}

String isoToHHmm(String isoString) {
    // Parse date and time
    int year = isoString.substring(0, 4).toInt();
    int month = isoString.substring(5, 7).toInt();
    int day = isoString.substring(8, 10).toInt();
    int hour = isoString.substring(11, 13).toInt();
    int minute = isoString.substring(14, 16).toInt();
    int second = isoString.substring(17, 19).toInt();

    // Check for 'Z' (UTC) or offset
    time_t utc;
    // Time is in UTC
    struct tm t = {};
    t.tm_year = year - 1900;
    t.tm_mon = month - 1;
    t.tm_mday = day;
    t.tm_hour = hour;
    t.tm_min = minute;
    t.tm_sec = second;
    t.tm_isdst = -1;
    utc = mktime(&t);

    // Now convert UTC to UK local time (BST/GMT)
    struct tm *londonTime = localtime(&utc);

    // Format as hh:mm
    char buf[6];
    int dstOffset = londonTime->tm_isdst ? 1 : 0;
    snprintf(buf, sizeof(buf), "%02d:%02d", (londonTime->tm_hour + dstOffset) % 24, londonTime->tm_min);
    return String(buf);
}