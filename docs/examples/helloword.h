#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
tft.init();
tft.fillScreen(TFT_BLACK);
tft.setCursor(0, 4, 4);
tft.setTextColor(TFT_WHITE);
tft.println("Hello World");
