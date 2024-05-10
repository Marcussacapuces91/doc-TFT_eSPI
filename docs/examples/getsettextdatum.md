**Example:**

```cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.begin();
  tft.setRotation(3); // Set the screen rotation to 3 (landscape mode)

  // Set the text datum to the middle center of the screen
  tft.setTextDatum(MC_DATUM);

  // Print a message on the screen
  tft.drawString("Hello, World!", tft.width() / 2, tft.height() / 2);
}

void loop() {
  // Get the current text datum
  uint8_t currentDatum = tft.getTextDatum();

  // Print the current datum value
  Serial.print("Current text datum: ");
  Serial.println(currentDatum);

  // Change the text datum to the top left corner
  tft.setTextDatum(TL_DATUM);

  // Print another message on the screen
  tft.drawString("Top left corner!", 0, 0);

  delay(1000);
}
```

In this example, we first set the text datum to the middle center of the screen using `tft.setTextDatum(MC_DATUM)`. We 
then print a message on the screen using [`tft.drawString`](/docs/tft_espi/methods/drawstring.md).

In the `loop()` function, we get the current text datum using
[`tft.getTextDatum()`](/docs/tft_espi/methods/gettextdatum.md) and print its value to the serial console. We then change
the text datum to the top left corner using [`tft.setTextDatum(TL_DATUM)`](/docs/tft_espi/methods/settextdatum.md) and 
print another message on the screen.

**Explanation:**

* [`TFT_eSPI::getTextDatum()`](/docs/tft_espi/methods/gettextdatum.md) returns the current text datum, which is the 
  reference point for text output.
* [`TFT_eSPI::setTextDatum(uint8_t d)`](/docs/tft_espi/methods/settextdatum.md) sets the text datum to the specified
  value `d`. The available values for `d` are available here: [Datums](/docs/tft_espi/datums.md).

By setting the text datum, you can control the alignment and positioning of text output on the screen.
