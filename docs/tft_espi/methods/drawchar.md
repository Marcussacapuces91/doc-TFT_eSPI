---
title: TFT_eSPI::drawChar 
---

## Description

Draw a single character in the GLCD or GFXFF font or a Unicode glyph onto the screen.

## Signature

* `void TFT_eSPI::drawChar(int32_t x, int32_t y, uint16_t c, uint32_t color, uint32_t bg, uint8_t size)`
* `int16_t TFT_eSPI::drawChar(uint16_t uniCode, int32_t x, int32_t y)`
* `int16_t TFT_eSPI::drawChar(uint16_t uniCode, int32_t x, int32_t y, uint8_t font)`

## Parameters

* `ìnt32_t` x: x coord.
* `ìnt32_t` y: y coord.
* `uìnt16_t` c: Character.
* `uìnt32_t` [color](../colors.md): Text color.
* `uìnt32_t` [bg](../colors.md): Backgroung color.
* `uìnt8_t` size: Character size.
* `uìnt16_t` uniCode: Unicode glyph.
* `uìnt8_t` font: Text font number.

## Result

* None,
* `int16_t`: width of character in pixels.

## Example

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
}

void loop() {
  tft.drawChar('H', 10, 10, 2); // Draw the character 'H' at position (10, 10) with font size 2
  delay(1000);
}
```

In this example, we first initialize the TFT display using `tft.init()`. We then set the background color to black and 
the text color to white using `tft.fillScreen(TFT_BLACK)` and `tft.setTextColor(TFT_WHITE)`, respectively. We also set 
the text size to 2 using `tft.setTextSize(2)`.

Finally, in the `loop()` function, we use `tft.drawChar('H', 10, 10, 2)` to draw the character 'H' at position (10, 10)
on the screen with font size 2. The `drawChar()` function takes four arguments: the character to be drawn, the 
x-coordinate, the y-coordinate, and the font size.

!!!Note
    The `drawChar()` function is used to draw a single character on the screen, whereas the `println()` function is used
    to print a string of characters.
