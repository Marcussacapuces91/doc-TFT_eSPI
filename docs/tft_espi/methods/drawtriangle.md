---
title: TFT_eSPI::drawTriangle 
---

## Description

Draw a triangle outline using 3 arbitrary points.

## Signature

```cpp
void TFT_eSPI::drawTriangle(int32_t x0, int32_t y0, 
                            int32_t x1, int32_t y1, 
                            int32_t x2, int32_t y2, 
                            uint32_t color)
```

## Parameters

* `ìnt32_t` x0: first point x coord.
* `ìnt32_t` y0: first point y coord.
* `ìnt32_t` x1: second point x coord.
* `ìnt32_t` y1: second point y coord.
* `ìnt32_t` x2: third point x coord.
* `ìnt32_t` y2: third point y coord.
* `uìnt32_t` [color](../colors.md): outline color.

## Result

None

## Example

Here is an example of using the `drawTriangle` method with TFT_eSPI:
```c++
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK); // clear the screen
}

void loop() {
  // Draw a triangle with a yellow border
  tft.drawTriangle(50, 50, 100, 150, 150, 50, TFT_YELLOW);
  delay(1000);
}
```
In this example, we use `drawTriangle` to draw a triangle with the following parameters:

* `x1`: 50 (the x-coordinate of the first vertex)
* `y1`: 50 (the y-coordinate of the first vertex)
* `x2`: 100 (the x-coordinate of the second vertex)
* `y2`: 150 (the y-coordinate of the second vertex)
* `x3`: 150 (the x-coordinate of the third vertex)
* `y3`: 50 (the y-coordinate of the third vertex)
* `color`: TFT_YELLOW (the color of the border)

This will draw a triangle with a yellow border, with vertices at (50, 50), (100, 150), and (150, 50).

!!! Note 
    The `drawTriangle` method only draws the outline of the triangle, and does not fill it with a color. If you
    want to fill the triangle with a color, you can use the [`fillTriangle`](filltriangle.md) method instead.
