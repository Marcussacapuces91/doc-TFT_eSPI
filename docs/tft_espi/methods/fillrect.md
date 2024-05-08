---
title: TFT_eSPI::fillRect 
---

## Description

Draw a filled rectangle with a fix color, or with a vertical or horizontal gradient.

## Signature

* `void fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)`
* `void fillRectVGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`
* `void fillRectHGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`

## Parameters

* `int32_t` x: x coord.
* `int32_t` y: y coord.
* `int32_t` w: rect width.
* `int32_t` h: rect height.
* `uint32_t` color: [fill color](../colors.md).
* `int16_t` x: x coord.
* `int16_t` y: y coord.
* `int16_t` w: rect width.
* `int16_t` h: rect height.
* `uint32_t` color1: [start gradient color](../colors.md).
* `uint32_t` color2: [stop gradient color](../colors.md).

## Result

`void`

## Example

Cpp example of method in the context. Including all needed `#include`

``` cpp
#include <TFT_eSPI.h>

```