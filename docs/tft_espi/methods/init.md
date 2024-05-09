---
title: TFT_eSPI::init
---

## Description

`init()` and [`begin()`](begin.md) are equivalent, `begin()` included for backwards compatibility.

## Signature

`void TFT_eSPI::init(uint8_t tc = TAB_COLOUR)`

## Parameters

`uint8_t` tc: default to `TAB_COLOUR` ; tab colour option is for ST7735 displays only.

## Result

None.

## Example

``` cpp
{!docs/examples/helloword.h!}
```
