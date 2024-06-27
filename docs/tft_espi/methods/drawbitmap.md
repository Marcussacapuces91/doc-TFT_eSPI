---
title: TFT_eSPI::drawBitmap & TFT_eSPI::drawXBitmap
---

## Description

Draw an image stored in an array on the TFT or stored in an XBM array.

## Signature

* `void TFT_eSPI::drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color)`
* `void TFT_eSPI::drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t fgcolor, uint16_t bgcolor)`
* `void TFT_eSPI::drawXBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color)`
* `void TFT_eSPI::drawXBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color, uint16_t bgcolor)`

## Parameters

* `int16_t` x: x coord.
* `int16_t` y: y coord.
* `const uint8_t *` bitmap: Bits map (binary array) of colored pixels.
* `int16_t` w: Bitmap width.
* `int16_t` h: Bitmap height.
* `uint16_t` [color](../colors.md): Color of the writen pixels.
* `uint16_t` [fgcolor](../colors.md): Foreground color (sets pixel).
* `uint16_t` [bgcolor](../colors.md): Background color (unsets pixels).

## Result

None.

## Example

Here is an example of using the `drawBitmap` function from the TFT_eSPI library:

```cpp
void setup() {
  Serial.begin(9600);
  Serial.print("Starting...");
  tft.reset();
  tft.begin(0x9325);
  tft.setRotation(1);
}

void loop() {
  tft.fillScreen(BLACK);
  tft.drawRect(0,0,319,240,WHITE); //Draw white frame
  drawBitmap(30, 10, title, 275, 31,WHITE); // Draw title bitmap at (30, 10) with white color
  drawBitmap(65, 70, car, 195, 146,GREEN); // Draw car bitmap at (65, 70) with green color
  delay(2000);
  // ...
}
```

In this example, `drawBitmap` is called with the following arguments:

* `x` and `y` coordinates (30, 10) and (65, 70) where the bitmap will be drawn
* `bitmap` is a pointer to the bitmap data in PROGMEM (e.g. `title` and `car`)
* `w` and `h` are the width and height of the bitmap (275, 31) and (195, 146)
* `color` is the color to use for drawing the bitmap (WHITE and GREEN)

The `drawBitmap` function will draw the bitmap at the specified position on the screen using the specified color.

!!!Note

    The `drawBitmap` function is used to draw a bitmap that is stored in an array of bytes, where each pixel is
    represented by 1 bit.
