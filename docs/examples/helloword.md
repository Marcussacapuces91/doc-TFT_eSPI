```c++
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setTextFont(2); // Set the text font to font number 2
  tft.println("Hello World!");
}

void loop() {
  // nothing to do here, just display the "Hello World!" message
}
```

Let me explain what each line does:

* `TFT_eSPI tft = TFT_eSPI();` creates an instance of the TFT_eSPI class, which is used to interact with the TFT display.
* `tft.init();` initializes the TFT display.
* `tft.setRotation(1);` sets the rotation of the display to 1, which means the display will be rotated 90 degrees clockwise.
* `tft.fillScreen(TFT_BLACK);` fills the entire screen with black color.
* `tft.setCursor(0, 0);` sets the cursor position to the top-left corner of the screen.
* `tft.setTextColor(TFT_WHITE);` sets the text color to white.
* `tft.setTextSize(2);` sets the text size to 2, which means the text will be displayed in a medium size.
* `tft.setTextFont(2);` sets the text font to font number 2, which determines the style and appearance of the text.
* `tft.println("Hello World!");` prints the "Hello World!" message to the screen.

!!! Note
    You need to modify the `User_Setup_Select.h` file to configure the TFT_eSPI library for your specific TFT display.
    Additionally, you may need to adjust the pin connections and the `TFT_eSPI` constructor to match your hardware
    setup.
