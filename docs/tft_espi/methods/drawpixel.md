---
title: TFT_eSPI::drawPixel
---

## Description

Push a single pixel at an arbitrary position or draw a pixel blended with the screen or bg pixel colour.

## Signature

* `void TFT_eSPI::drawPixel(int32_t x, int32_t y, uint32_t color)`
* `uint16_t TFT_eSPI::drawPixel(int32_t x, int32_t y, uint32_t color, uint8_t alpha, uint32_t bg_color)`

## Parameters

* `int32_t` x: x coord.
* `int32_t` y: y coord.
* `uint32_t` [color](../colors.md): Pixel color.
* `uint8_t` alpha: Alpha blended value in [0..255].
* `uint32_t` [bg_color](../colors.md): Background color.

## Result

* None, or
* `uint16_t`: The pixel color after alpha blending.

## Example

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.begin();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK); // Fill the screen with black color
}

void loop() {
  // Draw a red pixel at position (10, 10)
  tft.drawPixel(10, 10, TFT_RED);
  delay(1000); // Wait for 1 second
}
```

In this example, we first include the `TFT_eSPI` library and create an instance of the `TFT_eSPI` class. In the `setup`
function, we initialize the TFT display and set its rotation to 0. We then fill the screen with black color using the
[`fillScreen`](fillscreen.md) function.

In the `loop` function, we use the `drawPixel` function to draw a red pixel at position (10, 10) on the screen. The
`drawPixel` function takes three arguments: the x-coordinate, the y-coordinate, and the color of the pixel. In this
case, we use [`TFT_RED`](../colors.md) as the color, which is a predefined color constant in the `TFT_eSPI` library.

!!!Note
    The `drawPixel` function can be used to draw pixels of different colors by passing different color values as
    the third argument. For example, you can use [`TFT_GREEN`](../colors.md) or [`TFT_BLUE`](../colors.md) to draw green
    or blue pixels, respectively.
