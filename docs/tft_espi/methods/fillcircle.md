---
title: TFT_eSPI::fillCircle 
---

## Description

Draw a filled circle.

## Signature

`void TFT_eSPI::fillCircle(int32_t x0, int32_t y0, int32_t r, uint32_t color)`

## Parameters

* `ìnt32_t` x0: center x coord.
* `ìnt32_t` y0: center y coord.
* `ìnt32_t` r: circle radius.
* `uìnt32_t` [color](../colors.md): filling color.

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

If you want to draw the circle with a border color, you can use the [`drawCircle`](drawcircle.md) method instead.
