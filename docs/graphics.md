---
title: Graphics and UI
---

With TFT_eSPI, you can create a wide range of graphics and UI elements, from simple shapes and text to complex user
interfaces.

## Drawing Shapes and Graphics

TFT_eSPI provides a variety of functions for drawing shapes and graphics on the TFT display. These include:

### Shapes

#### Drawing

* [`drawPixel()`](tft_espi/methods/drawpixel.md): Draws a single pixel at a specified location.
* [`drawLine()`](tft_espi/methods/drawline.md): Draws a line between two specified points. See also
  [`drawFastHLine()` and `drawFastVLine()`](tft_espi/methods/drawfastline.md). 
* [`drawRect()`](tft_espi/methods/drawrect.md): Draws a rectangle with specified dimensions and location.
* [`drawCircle()`](tft_espi/methods/drawcircle.md): Draws a circle with specified center and radius.
* [`drawTriangle()`](tft_espi/methods/drawtriangle.md): Draws a triangle with specified vertices.
* [`drawRoundRect()`](tft_espi/methods/drawrect.md): Draws a rounded rectangle with specified dimensions and location.

#### Filling

* [`fillScreen()`](tft_espi/methods/fillscreen.md): Fills the entire screen with a specified color.
* [`fillRect()`](tft_espi/methods/fillrect.md): Fills a rectangle with a specified color.
* [`fillCircle()`](tft_espi/methods/fillcircle.md): Fills a circle with a specified color.
* [`fillTriangle()`](tft_espi/methods/filltriangle.md): Fills a triangle with a specified color.

These functions allow you to create complex graphics and shapes, from simple icons to intricate designs.

### Graphics Coordinates and Referential

In TFT_eSPI, the referential is the coordinate system used to position and orient graphical elements on the TFT display.
The referential is defined by the following axes:

* **X-axis**: Horizontal axis, increasing from left to right.
* **Y-axis**: Vertical axis, increasing from top to bottom.
* **Origin**: The point where the X and Y axes intersect, located at the top-left corner of the display.

Graphics coordinates are used to position and size graphical elements on the TFT display. Coordinates are specified in
pixels, with the origin (0, 0) located at the top-left corner of the display.

* **x**: The X-coordinate of the graphical element, increasing from left to right.
* **y**: The Y-coordinate of the graphical element, increasing from top to bottom.
* **width**: The width of the graphical element in pixels.
* **height**: The height of the graphical element in pixels.

### Axis Resolution

The axis resolution determines the number of pixels per unit of measurement on the X and Y axes. In TFT_eSPI, the axis
resolution is fixed at 1 pixel per unit.

## Dimensions and Graphics

The dimensions of a graphical element refer to its width and height in pixels.

* [`getWidth()`](tft_espi/methods/height_width.md): Returns the width of the graphical element in pixels.
* [`getHeight()`](tft_espi/methods/height_width.md): Returns the height of the graphical element in pixels.

### Text Rendering and Styling

TFT_eSPI also provides a range of functions for rendering and styling text on the TFT display. These include:

* [`setTextSize()`](tft_espi/methods/settextsize.md): Sets the size of the text.
* [`setTextColor()`](tft_espi/methods/settextcolor.md): Sets the color of the text.
* [`setTextWrap()`](tft_espi/methods/settextwrap.md): Enables or disables text wrapping.
* [`drawString()`](tft_espi/methods/drawstring.md): Draws a string of text at a specified location.
* [`drawChar()`](tft_espi/methods/drawchar.md): Draws a single character at a specified location.
* [`setTextFont()`](tft_espi/methods/settextfont.md): Sets the font used for rendering text.

These functions allow you to customize the appearance of text on the TFT display, from font size and color to text
wrapping and alignment.

## Creating UI Elements (Buttons, Sliders, *etc.*)

TFT_eSPI provides a range of functions for creating UI elements, such as buttons, sliders, and other interactive
components. These UI elements are provided in the [TFT_eWidget]() class, available in another library. These
include:

!!! warning
    TODO

<!--

* [`drawButton()`](): Draws a button with specified text and location.
* [`drawSlider()`](): Draws a slider with specified location and range.
* [`drawCheckbox()`](): Draws a checkbox with specified location and state.
* [`drawRadioButton()`](): Draws a radio button with specified location and state.
* [`drawProgressBar()`](): Draws a progress bar with specified location and progress.

These functions allow you to create complex user interfaces, from simple buttons and sliders to complex forms and menus.

By combining these functions, you can create a wide range of graphics and UI elements, from simple icons and text to
complex user interfaces and interactive components. With TFT_eSPI, the possibilities are endless!
-->
