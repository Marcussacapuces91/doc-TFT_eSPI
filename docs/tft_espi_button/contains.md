---
title: TFT_eSPI_Button::contains
---

## Description

Return `true` if the button contains the transmitted coordinates.

## Signature

`bool TFT_eSPI_Button::contains(int16_t x, int16_t y)`

## Parameters

* `int16_t` x: x coordinate of the test point
* `int16_t` y: y coordinate of the test point

## Result

`bool`: return `true` if booth coordinates are inside the button rectangle.

## Example

{!docs/examples/button.md!}
