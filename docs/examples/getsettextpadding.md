```
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);

  // Set text padding to 10 pixels
  tft.setTextPadding(10);

  // Draw a string with padding
  tft.drawString("Hello", 10, 20);

  // Get the current text padding
  uint16_t padding = tft.getTextPadding();
  Serial.print("Text padding: ");
  Serial.println(padding);

  // Change the text padding to 20 pixels
  tft.setTextPadding(20);

  // Draw another string with the new padding
  tft.drawString("World", 10, 40);
}

void loop() {
  // Nothing to do here
}
```

In this example, we first set the text padding to 10 pixels using `tft.setTextPadding(10)`. We then draw a string
"Hello" at position (10, 20) using [`tft.drawString`](drawstring.md). The padding will blank any area not covered by the
string.

We then get the current text padding using [`tft.getTextPadding()`](gettextpadding.md) and print it to the serial
console.

Finally, we change the text padding to 20 pixels using `tft.setTextPadding(20)` and draw another string "World" at
position (10, 40) using  [`tft.drawString`](drawstring.md). The new padding will be used to blank any area not covered
by the string.

Note that the [`setTextPadding`](settextpadding.md) function sets the width of the padding in pixels, and the 
[`getTextPadding`](gettextpadding.md) function returns the current padding width in pixels.
