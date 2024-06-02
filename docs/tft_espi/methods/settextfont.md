---
title: TFT_eSPI::setTextFont
---

## Description

Set the font for the print stream.

## Signature

`void TFT_eSPI::setTextFont(uint8_t f)`

## Parameters

`uint8_t` f: Text-font [1..8].

## Result

None.

## Example

```c++
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.begin();
  tft.setRotation(1); // Set the display rotation to landscape

  tft.fillScreen(TFT_BLACK); // Clear the screen
  tft.setTextColor(TFT_WHITE); // Set the text color to white

  tft.setTextFont(2); // Set the text font to font number 2

  tft.setCursor(10, 20); // Set the cursor to (10, 20)
  tft.print("Hello, World!"); // Print the text
}

void loop() {
  // Nothing to do here, the text is printed in setup()
}
```

This example initializes the TFT display, sets the rotation to landscape, clears the screen, sets the text color to
white, sets the text font to font number 2, and then prints the text "Hello, World!" to the screen.
