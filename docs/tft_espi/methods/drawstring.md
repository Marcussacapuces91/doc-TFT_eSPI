---
title: TFT_eSPI::drawString
---

## Description

Draw string using specified font number or current font.

Use with [`setTextDatum()`](settextdatum.md) to position string on TFT, and [`setTextPadding()`](settextpadding.md) to
blank old displayed strings.

## Signature

* `int16_t TFT_eSPI::drawString(const char *string, int32_t x, int32_t y, uint8_t font)`
* `int16_t TFT_eSPI::drawString(const char *string, int32_t x, int32_t y)`
* `int16_t TFT_eSPI::drawString(const String& string, int32_t x, int32_t y, uint8_t font)`
* `int16_t TFT_eSPI::drawString(const String& string, int32_t x, int32_t y)`

## Parameters

* `const char*` string: String to be drawn.
* `const char*` string: char[] to be drawn.
* `int32_t` x: x coord.
* `int32_t` y: y coord.
* `uint8_t` font: Font number.

## Result

* `uint16_t`: x coord, after the last character drawn.

## Example

``` cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(250000);
  tft.begin();
  tft.setRotation(1); // Set the rotation of the display
}

void loop() {
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
  tft.setTextColor(TFT_WHITE, TFT_BLACK); // Set the text color to white with black background
  tft.loadFont(AA_FONT_SMALL); // Load a small anti-aliased font

  // Draw a string at position (100, 100) on the screen
  tft.drawString("Hello, World!", 100, 100);

  delay(1000); // Wait for 1 second
}
```

In this example, we first initialize the TFT display and set its rotation. Then, in the `loop()` function, we clear the 
screen with black color, set the text color to white with black background, and load a small anti-aliased font. Finally, 
we use `drawString()` to draw the string "Hello, World!" at position (100, 100) on the screen.

Note that the `drawString()` function takes three arguments: the string to be drawn, and the x and y coordinates of the 
top-left corner of the string. You can adjust these coordinates to position the string anywhere on the screen.

Also, you can use [`setTextDatum()`](settextdatum.md) function to set the datum (reference point) for the text, which 
can be useful for aligning text to the left, right, or center of the screen. For example:

``` cpp
tft.setTextDatum(MR_DATUM); // Set the datum to the middle right of the text
tft.drawString("Hello, World!", 100, 100);
```

This would draw the string with its middle right corner at position (100, 100) on the screen.
