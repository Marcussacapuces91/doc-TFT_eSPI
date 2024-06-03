---
title: Class TFT_eSPI_Button
---

This class is available in the `Extensions` path. It is automaticaly loaded by the [`TFT_eSPI.h`](../tft_espi/index.md) header file.
That is, the `TFT_eSPI_Button` is available by default for your programs.

## Public methods

### Constructor

`TFT_eSPI_Button(void)`

### Inits

The *classic* `initButton()` uses centre & size, whereas the `initButtonUL()` uses upper-left corner & size:

* `void initButton(TFT_eSPI *gfx, int16_t x, int16_t y, uint16_t w, uint16_t h, uint16_t outline, uint16_t fill, uint16_t textcolor, char *label, uint8_t textsize)`
* `void initButtonUL(TFT_eSPI *gfx, int16_t x1, int16_t y1, uint16_t w, uint16_t h, uint16_t outline, uint16_t fill, uint16_t textcolor, char *label, uint8_t textsize)`

### Adjust label datum

`void setLabelDatum(int16_t x_delta, int16_t y_delta, uint8_t datum = MC_DATUM)`

### Draw

`void drawButton(bool inverted = false, String long_name = "")`

### Tests

If a location is inside the button:

`bool contains(int16_t x, int16_t y)`

Button status set and check:

* `void press(bool p)`
* `bool isPressed()`
* `bool justPressed()`
* `bool justReleased()`
