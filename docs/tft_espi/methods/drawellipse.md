---
title: TFT_eSPI::drawEllipse 
---

## Description

Draw a ellipse outline.

## Signature

`void TFT_eSPI::drawEllipse(int16_t x0, int16_t y0, int32_t rx, int32_t ry, uint16_t color)`

## Parameters

* `ìnt16_t` x0: center x coord.
* `ìnt16_t` y0: center y coord.
* `ìnt32_t` rx: ellipse x radius.
* `ìnt32_t` ry: ellipse x radius.
* `uìnt16_t` [color](../colors.md): outline color.

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
  tft.drawEllipse(120, 120, 50, 20, TFT_WHITE);
  delay(1000);
}
```

In this example, we use `drawEllipse` to draw an ellipse with the following parameters:

* `x`: 120 (the x-coordinate of the center of the ellipse)
* `y`: 120 (the y-coordinate of the center of the ellipse)
* `radius x`: 50 (the x radius of the ellipse)
* `radius y`: 20 (the y radius of the ellipse)
* `color`: TFT_WHITE (the color of the border)

This will draw an ellipse with a white border, centered at (120, 120) with a `x` radius of 50 pixels and a `y` radius of
20 pixels.

If you want to fill the ellipse with a color, you can use the [`fillEllipse`](fillellipse.md) method instead.
