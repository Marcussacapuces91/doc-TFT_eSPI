---
title: TFT_eSPI::setRotation 
---

## Description

Rotate the screen orientation m = 0-3 or 4-7 for BMP drawing.

## Signature

`void TFT_eSPI::setRotation(uint8_t m)`

## Parameters

`int8_t` m: direction [0-4] or [4-7].

The setRotation() function may accept a value between 0 and 3, where:

* `0`: No rotation
* `1`: Rotate 90 degrees clockwise
* `2`: Rotate 180 degrees
* `3`: Rotate 270 degrees clockwise

## Result

None.

## Example

{!docs/examples/helloword.md!}
