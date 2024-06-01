---
title: TFT_eSPI::setTextWrap
---

## Description

Define if text should wrap at end of line.

## Signature

`void TFT_eSPI::setTextWrap(bool wrapX, bool wrapY)`

## Parameters

* `bool` wrapX: wrapped by X axis.
* `bool` wrapY: wrapped by Y axis.

## Result

None.

## Example

```c++
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); // Initialize the TFT display

void setup() {
  tft.begin(); // Initialize the TFT display
  tft.setRotation(1); // Set the display rotation to landscape
  tft.setTextSize(2); // Set the text size to 2
}

void loop() {
  String weatherDescription = 
    "Partly cloudy with a high chance of scattered thunderstorms in the afternoon. Winds will be moderate with gusts up to 30 km/h.";
  
  tft.fillScreen(TFT_BLACK); // Clear the screen
  tft.setTextColor(TFT_WHITE); // Set the text color to white
  
  // Set the text wrap mode to true for horizontal wrapping and false for vertical wrapping
  tft.setTextWrap(true, false);
  
  // Print the weather description
  tft.setCursor(10, 20); // Set the cursor to (10, 20)
  tft.print(weatherDescription);
  
  delay(10000); // Wait for 10 seconds
}
```

In this example, we set `wrapX` to `true` to enable horizontal text wrapping, and `wrapY` to `false` to disable vertical
text wrapping. This means that the text will wrap to the next line when it reaches the edge of the screen, but it will
not wrap to a new page or screen.
