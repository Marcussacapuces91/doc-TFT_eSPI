=====
begin
=====

Description
-----------
:ref:`init()<init>` and begin() are equivalent, begin() included for backwards compatibility.

Signature
---------
* ``void begin(uint8_t tc = TAB_COLOUR)``

Parameters
----------
* ``uint8_t tc`` : default to ``TAB_COLOUR`` ; tab colour option is for ST7735 displays only.

Result
------
``void``

Example
-------

.. code:: C++

  #include <TFT_eSPI.h>

  TFT_eSPI tft = TFT_eSPI();
  tft.begin();
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 4, 4);
  tft.setTextColor(TFT_WHITE);
  tft.println(" Hello World");
