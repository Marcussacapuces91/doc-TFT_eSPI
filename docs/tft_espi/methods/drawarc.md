---
title: TFT_eSPI::drawArc 
---

## Description

Draw an arc clockwise from 6 o'clock position.

## Signature

`void TFT_eSPI::drawArc(int32_t x, int32_t y, int32_t r, int32_t ir,
                       uint32_t startAngle, uint32_t endAngle,
                       uint32_t fg_color, uint32_t bg_color,
                       bool smooth)`

## Parameters

* `int32_t` x: Center x coord.
* `int32_t` y: Center y coord.
* `ìnt32_t` r: Arc outer radius.
* `ìnt32_t` ir: Arc inner radius. Inclusive, so arc thickness = r-ir+1. 
* `uint32_t` startAngle: Start angle [0..360].
* `uint32_t` endAngle: End angle [0..360].
* `uint32_t` fg_color: [Foreground color](../colors.md). Arc foreground fg_color anti-aliased with background colour along sides
* `uint32_t` bg_color: [Background color](../colors.md).
* `bool` smooth: Optional, default is true, smooth=false means no antialiasing

## Result

`void`

<!--
## Example

Cpp example of method in the context. Including all needed `#include`

``` cpp
#include <TFT_eSPI.h>

```
-->