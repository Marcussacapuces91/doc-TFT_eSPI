```c++
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

// Define a button object
TFT_eSPI_Button btn;

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  // Initialize the button
  btn.initButton(&tft,  // Pass the TFT object
                 120,  // x position
                 100,  // y position
                 120,  // width
                 40,   // height
                 TFT_WHITE,  // text color
                 TFT_RED,   // background color
                 TFT_WHITE,  // border color
                 "Click me!",  // button text
                 2);  // text font

  // Draw the button
  btn.drawButton();
}

void loop() {
  // Check if the button is pressed
  if (btn.contains(tft.getTouchX(), tft.getTouchY())) {
    // Button is pressed, do something
    tft.fillScreen(TFT_GREEN);
    delay(500);
    tft.fillScreen(TFT_BLACK);
    btn.drawButton();
  }
}
```

In this example, we create a [`TFT_eSPI_Button`](class.md) object called `btn` and initialize it in the `setup()`
function. We pass the `TFT_eSPI` object, the button's position, size, colors, text, and font to the
[`initButton()`](initbutton.md) method.

We then draw the button using the [`drawButton()`](drawbutton.md) method.

In the `loop()` function, we check if the button is pressed by calling the [`contains()`](contains.md) method, which
returns `true` if the touch coordinates are within the button's area. If the button is pressed, we do something (in this
case, fill the screen with green and then restore the button).

!!! Note
    This example assumes you have a touchscreen connected to your ESP32/ESP8266 board and have configured the `TFT_eSPI`
    library to work with your specific display and touchscreen.
