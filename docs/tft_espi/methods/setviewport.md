---
title: TFT_eSPI::setViewport
---

## Description

Set the clipping region for the TFT screen

## Signature

`void TFT_eSPI::setViewport(int32_t x, int32_t y, int32_t w, int32_t h, bool vpDatum)`

## Parameters

* `ìnt32_t` x: Datum x position in screen coordinates;
* `ìnt32_t` y: Datum y position in screen coordinates;
* `ìnt32_t` w: Viewport width;
* `ìnt32_t` h: Viewport height;
* `bool` vpDatum: Is datum at top left corner of screen (true = top left of viewport).
 
## Result

None.

<!--
## Example

Cpp example of method in the context. Including all needed `#include`

``` cpp
#include <TFT_eSPI.h>

```
-->