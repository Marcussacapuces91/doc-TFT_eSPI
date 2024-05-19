---
title: TFT_eSPI::setTextSize
---

## Description

Set the text size multiplier.

## Signature

`void TFT_eSPI::setTextSize(uint8_t s)`

## Parameters

`uint8_t` s: size multiplier [1-7].

## Result

None.

## Example
 ``` cpp
#include <TFT_eSPI.h> // Include the TFT_eSPI library

TFT_eSPI tft = TFT_eSPI(); // Create a TFT_eSPI object

void setup() {
  tft.begin(); // Initialize the TFT display
  tft.fillScreen(TFT_BLACK); // Fill the screen with black
  tft.setTextColor(TFT_WHITE); // Set the text color to white

  // Set the text size to 1 (small size)
  tft.setTextSize(1);
  tft.drawString("Small size", 10, 10);

  // Set the text size to 2 (medium size)
  tft.setTextSize(2);
  tft.drawString("Medium size", 10, 30);

  // Set the text size to 3 (large size)
  tft.setTextSize(3);
  tft.drawString("Large size", 10, 50);

  // Set the text size to 4 (extra large size)
  tft.setTextSize(4);
  tft.drawString("Extra large size", 10, 70);
}

void loop() {
  // No code to execute in the main loop
}
```

In this example, we use the `setTextSize()` method to set the text size on the TFT display. The value passed as an
argument to `setTextSize()` sets the text size:

* `1`: small size (character height: 8 pixels)
* `2`: medium size (character height: 16 pixels)
* `3`: large size (character height: 24 pixels)
* `4`: extra large size (character height: 32 pixels)
* `5`: extra extra large size (character height: 40 pixels)
* `6`: extra extra extra large size (character height: 48 pixels)
* `7`: extra extra extra extra large size (character height: 56 pixels)

By setting the text size, we can adapt the text display to our specific needs. Note that the text size can affect the
readability and appearance of the user interface.
