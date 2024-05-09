---
title: TFT_eSPI::setTextColor 
---

## Description

Set the font foreground colour (background is transparent) or with a background colour.

## Signature

* `void TFT_eSPI::setTextColor(uint16_t color)`
* `void TFT_eSPI::setTextColor(uint16_t fgcolor, uint16_t bgcolor, bool bgfill = false)`

## Parameters

* `uint16_t` [color](../colors.md): Text color.
* `uint16_t` [fgcolor](../colors.md): Foreground color.
* `uint16_t` [bgcolor](../colors.md): Background color.
* `bool` bgfill: Is background filled, by default not.

## Result

None.

## Example

``` cpp
{!docs/examples/helloword.h!}
```