---
title: Display Fundamentals
---

## Initializing and configuring the display

This is done first of all by defining an instance of TFT_eSPI:

```cpp
TFT_eSPI tft = TFT_eSPI();
```

Then you have to setup the device:

```cpp
void setup(void) {
    tft.begin();
    tft.setRotation(1); // Depending of the use-case.
```
**functions used**:

* [`TFT_eSPI::begin()`](tft_espi/methods/begin.md);
* [`TFT_eSPI::setRotation()`](tft_espi/methods/setrotation.md).

Now you are ready to use your screen.

## Basic drawing functions

```cpp
void loop() {
  tft.setTextSize(1);           // No size multiplier
  tft.fillScreen(TFT_BLACK);    // Fill the screen with black colour
  tft.setTextColor(TFT_GREEN, TFT_BLACK);   // Set text color to green and padding to black

  tft.drawString(" !\"#$%&'()*+,-./0123456", 0, 0, 2);  // Takes 4 variables (String, X position, Y position, Font number)
  tft.drawString("789:;<=>?@ABCDEFGHIJKL", 0, 16, 2);   // X,Y coordinates lined up against top left corner (see graphics.md for more info)
  tft.drawString("MNOPQRSTUVWXYZ[\\]^_`", 0, 32);    // If no font # specified, uses last set font
  tft.drawString("abcdefghijklmnopqrstuvw", 0, 48);
  
  delay(1000);
}
```
**functions used**:

* [`TFT_eSPI::setTextSize()`](tft_espi/methods/settextsize.md);
* [`TFT_eSPI::fillScreen()`](tft_espi/methods/fillscreen.md);
* [`TFT_eSPI::setTextColor()`](tft_espi/methods/settextcolor.md);
* [`TFT_eSPI::drawString()`](tft_espi/methods/drawstring.md).

Some of these have been inherited from `Print`, you can also use all versions of `print()` function:

```cpp
void loop() {
  const auto some_value = 12.3;
  tft.setTextSize(1);           // No size multiplier
  tft.fillScreen(TFT_BLACK);    // Fill the screen with black colour
  tft.setTextColor(TFT_GREEN, TFT_BLACK);   // Set text color to green and padding to black
  tft.setCursor(0,15); // Sets coordinates where print and println will display text
  tft.print("Some text = ");
  tft.println(some_value);
  delay(2000);
}
```

**functions used**: 

* [`TFT_eSPI::setTextSize()`](tft_espi/methods/settextsize.md);
* [`TFT_eSPI::fillScreen()`](tft_espi/methods/fillscreen.md);
* [`TFT_eSPI::setTextColor()`](tft_espi/methods/settextcolor.md);
* [`TFT_eSPI::setCursor()`](tft_espi/methods/setcursor.md).
