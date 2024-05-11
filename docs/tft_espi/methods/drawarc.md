---
title: TFT_eSPI::drawArc TFT_eSPI::drawSmoothArc 
---

## Description

Draw an arc clockwise from 6 o'clock position ether anti-aliased or not.

**Smooth** draws an anti-aliased arc between start and end angles. Arc ends are anti-aliased.

By default the arc is drawn with square ends unless the `roundEnds` parameter is included and set true.

Angle = 0 is at 6 o'clock position, 90 at 9 o'clock *etc*. The angles must be in range 0-360 or they will be clipped to 
these limits. The start angle may be larger than the end angle. Arcs are always drawn clockwise from the start angle.

**Not smooth** is as per `drawSmoothArc` except the ends of the arc are **not** anti-aliased, this facilitates dynamic 
arc length changes with arc segments and ensures clean segment joints.

The sides of the arc are anti-aliased by default. If smoothArc is false sides will **not** be anti-aliased.

## Signature

* `void TFT_eSPI::drawArc(int32_t x, int32_t y, int32_t r, int32_t ir, uint32_t startAngle, uint32_t endAngle, 
   uint32_t fg_color, uint32_t bg_color, bool smoothArc = true)
* `void TFT_eSPI::drawSmoothArc(int32_t x, int32_t y, int32_t r, int32_t ir, uint32_t startAngle, uint32_t endAngle,
   uint32_t fg_color, uint32_t bg_color, bool roundEnds = false)

## Parameters

* `int32_t` x: Center x coord.
* `int32_t` y: Center y coord.
* `ìnt32_t` r: Arc outer radius.
* `ìnt32_t` ir: Arc inner radius. Inclusive, so arc thickness = r-ir+1. 
* `uint32_t` startAngle: Start angle [0..360].
* `uint32_t` endAngle: End angle [0..360].
* `uint32_t` [fg_color](../colors.md): Foreground color. Arc foreground fg_color anti-aliased with background colour
   along sides.
* `uint32_t` [bg_color](../colors.md): Background color.
* `bool` smoothArc: Optional, default is true, smoothArc=false means no antialiasing.
* `bool` roundEnds: Optional, default is false, roundsEnds=false means anti-aliased straight end.

## Result

None.

## Example

``` cpp
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); // Create an instance of the TFT_eSPI class

void setup() {
  tft.begin(); // Initialize the TFT display
  tft.setRotation(1); // Set the display rotation to landscape
  tft.fillScreen(TFT_BLACK); // Clear the screen with black color
}

void loop() {
  int xC = 160; // Center x-coordinate of the arc
  int yC = 120; // Center y-coordinate of the arc
  int rad = 100; // Radius of the arc
  int startAngle = 0; // Starting angle of the arc (in degrees)
  int endAngle = 180; // Ending angle of the arc (in degrees)
  uint16_t color = TFT_RED; // Color of the arc

  tft.drawArc(xC, yC, rad, startAngle, endAngle, color); // Draw the arc

  delay(1000); // Wait for 1 second
}
```

This code initializes the TFT display, sets the rotation to landscape, and clears the screen with black color. Then, it
draws an arc with a center at (160, 120), a radius of 100, starting from 0 degrees and ending at 180 degrees, with a
red color.

Note that the drawArc function takes six arguments:
 
* `xC` and `yC`: the center coordinates of the arc
* `rad`: the radius of the arc
* `startAngle` and `endAngle`: the starting and ending angles of the arc (in degrees)
* `color`: the color of the arc

You can adjust these parameters to draw different arcs on your display.
