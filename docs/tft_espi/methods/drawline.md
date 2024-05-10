---
title: TFT_eSPI::drawLine 
---

## Description

Draw a line between 2 arbitrary points using Bresenham's algorithm.

## Signature

`void TFT_eSPI::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color)`

## Parameters

* `ìnt32_t` x0: x coord from.
* `ìnt32_t` y0: y coord from.
* `ìnt32_t` x1: x coord to.
* `ìnt32_t` y1: y coord to.
* `uìnt32_t` [color](../colors.md): line color.

## Result

None.

## Example

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK);
}

void loop() {
  // Draw a line from (10, 20) to (80, 150) with green color
  tft.drawLine(10, 20, 80, 150, TFT_GREEN);
  delay(1000);
}
```

This code initializes the TFT display, sets the rotation to 0, fills the screen with black color, and then draws a green
line from (10, 20) to (80, 150) using the `drawLine` function.

The `drawLine` function takes five parameters:

* `x0`: The x-coordinate of the starting point of the line.
* `y0`: The y-coordinate of the starting point of the line.
* `x1`: The x-coordinate of the ending point of the line.
* `y1`: The y-coordinate of the ending point of the line.
* `color`: The color of the line.

In this example, the line is drawn from (10, 20) to (80, 150) with a green color (`TFT_GREEN`).
