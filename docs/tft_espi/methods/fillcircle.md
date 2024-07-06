---
title: TFT_eSPI::fillCircle & TFT_eSPI::fillSmoothCircle
---

## Description

Draw a filled circle or an anti-aliased filled circle.

## Signature

* `void TFT_eSPI::fillCircle(int32_t x, int32_t y, int32_t r, uint32_t color)`
* `void TFT_eSPI::fillCircle(int32_t x, int32_t y, int32_t r, uint32_t color, uint32_t bg_color = 0x00FFFFFF)`
* `void TFT_eSPI::fillSmoothCircle(int32_t x, int32_t y, int32_t r, uint32_t color, uint32_t bg_color)`

## Parameters

* `ìnt32_t` x: center x coord.
* `ìnt32_t` y: center y coord.
* `ìnt32_t` r: circle radius.
* `uìnt32_t` [color](../colors.md): filling color.
* `uìnt32_t` [bg_color](../colors.md): background color; If bg_color is not included the background pixel colour will be read
    from TFT or sprite.

## Result

None

## Example

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK); // clear the screen
}

void loop() {
  // Draw a filled circle with a white color. 
  tft.fillCircle(120, 120, 50, TFT_WHITE);
  delay(1000);
}
```

In this example, we use `fillCircle` to draw a filled circle with the following parameters:

* `x`: 120 (the x-coordinate of the center of the circle)
* `y`: 120 (the y-coordinate of the center of the circle)
* `radius`: 50 (the radius of the disc)
* `color`: TFT_WHITE (the disc color)

This will draw a circle with a border color, centered at (120, 120) with a radius of 50 pixels.

If you want to draw the circle with a border color, you can use the [`drawCircle`](drawcircle.md) or the
[`drawSmoothCircle`](drawcircle.md) methods instead.
