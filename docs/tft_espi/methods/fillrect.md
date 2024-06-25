---
title: TFT_eSPI::fillRect, TFT_eSPI::fillRoundRect, TFT_eSPI::fillSmoothRoundRect, TFT_eSPI::fillRectVGradient & TFT_eSPI::fillRectHGradient
---

## Description

Draw a filled rectangle with a fix color, draw a filled and rounded rectangle, draw an anti-aliased filled and rounded
rectangle, or a filled rectangle with a vertical or horizontal gradient.

## Signature

* `void TFT_eSPI::fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)`
* `void TFT_eSPI::fillRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t radius, uint32_t color)`
* `void TFT_eSPI::fillSmoothRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t radius, uint32_t color,
    uint32_t bg_color = 0x00FFFFFF)`
* `void TFT_eSPI::fillRectVGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`
* `void TFT_eSPI::fillRectHGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`

## Parameters

* `int32_t` x: x coord.
* `int32_t` y: y coord.
* `int32_t` w: Rect width.
* `int32_t` h: Rect height.
* `int32_t` radius: corner radius.
* `uint32_t` [color](../colors.md): Fill color.
* `uint32_t` [bg_color](../colors.md): Background color (defaulted to 0x00FFFFFF); If the `bg_color` is not specified,
    the background pixel colour will be read from TFT or sprite.
* `int16_t` x: x coord.
* `int16_t` y: y coord.
* `int16_t` w: Rect width.
* `int16_t` h: Rect height.
* `uint32_t` [color1](../colors.md): Start gradient color.
* `uint32_t` [color2](../colors.md): Stop gradient color.

## Result

None.

## Example

```
void setup() {
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
}

void loop() {
  int x = 10; // x-coordinate of the top-left corner of the rectangle
  int y = 10; // y-coordinate of the top-left corner of the rectangle
  int w = 50; // width of the rectangle
  int h = 20; // height of the rectangle
  uint16_t color = TFT_RED; // color of the rectangle

  tft.fillRect(x, y, w, h, color); // Draw a filled rectangle

  delay(1000); // wait for 1 second
}
```

In this example, we first clear the screen with a black color using `tft.fillScreen(TFT_BLACK)`. Then, in the `loop()`
function, we define the coordinates, width, height, and color of the rectangle we want to draw. Finally, we use 
`tft.fillRect(x, y, w, h, color)` to draw the filled rectangle.

Note that the `fillRect` function takes five arguments:

* `x`: the x-coordinate of the top-left corner of the rectangle
* `y`: the y-coordinate of the top-left corner of the rectangle
* `w`: the width of the rectangle
* `h`: the height of the rectangle
* `color`: the color of the rectangle

You can adjust these values to draw rectangles of different sizes, positions, and colors on your TFT display.
