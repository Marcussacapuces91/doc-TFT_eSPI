---
title: TFT_eSPI::drawWedgeLine & TFT_eSPI::drawWideLine
---

## Description

Draw an anti-aliased wide line from ax,ay to bx,by either with different width at each end aw, bw or with the same width
wd at both ends, and with radiused ends.

If `bg_color` is not included the background pixel colour will be read from TFT or sprite.

## Signature

* `void TFT_eSPI::drawWedgeLine(float ax, float ay, float bx, float by, float ar, float br, uint32_t fg_color, uint32_t bg_color = 0x00FFFFFF)`
* `void TFT_eSPI::drawWideLine(float ax, float ay, float bx, float by, float wd, uint32_t fg_color, uint32_t bg_color = 0x00FFFFFF)`

## Parameters

- `float` ax: X start center position.
- `float` ay: Y start center position.
- `float` bx: X stop center position.
- `float` by: Y stop center position.
- `float` ar: start radius.
- `float` br: stop radius.
- `float` wd: line width.
- `uint32_t` [fg_color](../colors.md): foreground color.
- `uint32_t` [bg_color](../colors.md): default to `0x00FFFFFF`.

## Result

None.
