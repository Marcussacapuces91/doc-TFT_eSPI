---
title: TFT_eSPI::fillRect 
---

## Description

Draw a filled rectangle with a fix color, or with a vertical or horizontal gradient.

## Signature

* `void TFT_eSPI::fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)`
* `void TFT_eSPI::fillRectVGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`
* `void TFT_eSPI::fillRectHGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`

## Parameters

* `int32_t` x: x coord.
* `int32_t` y: y coord.
* `int32_t` w: Rect width.
* `int32_t` h: Rect height.
* `uint32_t` [color]: Fill color.
* `int16_t` x: x coord.
* `int16_t` y: y coord.
* `int16_t` w: Rect width.
* `int16_t` h: Rect height.
* `uint32_t` [color1](../colors.md): Start gradient color.
* `uint32_t` [color2](../colors.md): Stop gradient color.

## Result

None.

<!--
## Example

Cpp example of method in the context. Including all needed `#include`

``` cpp
#include <TFT_eSPI.h>

```
-->
