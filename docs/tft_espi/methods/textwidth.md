---
title: TFT_eSPI::setTextWrap
---

## Description

Measures total width of text in pixels

## Signature

`uint16_t TFT_eSPI::textWidth(const String& string);`
`uint16_t TFT_eSPI::textWidth(const char* string);`
`uint16_t TFT_eSPI::textWidth(const String& string, uint8_t font);`
`uint16_t TFT_eSPI::textWidth(const char* string, uint8_t font);`

## Parameters

`String&` string: string of which the method will measure the width
`char*` string: C-style null terminated char array to measure width of
`uint8_t` font: option to choose fonts to measure width for, between 1,2,4,6,7

## Result

`uint16_t`: Total width of text in pixels

## Example


``` cpp
#include <TFT_eSPI.h>

int textLength = tft.textWidth("Hello World"); // Measures width of string
int startX = (tft.width() / 2) - (textLength / 2); // Subtracts half string width from half screen width to center it perfectly
tft.drawString("Hello World", startX, 50); // Prints string on screen
```