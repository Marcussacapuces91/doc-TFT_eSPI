======================
Header file TFT_eSPI.h
======================

.. toctree::

   datum
   colours
   class

Header
======
Arduino TFT graphics library targeted at ESP8266
and ESP32 based boards.

This is a stand-alone library that contains the
hardware driver, the graphics functions and the
proportional fonts.

The built-in fonts 4, 6, 7 and 8 are Run Length
Encoded (RLE) to reduce the FLASH footprint.

Last review/edit by Bodmer: 04/02/22

Constants
=========

.. code:: C

   #define TFT_ESPI_VERSION "2.5.43"

Bit level feature flags
Bit 0 set: viewport capability

.. code:: C

   #define TFT_ESPI_FEATURES 1

Structures
==========

This structure allows sketches to retrieve the user setup parameters at runtime
by calling getSetup(), zero impact on code size unless used, mainly for diagnostics

.. code:: C

   typedef struct
   {
   String  version = TFT_ESPI_VERSION;
   String  setup_info;  // Setup reference name available to use in a user setup
   uint32_t setup_id;   // ID available to use in a user setup
   int32_t esp;         // Processor code
   uint8_t trans;       // SPI transaction support
   uint8_t serial;      // Serial (SPI) or parallel
   #ifndef GENERIC_PROCESSOR
   uint8_t  port;       // SPI port
   #endif
   uint8_t overlap;     // ESP8266 overlap mode
   uint8_t interface;   // Interface type
   
   uint16_t tft_driver; // Hexadecimal code
   uint16_t tft_width;  // Rotation 0 width and height
   uint16_t tft_height;
   
   uint8_t r0_x_offset; // Display offsets, not all used yet
   uint8_t r0_y_offset;
   uint8_t r1_x_offset;
   uint8_t r1_y_offset;
   uint8_t r2_x_offset;
   uint8_t r2_y_offset;
   uint8_t r3_x_offset;
   uint8_t r3_y_offset;
   
   int8_t pin_tft_mosi; // SPI pins
   int8_t pin_tft_miso;
   int8_t pin_tft_clk;
   int8_t pin_tft_cs;
   
   int8_t pin_tft_dc;   // Control pins
   int8_t pin_tft_rd;
   int8_t pin_tft_wr;
   int8_t pin_tft_rst;
   
   int8_t pin_tft_d0;   // Parallel port pins
   int8_t pin_tft_d1;
   int8_t pin_tft_d2;
   int8_t pin_tft_d3;
   int8_t pin_tft_d4;
   int8_t pin_tft_d5;
   int8_t pin_tft_d6;
   int8_t pin_tft_d7;
   
   int8_t pin_tft_led;
   int8_t pin_tft_led_on;
   
   int8_t pin_tch_cs;   // Touch chip select pin
   
   int16_t tft_spi_freq;// TFT write SPI frequency
   int16_t tft_rd_freq; // TFT read  SPI frequency
   int16_t tch_spi_freq;// Touch controller read/write SPI frequency
   } setup_t;


Callback
========
Callback prototype for smooth font pixel colour read

.. code:: C

   typedef uint16_t (*getColorCallback)(uint16_t x, uint16_t y);

Class TFT_eSPI
==============
https://doc-tft-espi.readthedocs.io/en/latest/class_TFT_eSPI.html
