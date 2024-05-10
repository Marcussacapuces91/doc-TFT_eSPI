---
title: TFT_eSPI::drawFastLine
---

## Description

Draw horizontal and vertical lines.

## Signature

* `void TFT_eSPI::drawFastHLine(int32_t x, int32_t y, int32_t w, uint32_t color)`
* `void TFT_eSPI::drawFastVLine(int32_t x, int32_t y, int32_t h, uint32_t color)`

## Parameters

* `int32_t` x: x coord. from
* `int32_t` y: y coord. from
* `int32_t` w: Width.
* `int32_t` h: Height.
* `int32_t` [color](../colors.md): Color line.

## Result

None.

## Example

**Example 1: `drawFastHLine`**
```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
}

void loop() {
  tft.drawFastHLine(10, 20, 100, TFT_RED); // Draw a horizontal red line from (10, 20) to (110, 20)
  delay(1000);
}
```
In this example, we create a `TFT_eSPI` object `tft` and initialize it in the `setup()` function. We then clear the
screen with a black color using `fillScreen()`. In the `loop()` function, we use `drawFastHLine()` to draw a horizontal 
red line from (10, 20) to (110, 20).

**Example 2: `drawFastVLine`**
```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
}

void loop() {
  tft.drawFastVLine(50, 10, 100, TFT_GREEN); // Draw a vertical green line from (50, 10) to (50, 110)
  delay(1000);
}
```
In this example, we create a `TFT_eSPI` object `tft` and initialize it in the `setup()` function. We then clear the
screen with a black color using `fillScreen()`. In the `loop()` function, we use `drawFastVLine()` to draw a vertical
green line from (50, 10) to (50, 110).

!!!Note
    The `drawFastHLine` and `drawFastVLine` functions are optimized for performance and are faster than the regular
    `drawLine` function. They are suitable for drawing horizontal and vertical lines, respectively.
