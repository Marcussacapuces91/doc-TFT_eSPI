---
title: TFT_eSPI::height & TFT_eSPI::width
---

## Description

Return the pixel height or width of display (per current rotation).

## Signature

* `int16_t TFT_eSPI::height(void)`
* `int16_t TFT_eSPI::width(void)`

## Parameters

None.

## Result

`ìnt16_t`: Height or width in pixels.

## Example

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); // Create an instance of the TFT_eSPI class

void setup() {
  tft.begin(); // Initialize the TFT display
  tft.setRotation(1); // Set the rotation of the display (0, 1, 2, or 3)

  int xpos = tft.width() / 2; // Get the width of the display and calculate the center x-coordinate
  int ypos = tft.height() / 2; // Get the height of the display and calculate the center y-coordinate

  // Use the xpos and ypos variables to position text or images on the display
  tft.setCursor(xpos, ypos);
  tft.print("Hello, World!");
}

void loop() {
  // Your loop code here
}
```

In this example, `TFT_eSPI::width` and `TFT_eSPI::height` are used to get the width and height of the TFT display, 
respectively. These values are then used to calculate the center coordinates of the display, which can be used to 
position text or images.
