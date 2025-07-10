#include "display.h"
#include "datetime.h"
#include "tflApi.h"
#include "globals.h"

void createMainPage();
void switchToLoadingPage();
void switchToMainPage(String, String, TflDeparturesResponse);
void showWarningMessage(String);
void showSuccessMessage(String);
void switchToConfigPage();