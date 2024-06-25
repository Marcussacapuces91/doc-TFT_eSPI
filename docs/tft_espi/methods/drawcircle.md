---
title: TFT_eSPI::drawCircle & TFT_eSPI::drawSmoothCircle
---

## Description

Draw a circle outline using the optimized midpoint circle algorithm or draw a smooth circle.

!!! note "Note for drawing a smooth circle"

    The thickness of line is 3 pixels to reduce the visible "braiding" effect of anti-aliasing narrow lines
    this means the inner anti-alias zone is always at r-1 and the outer zone at r+1.

## Signature

* `void TFT_eSPI::drawCircle(int32_t x, int32_t y, int32_t r, uint32_t color)`
* `void TFT_eSPI::drawSmoothCircle(int32_t x, int32_t y, int32_t r, uint32_t fg_color, uint32_t bg_color)`

## Parameters

* `ìnt32_t` x: center x coord.
* `ìnt32_t` y: center y coord.
* `ìnt32_t` r: circle radius.
* `uìnt32_t` [color](../colors.md): outline color.
* `uìnt32_t` [fg_color](../colors.md): foreground color.
* `uìnt32_t` [bg_color](../colors.md): background color.

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
  tft.drawSmoothCircle(100, 100, 50, TFT_RED, TFT_BLACK);
  delay(1000);
}
```

In this example, we use `drawCircle` to draw a circle with the following parameters:

* `x`: 120 (the x-coordinate of the center of the circle)
* `y`: 120 (the y-coordinate of the center of the circle)
* `radius`: 50 (the radius of the circle)
* `color`: TFT_WHITE (the color of the border)

Then, we use `drawSmoothCircle` to draw an anti-aliased circle with the following parameters:

* `x`: 100 (the x-coordinate of the center of the circle)
* `y`: 100 (the y-coordinate of the center of the circle)
* `radius`: 50 (the radius of the circle)
* `fg_color`: TFT_RED (the color of the border)
* `bg_color`: TFT_BLACK (the color of the background)

If you want to fill the circle with a color, you can use the [`fillCircle`](fillcircle.md) or
[`fillSmoothCircle`](fillcircle.md) methods instead.
