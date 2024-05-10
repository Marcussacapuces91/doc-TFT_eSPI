---
title: TFT_eSPI::setViewport
---

## Description

Set the clipping region for the TFT screen

## Signature

`void TFT_eSPI::setViewport(int32_t x, int32_t y, int32_t w, int32_t h, bool vpDatum)`

## Parameters

* `ìnt32_t` x: Datum x position in screen coordinates;
* `ìnt32_t` y: Datum y position in screen coordinates;
* `ìnt32_t` w: Viewport width;
* `ìnt32_t` h: Viewport height;
* `bool` vpDatum: Is datum at top left corner of screen (true = top left of viewport).
 
## Result

None.

## Example

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1); // Set the rotation of the display

  // Set the viewport to the top-left quarter of the screen
  tft.setViewPort(0, 0, 160, 120);
}

void loop() {
  // Draw a red rectangle in the viewport
  tft.fillRect(0, 0, TFT_WIDTH, TFT_HEIGHT, TFT_RED);

  delay(1000);
}
```

In this example, the `setViewPort` function is used to set the viewport to the top-left quarter of the screen, which is 
a 160x120 pixel area starting from the top-left corner of the screen. The `fillRect` function is then used to draw a red 
rectangle in this viewport.

Note that the `setViewPort` function takes four arguments: the x and y coordinates of the top-left corner of the
viewport, and the width and height of the viewport. These values are in pixels, and the origin (0, 0) is at the top-left
corner of the screen.

By setting the viewport, you can control the area of the screen where graphics are drawn, which can be useful for
creating complex user interfaces or for optimizing performance by only updating a portion of the screen.

It's also worth noting that the `setViewPort` function can be used in combination with other functions, such as 
`pushImage` and `pushSprite`, to draw images and sprites within the viewport. This can be useful for creating complex 
graphics and animations on the display.
