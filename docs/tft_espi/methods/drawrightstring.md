---
title: TFT_eSPI::drawRightString
---

## Description

!!! warning "Deprecated"

    Use [`setTextDatum()`](settextdatum.md) instead.

Draw string right justified do dX.

## Signature

* `int16_t TFT_eSPI::drawRightString(const String& string, int32_t dX, int32_t poY, uint8_t font)`
* `int16_t TFT_eSPI::drawRightString(const char *string, int32_t dX, int32_t poY, uint8_t font)`

## Parameters

* `const String&` string: String to be displayed (reference to String instance).
* `const char*` string: String to be displayed as array of char, null terminated.
* `ìnt32_t` dX: end x coord.
* `ìnt32_t` poY: y coord.
* `uìnt32_t` font: Font to be used.

## Result

`int16_t`: displayed string x size.

## Example

``` cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
}

void loop() {
  tft.drawRightString("Hello, World!", 240, 20, 2); // Draw string aligned to the right at x=240, y=20 with font type 2
  delay(1000);
}
```

This example initializes the TFT_eSPI library, sets the screen rotation, fills the screen with black, sets the text
color to white. Then, in the `loop` function, it uses the `drawRightString` method to draw the string "Hello, World!"
aligned to the right at the specified coordinates with a font type of 2.
