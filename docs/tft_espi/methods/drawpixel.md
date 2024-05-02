---
title: TFT_eSPI::drawPixel
---

## Description

Push a single pixel at an arbitrary position or draw a pixel blended with the screen or bg pixel colour.

## Signature

* `void drawPixel(int32_t x, int32_t y, uint32_t color)`
* `uint16_t drawPixel(int32_t x, int32_t y, uint32_t color, uint8_t alpha, uint32_t bg_color)`

## Parameters

* `int32_t x`: x coord.
* `int32_t y`: y coord.
* `uint32_t color`: [pixel color](../colors.md).
* `uint8_t alpha`: Alpha blended value in [0..255].
* `uint32_t bg_color`: [background color](../colors.md).

## Result

* `void`
* `uint16_t`: The pixel color after alpha blending.

<!--
## Example

Cpp example of method in the context. Including all needed `#include`

``` cpp
#include <TFT_eSPI.h>

```
-->