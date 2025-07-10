#pragma once

#include "internet.h"
#include "datetime.h"
#include <vector>
#include <unordered_map>
#include <string>

extern std::unordered_map<std::string, uint32_t> TflLineColors;
extern std::unordered_map<std::string, String> TflLineNames;
extern String arrivalDepartureLines[8];

struct TflStationSchedule {
  String stationName;
  String expected;
};

struct TflDeparture {
  bool isDeparture;
  String vehicleId;
  String destination;
  std::vector<TflStationSchedule> stations;
  String expected;
  String scheduled;
  int timeToStation;
  String platform;
  String status;
  String stationName;
};

struct TflDeparturesResponse {
  bool success;
  std::vector<TflDeparture> departures;
};

void setStationLineId(String, String);
TflDeparturesResponse getDepartures();