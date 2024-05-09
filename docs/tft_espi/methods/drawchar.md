---
title: TFT_eSPI::drawChar 
---

## Description

Draw a single character in the GLCD or GFXFF font or a Unicode glyph onto the screen.

## Signature

* `void TFT_eSPI::drawChar(int32_t x, int32_t y, uint16_t c, uint32_t color, uint32_t bg, uint8_t size)`
* `int16_t TFT_eSPI::drawChar(uint16_t uniCode, int32_t x, int32_t y)`
* `int16_t TFT_eSPI::drawChar(uint16_t uniCode, int32_t x, int32_t y, uint8_t font)`

## Parameters

* `ìnt32_t` x: x coord.
* `ìnt32_t` y: y coord.
* `uìnt16_t` c: Character.
* `uìnt32_t` [color](../colors.md): Text color.
* `uìnt32_t` [bg](../colors.md): Backgroung color.
* `uìnt8_t` size: Character size.
* `uìnt16_t` uniCode: Unicode glyph.
* `uìnt8_t` font: Text font number.

## Result

* `void`
* `int16_t`: ???

<!--
## Example

Cpp example of method in the context. Including all needed `#include`

``` cpp
#include <TFT_eSPI.h>

```
-->