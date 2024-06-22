---
title: TFT_eSPI::drawNumber
---

## Description

Draw a long integer using specified font number or current font.

Use with [`setTextDatum()`](settextdatum.md) to position values on TFT, and [`setTextPadding()`](settextpadding.md) to
blank old displayed values.

## Signature

* `int16_t TFT_eSPI::drawNumber(long intNumber, int32_t x, int32_t y, uint8_t font)`
* `int16_t TFT_eSPI::drawNumber(long intNumber, int32_t x, int32_t y)`

## Parameters

* `long` intNumber: Integer to be drawn.
* `int32_t` x: x coord.
* `int32_t` y: y coord.
* `uint8_t` font: Font number.

## Result

`uint16_t`: the width of a string in pixels.

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

  // Draw an integer at position (100, 100) on the screen
  tft.drawNumber(123456789l, 100, 100);

  delay(1000); // Wait for 1 second
}
```

In this example, we first initialize the TFT display and set its rotation. Then, in the `loop()` function, we clear the 
screen with black color, set the text color to white with black background, and load a small anti-aliased font. Finally, 
we use `drawNumber()` to draw the integer "123456789" at position (100, 100) on the screen.

Note that the `drawNumber()` function takes three arguments: the integer to be drawn, and the x and y coordinates of the 
top-left corner of the integer. You can adjust these coordinates to position the string anywhere on the screen.

Also, you can use [`setTextDatum()`](settextdatum.md) function to set the datum (reference point) for the text, which 
can be useful for aligning text to the left, right, or center of the screen. For example:

``` cpp
tft.setTextDatum(MR_DATUM); // Set the datum to the middle right of the text
tft.drawNumber(123456789l, 100, 100);
```

This would draw the integer with its middle right corner at position (100, 100) on the screen.
