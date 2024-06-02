---
title: TFT_eSPI::print & TFT_eSPI::println 
---

## Description

`print()` and `println()` is inherited from the abstract `Print` class. `print()` display the following value to the
current position of the screen. The cursor is then moved to the end of the value representation.

The `println()` add a "new line" after the value. So the cursor is returned to the most left position on the next line
depending on the high of the current text.

## Signature

* `void TFT_eSPI::print(val)`
* `void TFT_eSPI::print(val, format)`
* `void TFT_eSPI::println(val)`
* `void TFT_eSPI::println(val, format)`

## Parameters

`val`: The value to print. Any data type is allowed as soon it can be converted to a string.

## Result

None.

<!--
## Example

{!docs/examples/helloword.md!}
-->