---
title: TFT_eSPI::drawCentreString 
---

!!! warning "Deprecated"

    Use [`setTextDatum()`](settextdatum.md)

## Description

Draw string centred on dX.

## Signature

* `int16_t TFT_eSPI::drawCentreString(const char *string, int32_t x, int32_t y, uint8_t font)`
* `int16_t TFT_eSPI::drawCentreString(const String& string, int32_t x, int32_t y, uint8_t font)`

## Parameters

* `const char*` string: String to be drawed as `char[]`.
* `const String&` string: String to be drawed as `String`.
* `int32_t` x: x coord centre of string.
* `int32_t` y: y coord top of string.
* `uint8_t` font: Font number.

## Result

Result x coord end of text.
