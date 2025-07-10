#include "tflApi.h"

String arrivalDepartureLines[8] = {
  "elizabeth",
  "thameslink",
  "liberty",
  "lioness",
  "mildway",
  "suffragette",
  "weaver",
  "windrush"
};

std::unordered_map<std::string, uint32_t> TflLineColors = {
  {"dlr", 0x00AFAD},
  {"elizabeth", 0x60399E},
  {"bakerloo", 0xB26300},
  {"central", 0xDC241F},
  {"circle", 0xFFC80A},
  {"district", 0x007D32},
  {"hammersmith-city", 0xF589A6},
  {"jubilee", 0x838D93},
  {"metropolitan", 0x9B0058},
  {"northern", 0x000000},
  {"piccadilly", 0x0019A8},
  {"victoria", 0x039BE5},
  {"waterloo-city", 0x76D0BD},
  {"liberty", 0x5D6061},
  {"lioness", 0xFFA61A},
  {"mildmay", 0x0077AD},
  {"suffragette", 0x5BBD72},
  {"weaver", 0x823A62},
  {"windrush", 0xED1B00},
  {"thameslink", 0xFF5AA4},
  {"tram", 0x5FB526}
};

std::unordered_map<std::string, String> TflLineNames = {
  {"dlr", "DLR"},
  {"elizabeth", "Elizabeth line"},
  {"bakerloo", "Bakerloo"},
  {"central", "Central"},
  {"circle", "Circle"},
  {"district", "District"},
  {"hammersmith-city", "Hammersmith & City"},
  {"jubilee", "Jubilee"},
  {"metropolitan", "Metropolitan"},
  {"northern", "Northern"},
  {"piccadilly", "Piccadilly"},
  {"victoria", "Victoria"},
  {"waterloo-city", "Waterloo & City"},
  {"liberty", "Liberty"},
  {"lioness", "Lioness"},
  {"mildmay", "Mildmay"},
  {"suffragette", "Sufferagette"},
  {"weaver", "Weaver"},
  {"windrush", "Windrust"},
  {"thameslink", "Thameslink"},
  {"tram", "Tram"}
};

String stationId;
String lineId;

String formatStationName(String name) {
  name.replace("Terminal ", "T");
  name.replace("London", "");
  name.replace("Rail", "");
  name.replace("Station", "");
  name.replace("Underground", "");
  name.replace("DLR", "");
  int parathesisIndex = name.indexOf('(');
  if (parathesisIndex != -1) {
    name = name.substring(0, parathesisIndex);
  }
  name.trim(); // Remove leading/trailing spaces
  return name;
}

bool departureSort(TflDeparture const &a, TflDeparture const &b) {
  return isoToTimestamp(a.scheduled) < isoToTimestamp(b.scheduled);
}

void setStationLineId(String station, String line) {
  stationId = station;
  lineId = line;
}

TflDeparturesResponse getArrivalDepartures() {
  std::vector<TflDeparture> departures;
  ApiResult departureRes = apiGet("https://api.tfl.gov.uk/StopPoint/" + stationId + "/ArrivalDepartures?lineIds=" + lineId);
  if (!departureRes.success) {
    printErrorLog("Departure Update Failed");
    return TflDeparturesResponse {
      false,
      departures
    };
  }
  // Parse Results
  for (int i = 0; i < departureRes.data.size(); i++) {
    if (departureRes.data[i]["destinationId"].as<String>().compareTo(stationId) == 0) continue;
    TflDeparture departure;
    departure.isDeparture = true;
    departure.destination = formatStationName(departureRes.data[i]["destinationName"].as<String>());
    departure.scheduled = departureRes.data[i]["scheduledTimeOfDeparture"].as<String>();
    departure.expected = departureRes.data[i]["estimatedTimeOfDeparture"].isNull() ? "" : departureRes.data[i]["estimatedTimeOfDeparture"].as<String>();
    String platformName = departureRes.data[i]["platformName"].as<String>();
    departure.platform = platformName.compareTo("Platform Unknown") == 0 ? "" : String(platformName.charAt(platformName.length() - 1));
    departure.status = departureRes.data[i]["departureStatus"].as<String>();
    departure.stationName = formatStationName(departureRes.data[i]["stationName"].as<String>());
    departures.push_back(departure);
  }
  // Sort by time
  std::sort(departures.begin(), departures.end(), &departureSort);
  // Return
  std::vector<TflDeparture> result(departures.begin(), departures.begin() + (departures.size() < 9 ? departures.size() : 9));
  printInfoLog("Departure Update Success");
  return TflDeparturesResponse {
      true,
      result
    };
}

bool arrivalSort(TflDeparture const &a, TflDeparture const &b) {
  return a.timeToStation < b.timeToStation;
}

TflDeparturesResponse getArrivals() {
  std::vector<TflDeparture> arrivals;
  ApiResult arrivalRes = apiGet("https://api.tfl.gov.uk/StopPoint/" + stationId + "/Arrivals");
  if (!arrivalRes.success) {
    printErrorLog("Departure update failed");
    return TflDeparturesResponse {
      false,
      arrivals
    };
  }
  for (int i = 0; i < arrivalRes.data.size(); i++) {
    JsonDocument arrivalData = arrivalRes.data[i];
    if (arrivalData["lineId"].as<String>().compareTo(lineId) != 0 || arrivalData["destinationNaptanId"].as<String>().compareTo(stationId) == 0) {
      continue;
    }
    TflDeparture arrival;
    arrival.isDeparture = false;
    arrival.destination = 
      arrivalRes.data[i]["destinationName"].isNull() ? 
      arrivalRes.data[i]["towards"].as<String>() :
      formatStationName(arrivalRes.data[i]["destinationName"].as<String>());
    arrival.timeToStation = arrivalData["timeToStation"].as<int>();
    arrival.stationName = formatStationName(arrivalData["stationName"]);
    String platform = arrivalData["platformName"].as<String>();
    arrival.platform = platform.charAt(platform.length() - 1);
    arrivals.push_back(arrival);
  }
  std::sort(arrivals.begin(), arrivals.end(), &arrivalSort);
  std::vector<TflDeparture> result(arrivals.begin(), arrivals.begin() + (arrivals.size() < 9 ? arrivals.size() : 9));
  printInfoLog("Departure Update Success");
  return TflDeparturesResponse {
    true,
    result
  };
}

TflDeparturesResponse getDepartures() {
  for (int i = 0; i < 8; i++) {
    if (lineId.compareTo(arrivalDepartureLines[i]) == 0) {
      return getArrivalDepartures();
    }
  }
  return getArrivals();
}