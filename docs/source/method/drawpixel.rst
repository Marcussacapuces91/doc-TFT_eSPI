=========
DrawPixel
=========

Description
-----------
Push a single pixel at an arbitrary position using a fixed color.

Signature
---------
* ``void TFT_eSPI::drawPixel(int32_t x, int32_t y, uint32_t color)``

Parameters
----------
* ``int32_t x`` : X datum.
* ``int32_t y`` : Y datum.
* ``uint32_t color`` : color used.

Result
------
``void``

Example
-------

.. code:: C++

  #include <TFT_eSPI.h>

  TFT_eSPI tft = TFT_eSPI();
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.drawPixel(10, 10, TFT_WHITE);
