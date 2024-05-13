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

* [TFT_eSPI::begin()](tft_espi/methods/begin.md);
* [TFT_eSPI::setRotation()](tft_espi/methods/setrotation.md).

Now you are ready to use your screen.

## Basic drawing functions

```cpp
void loop() {
  tft.setTextSize(1);           // No size multiplier
  tft.fillScreen(TFT_BLACK);    // Fill the screen with back colour
  tft.setTextColor(TFT_GREEN, TFT_BLACK);   // Set text color to green and padding to back

  tft.drawString(" !\"#$%&'()*+,-./0123456", 0, 0, 2);  // draw top left
  tft.drawString("789:;<=>?@ABCDEFGHIJKL", 0, 16, 2);
  tft.drawString("MNOPQRSTUVWXYZ[\\]^_`", 0, 32, 2);
  tft.drawString("abcdefghijklmnopqrstuvw", 0, 48, 2);
  
  delay(1000);
}
```
**functions used**:

* [TFT_eSPI::setTextSize()](tft_espi/methods/settextsize.md);
* [TFT_eSPI::fillScreen()](tft_espi/methods/fillscreen.md);
* [TFT_eSPI::setTextColor()](tft_espi/methods/settextcolor.md);
* [TFT_eSPI::drawString()](tft_espi/methods/drawstring.md).

Has been herited from `Print`, you can also use all versions of `print()` function:

```cpp
void loop() {
  const auto some_value = 12.3;
  tft.setTextSize(1);           // No size multiplier
  tft.fillScreen(TFT_BLACK);    // Fill the screen with back colour
  tft.setTextColor(TFT_GREEN, TFT_BLACK);   // Set text color to green and padding to back
  tft.setCursor(0,15);
  tft.print("Some text = ");
  tft.println(some_value);
  delay(2000);
}
```

**functions used**:

* [TFT_eSPI::setTextSize()](tft_espi/methods/settextsize.md);
* [TFT_eSPI::fillScreen()](tft_espi/methods/fillscreen.md);
* [TFT_eSPI::setTextColor()](tft_espi/methods/settextcolor.md);
* [TFT_eSPI::setCursor()](tft_espi/methods/setcursor.md).
