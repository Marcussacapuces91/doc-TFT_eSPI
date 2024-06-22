---
title: TFT_eSPI::drawRect TFT_eSPI::drawRoundRect
---

## Description

Draw a rectangle outline or a rounded corner rectangle outline.

## Signature

* `void TFT_eSPI::drawRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)`
* `void TFT_eSPI::drawRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, uint32_t color)`

## Parameters

* `ìnt32_t` x0: x coord from.
* `ìnt32_t` y0: y coord from.
* `ìnt32_t` x1: x coord to.
* `ìnt32_t` y1: y coord to.
* `int32_t` r: rounded radius.
* `uìnt32_t` [color](../colors.md): line color.

## Result

None.

## Example

**Example 1: `drawRect`**

```c++
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK); // clear the screen
}

void loop() {
  // Draw a rectangle with a red border and a yellow fill
  tft.drawRect(10, 10, 50, 30, TFT_RED, TFT_YELLOW);
  delay(1000);
}
```

In this example, we use `drawRect` to draw a rectangle with the following parameters:

* `x`: 10 (the x-coordinate of the top-left corner of the rectangle)
* `y`: 10 (the y-coordinate of the top-left corner of the rectangle)
* `width`: 50 (the width of the rectangle)
* `height`: 30 (the height of the rectangle)
* `color`: TFT_RED (the color of the border)
* `fillColor`: TFT_YELLOW (the color of the fill)

**Example 2: `drawRoundRect`**

```c++
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK); // clear the screen
}

void loop() {
  // Draw a rounded rectangle with a blue border and a green fill
  tft.drawRoundRect(20, 20, 60, 40, 10, TFT_BLUE, TFT_GREEN);
  delay(1000);
}
```

In this example, we use `drawRoundRect` to draw a rounded rectangle with the following parameters:

* `x`: 20 (the x-coordinate of the top-left corner of the rectangle)
* `y`: 20 (the y-coordinate of the top-left corner of the rectangle)
* `width`: 60 (the width of the rectangle)
* `height`: 40 (the height of the rectangle)
* `radius`: 10 (the radius of the rounded corners)
* `color`: TFT_BLUE (the color of the border)
* `fillColor`: TFT_GREEN (the color of the fill)

!!!Note

    The `radius` parameter in `drawRoundRect` specifies the radius of the rounded corners. A larger radius will result
    in more rounded corners, while a smaller radius will result in sharper corners.
