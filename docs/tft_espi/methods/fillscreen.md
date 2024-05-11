---
title: TFT_eSPI::fillScreen
---

## Description

Clear the screen to defined colour.

## Signature

`void TFT_eSPI::fillScreen(uint32_t color)`

## Parameters

`uint32_t` [color](../colors.md): Desired color. 

## Result

None.

## Example

**Example 1:**
{!docs/examples/helloword.md!}

**Example 2:**
```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK); // Fill the screen with black
}

void loop() {
  // Your code here
}
```

In this example, the `fillScreen` function is used to fill the entire screen with a black color
(defined as `TFT_BLACK`) after initializing the TFT display and setting its rotation to 1.
