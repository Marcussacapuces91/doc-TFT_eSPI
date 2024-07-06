---
title: TFT_eSPI::fillRectHGradient & TFT_eSPI::fillRectVGradient
---

## Description

Draw a filled rectangle with a horizontal, vertical colour gradient.

## Signature

* `void TFT_eSPI::fillRectHGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`
* `void TFT_eSPI::fillRectVGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`

## Parameters

* `ìnt16_t` x: x coord from.
* `ìnt16_t` y: y coord from.
* `ìnt32_t` w: rectangle width.
* `ìnt32_t` h: rectangle height.
* `uìnt32_t` [color1](../colors.md): start color.
* `uìnt32_t` [color2](../colors.md): end color.

## Result

None.

## Example

Here is an example of using the `fillRectHGradient` and `fillRectVGradient` functions from the TFT_eSPI library:

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.begin();
  tft.setRotation(1); // Set the screen rotation
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
}

void loop() {
  // Example of fillRectHGradient
  tft.fillRectHGradient(10, 10, 100, 20, TFT_RED, TFT_GREEN);
  
  // Example of fillRectVGradient
  tft.fillRectVGradient(120, 10, 20, 100, TFT_BLUE, TFT_YELLOW);
  
  delay(5000); // Wait for 5 seconds
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
}
```

In this example, the `fillRectHGradient` function is used to draw a horizontal gradient-filled rectangle from red to
green, and the `fillRectVGradient` function is used to draw a vertical gradient-filled rectangle from blue to yellow.
The parameters for these functions are as follows:

- `x` and `y` specify the top-left corner of the rectangle.
- `w` and `h` specify the width and height of the rectangle.
- `color1` and `color2` specify the start and end colors of the gradient.

The `delay(5000)` is used to pause the program for 5 seconds, allowing you to see the gradient-filled rectangles. After
the delay, the screen is cleared with a black color to prepare for the next iteration.
