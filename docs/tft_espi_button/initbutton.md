---
title: TFT_eSPI_Button::initButton
---

## Description

The *classic* `initButton()` uses centre & size, whereas the `initButtonUL()` uses upper-left corner & size.

## Signature

* `void TFT_eSPI_Button::initButton(TFT_eSPI *gfx, int16_t x, int16_t y, uint16_t w, uint16_t h, uint16_t outline, uint16_t fill, uint16_t textcolor, char *label, uint8_t textsize)`
* `void TFT_eSPI_Button::initButtonUL(TFT_eSPI *gfx, int16_t x1, int16_t y1, uint16_t w, uint16_t h, uint16_t outline, uint16_t fill, uint16_t textcolor, char *label, uint8_t textsize)`

## Parameters

* `TFT_eSPI*` gfx: the TFT object;
* `int16_t` x: x position (center for `initButton()` or left for `initButtonUL()`);
* `int16_t` y: y position (center for `initButton()` or top for `initButtonUL()`);
* `uint16_t` w: width;
* `uint16_t` h: height;
* `uint16_t` outline: text color;
* `uint16_t` fill: background color;
* `uint16_t` textcolor: border color;
* `char*` label: button text;
* `uint8_t` textsize: text font.

## Result

None.

## Example

{!docs/examples/button.md!}
