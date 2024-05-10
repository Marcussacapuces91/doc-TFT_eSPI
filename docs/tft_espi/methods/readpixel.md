---
title: TFT_eSPI::readPixel 
---

## Description

Read 565 pixel colours from a pixel.

## Signature

`uint16_t TFT_eSPI::readPixel(int32_t x0, int32_t y0)`

## Parameters

* `int32_t` x0: x coord.
* `int32_t` y0: y coord.

## Result

`uint16_t`: the [color](../colors.md) in 565 bits.

## Example

```
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1); // Set the rotation of the display
  tft.fillScreen(TFT_BLACK); // Fill the screen with black
  tft.setTextColor(TFT_WHITE); // Set the text color to white
  tft.setTextSize(2); // Set the text size to 2
  tft.setCursor(10, 10); // Set the cursor to (10, 10)
  tft.println("Hello World!"); // Print "Hello World!"
}

void loop() {
  // Read a pixel from the screen
  uint16_t pixel = tft.readPixel(10, 10);
  Serial.print("Pixel at (10, 10): ");
  Serial.println(pixel, HEX);
  delay(1000);
}
```

This code initializes the TFT display, sets the rotation, fills the screen with black, sets the text color and size, and
prints "Hello World!" to the screen. It then reads a pixel from the screen and prints its value to the serial console.
