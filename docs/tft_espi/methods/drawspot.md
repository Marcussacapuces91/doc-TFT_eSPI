---
title: TFT_eSPI::drawSpot
---

## Description

Draw an anti-aliased filled circle at ax,ay with radius r. Coordinates are floating point to achieve sub-pixel
positioning.

If `bg_color` is not included the background pixel colour will be read from TFT or sprite.

!!! warning

    Maths intensive, so for small filled circles only.

Uses [drawWideLine](drawwideline.md).

## Signature

`void TFT::eSPI::drawSpot(float ax, float ay, float r, uint32_t fg_color, uint32_t bg_color = 0x00FFFFFF)`

## Parameters

- `float` ax: X coord center.
- `float` ay: Y coord center.
- `float` r: radius.
- `uint32_t` [fg_color](../colors.md): foreground color.
- `uint32_t` [bg_color](../colors.md): default to `0x00FFFFFF`.

## Result

None.

## Example

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
}

void loop() {
  const int x = random(tft.width()); // Generate a random x-coordinate for the center of the circle
  const int y = random(tft.height()); // Generate a random y-coordinate for the center of the circle
  tft.drawSpot(x, y, 10, TFT_RED); // Draw a red spot at (50, 50) with radius 10
  delay(1000);
}
```

This code initializes the TFT display, clears the screen with black color, and then draws a red spot at random
coordinates with a radius of 10 pixels. The `delay(1000)` function is used to pause the program for 1 second between
each spot drawing.
