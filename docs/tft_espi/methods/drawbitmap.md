---
title: TFT_eSPI::drawBitmap 
---

## Description

Draw an image stored in an array on the TFT.

## Signature

* `void TFT_eSPI::drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color)`
* `void TFT_eSPI::drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t fgcolor, uint16_t bgcolor)`

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

<!--
## Example

Cpp example of method in the context. Including all needed `#include`

``` cpp
#include <TFT_eSPI.h>

```
-->