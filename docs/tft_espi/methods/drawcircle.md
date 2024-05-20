---
title: TFT_eSPI::drawCircle 
---

## Description

Draw a circle outline using the optimized midpoint circle algorithm.

## Signature

`void TFT_eSPI::drawCircle(int32_t x0, int32_t y0, int32_t r, uint32_t color)`

## Parameters

* `ìnt32_t` x0: center x coord.
* `ìnt32_t` y0: center y coord.
* `ìnt32_t` r: circle radius.
* `uìnt32_t` [color](../colors.md): outline color.

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
  // Draw a circle with a white border
  tft.drawCircle(120, 120, 50, TFT_WHITE);
  delay(1000);
}
```

In this example, we use `drawCircle` to draw a circle with the following parameters:

* `x`: 120 (the x-coordinate of the center of the circle)
* `y`: 120 (the y-coordinate of the center of the circle)
* `radius`: 50 (the radius of the circle)
* `color`: TFT_WHITE (the color of the border)

This will draw a circle with a white border, centered at (120, 120) with a radius of 50 pixels.

If you want to fill the circle with a color, you can use the [`fillCircle`](fillcircle.md) method instead.
