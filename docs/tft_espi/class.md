---
title: Class TFT_eSPI
---

## Herited from

* [class `Print`](https://reference.arduino.cc/reference/en/language/functions/communication/print/)

## Friends

* [class `TFT_eSprite`](../tft_esprite.md)

## Public methods

### Constructor

* [`TFT_eSPI(int16_t _W = TFT_WIDTH, int16_t _H = TFT_HEIGHT)`](methods/constructor.md)

### Begin/Init

* [`void begin(uint8_t tc = TAB_COLOUR)`](methods/begin.md)
* [`void init(uint8_t tc = TAB_COLOUR)`](methods/init.md)

### Draw anything

* [`void drawArc(int32_t x, int32_t y, int32_t r, int32_t ir, uint32_t startAngle, uint32_t endAngle, uint32_t fg_color, uint32_t bg_color, bool smoothArc = true)`](methods/drawarc.md)
* [`void drawBitmap( int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t fgcolor)`](methods/drawbitmap.md)
* [`void drawBitmap( int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t fgcolor, uint16_t bgcolor)`](methods/drawbitmap.md)
* [`int16_t drawCentreString(const char *string, int32_t x, int32_t y, uint8_t font)`](methods/drawcentrestring.md)
* [`int16_t drawCentreString(const String& string, int32_t x, int32_t y, uint8_t font)`](methods/drawcentrestring.md)
* [`void drawChar(int32_t x, int32_t y, uint16_t c, uint32_t color, uint32_t bg, uint8_t size)`](methods/drawchar.md)
* [`int16_t drawChar(uint16_t uniCode, int32_t x, int32_t y)`](methods/drawchar.md)
* [`int16_t drawChar(uint16_t uniCode, int32_t x, int32_t y, uint8_t font)`](methods/drawchar.md)
* [`void drawCircle(int32_t x, int32_t y, int32_t r, uint32_t color)`](methods/drawcircle.md)
* `void drawCircleHelper(int32_t x, int32_t y, int32_t r, uint8_t cornername, uint32_t color)`
* [`void drawEllipse(int16_t x, int16_t y, int32_t rx, int32_t ry, uint16_t color)`](methods/drawellipse.md)
* [`void drawFastVLine(int32_t x, int32_t y, int32_t h, uint32_t color)`](methods/drawfastline.md)
* [`void drawFastHLine(int32_t x, int32_t y, int32_t w, uint32_t color)`](methods/drawfastline.md)
* [`int16_t drawFloat(float floatNumber, uint8_t decimal, int32_t x, int32_t y, uint8_t font)`](methods/drawfloat.md)
* [`int16_t drawFloat(float floatNumber, uint8_t decimal, int32_t x, int32_t y)`](methods/drawfloat.md)
* [`void drawLine(int32_t xs, int32_t ys, int32_t xe, int32_t ye, uint32_t color)`](methods/drawline.md)
* [`int16_t drawNumber(long intNumber, int32_t x, int32_t y, uint8_t font)`](methods/drawnumber.md)
* [`int16_t drawNumber(long intNumber, int32_t x, int32_t y)`](methods/drawnumber.md)
* [`void drawPixel(int32_t x, int32_t y, uint32_t color)`](methods/drawpixel.md)
* [`uint16_t drawPixel(int32_t x, int32_t y, uint32_t color, uint8_t alpha, uint32_t bg_color = 0x00FFFFFF)`](methods/drawpixel.md)
* [`void drawRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)`](methods/drawrect.md)
* [`int16_t drawRightString(const char *string, int32_t x, int32_t y, uint8_t font)`](methods/drawrightstring.md)
* [`int16_t drawRightString(const String& string, int32_t x, int32_t y, uint8_t font)`](methods/drawrightstring.md)
* [`void drawRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t radius, uint32_t color)`](methods/drawrect.md)
* [`void drawSmoothArc(int32_t x, int32_t y, int32_t r, int32_t ir, uint32_t startAngle, uint32_t endAngle, uint32_t fg_color, uint32_t bg_color, bool roundEnds = false)`](methods/drawarc.md)
* [`void drawSmoothCircle(int32_t x, int32_t y, int32_t r, uint32_t fg_color, uint32_t bg_color)`](methods/drawcircle.md)
* [`void drawSmoothRoundRect(int32_t x, int32_t y, int32_t r, int32_t ir, int32_t w, int32_t h, uint32_t fg_color, uint32_t bg_color = 0x00FFFFFF, uint8_t quadrants = 0xF)`](methods/drawrect.md)
* [`int16_t drawString(const char *string, int32_t x, int32_t y, uint8_t font)`](methods/drawstring.md)
* [`int16_t drawString(const char *string, int32_t x, int32_t y)`](methods/drawstring.md)
* [`int16_t drawString(const String& string, int32_t x, int32_t y, uint8_t font)`](methods/drawstring.md)
* [`int16_t drawString(const String& string, int32_t x, int32_t y)`](methods/drawstring.md)
* [`void drawTriangle(int32_t x1,int32_t y1, int32_t x2,int32_t y2, int32_t x3,int32_t y3, uint32_t color)`](methods/drawtriangle.md)
* [`void drawXBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t fgcolor)`](methods/drawbitmap.md)
* [`void drawXBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t fgcolor, uint16_t bgcolor)`](methods/drawbitmap.md)

### Draw anti-aliased helpers

* `void drawSpot(float ax, float ay, float r, uint32_t fg_color, uint32_t bg_color = 0x00FFFFFF)`
* `void drawWedgeLine(float ax, float ay, float bx, float by, float aw, float bw, uint32_t fg_color, uint32_t bg_color = 0x00FFFFFF)`
* `void drawWideLine(float ax, float ay, float bx, float by, float wd, uint32_t fg_color, uint32_t bg_color = 0x00FFFFFF)`

### Fill anything
 
* [`void fillCircle(int32_t x, int32_t y, int32_t r, uint32_t color)`](methods/fillcircle.md)
* `void fillCircleHelper(int32_t x, int32_t y, int32_t r, uint8_t cornername, int32_t delta, uint32_t color)`
* [`void fillEllipse(int16_t x, int16_t y, int32_t rx, int32_t ry, uint16_t color)`](methods/fillellipse.md)
* [`void fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color)`](methods/fillrect.md)
* `void fillRectVGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`
* `void fillRectHGradient(int16_t x, int16_t y, int16_t w, int16_t h, uint32_t color1, uint32_t color2)`
* [`void fillRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t radius, uint32_t color)`](methods/fillrect.md)
* `void fillSmoothCircle(int32_t x, int32_t y, int32_t r, uint32_t color, uint32_t bg_color = 0x00FFFFFF)`
* [`void fillSmoothRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t radius, uint32_t color, uint32_t bg_color = 0x00FFFFFF)`](methods/fillrect.md)
* [`void fillScreen(uint32_t color)`](methods/fillscreen.md)
* [`void fillTriangle(int32_t x1,int32_t y1, int32_t x2,int32_t y2, int32_t x3,int32_t y3, uint32_t color)`](methods/filltriangle.md)

### Get screen height/width

* [`virtual int16_t height(void)`](methods/height_width.md)
* [`virtual int16_t width(void)`](methods/height_width.md)

### Colors

* [`virtual uint16_t readPixel(int32_t x, int32_t y)`](methods/readpixel.md)
* [`void setTextColor(uint16_t color)`](methods/settextcolor.md)
* [`void setTextColor(uint16_t fgcolor, uint16_t bgcolor, bool bgfill = false)`](methods/settextcolor.md)

### Viewport

* [`void setViewport(int32_t x, int32_t y, int32_t w, int32_t h, bool vpDatum = true)`](methods/setviewport.md)
* `bool checkViewport(int32_t x, int32_t y, int32_t w, int32_t h)`
* `int32_t getViewportX(void)`
* `int32_t getViewportY(void)`
* `int32_t getViewportWidth(void)`
* `int32_t getViewportHeight(void)`
* `bool getViewportDatum(void)`
* `void frameViewport(uint16_t color, int32_t w)`
* `void resetViewport(void)`

### Window

* `virtual void setWindow(int32_t xs, int32_t ys, int32_t xe, int32_t ye)`
* `void setAddrWindow(int32_t xs, int32_t ys, int32_t w, int32_t h)`
* `bool clipAddrWindow(int32_t* x, int32_t* y, int32_t* w, int32_t* h)`
* `bool clipWindow(int32_t* xs, int32_t* ys, int32_t* xe, int32_t* ye)`

### Cursor

* [`void setCursor(int16_t x, int16_t y)`](methods/setcursor.md)
* [`void setCursor(int16_t x, int16_t y, uint8_t font)`](methods/setcursor.md)
* `int16_t  getCursorX(void)`
* `int16_t  getCursorY(void)`

### Alignment / Datum

* [`uint8_t getTextDatum(void)`](methods/gettextdatum.md)
* [`void setTextDatum(uint8_t datum)`](methods/settextdatum.md)

<!--
### what ? 

* virtual void pushColor(uint16_t color)
* virtual void begin_nin_write()
* virtual void end_nin_write()
* void setRotation(uint8_t r)
* uint8_t getRotation(void)
* void setOrigin(int32_t x, int32_t y)
* int32_t getOriginX(void)
* int32_t getOriginY(void)
* void invertDisplay(bool i)
* void pushColor(uint16_t color, uint32_t len)
* void pushColors(uint16_t  *data, uint32_t len, bool swap = true)
* void pushColors(uint8_t  *data, uint32_t len)
* void pushBlock(uint16_t color, uint32_t len)
* void pushPixels(const void * data_in, uint32_t len)
* uint8_t tft_Read_8(void)
* void begin_SDA_Read(void)
* void end_SDA_Read(void)


* void setSwapBytes(bool swap)
* bool getSwapBytes(void)
* void setBitmapColor(uint16_t fgcolor, uint16_t bgcolor)
* void setPivot(int16_t x, int16_t y)
* int16_t getPivotX(void)
* int16_t getPivotY(void)
* void readRect(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t *data)
* void pushRect(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t *data)
* void pushImage(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t *data)
* void pushImage(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t *data, uint16_t transparent)
* void pushImage(int32_t x, int32_t y, int32_t w, int32_t h, const uint16_t *data, uint16_t transparent)
* void pushImage(int32_t x, int32_t y, int32_t w, int32_t h, const uint16_t *data)
* void pushImage(int32_t x, int32_t y, int32_t w, int32_t h, uint8_t  *data, bool bpp8 = true, uint16_t *cmap = nullptr)
* void pushImage(int32_t x, int32_t y, int32_t w, int32_t h, uint8_t  *data, uint8_t  transparent, bool bpp8 = true, uint16_t *cmap = nullptr)
* void pushImage(int32_t x, int32_t y, int32_t w, int32_t h, const uint8_t *data, bool bpp8,  uint16_t *cmap = nullptr)
* void pushMaskedImage(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t *img, uint8_t *mask)
* void readRectRGB(int32_t x, int32_t y, int32_t w, int32_t h, uint8_t *data)
* void setTextSize(uint8_t size)
* void setTextWrap(bool wrapX, bool wrapY = false)
* void setTextPadding(uint16_t x_width)
* uint16_t getTextPadding(void)
* void setFreeFont(const GFXfont *f = NULL)
* void setTextFont(uint8_t font)
* void setFreeFont(uint8_t font)
* void setTextFont(uint8_t font)
* int16_t textWidth(const char *string, uint8_t font)
* int16_t textWidth(const char *string)
* int16_t textWidth(const String& string, uint8_t font)
* int16_t textWidth(const String& string)
* int16_t fontHeight(uint8_t font)
* int16_t fontHeight(void)
* uint16_t decodeUTF8(uint8_t *buf, uint16_t *index, uint16_t remaining)
* uint16_t decodeUTF8(uint8_t c)
* size_t write(uint8_t)
* void setCallback(getColorCallback getCol)
* uint16_t fontsLoaded(void)
* void spiwrite(uint8_t)
* void writecommand(uint16_t c)
* void writeRegister8(uint16_t c, uint8_t d)
* void writeRegister16(uint16_t c, uint16_t d)
* void writecommand(uint8_t c)
* void writedata(uint8_t d)
* void commandList(const uint8_t *addr)
* uint8_t readcommand8( uint8_t cmd_function, uint8_t index = 0)
* uint16_t readcommand16(uint8_t cmd_function, uint8_t index = 0)
* uint32_t readcommand32(uint8_t cmd_function, uint8_t index = 0)
* uint16_t color565(uint8_t red, uint8_t green, uint8_t blue)
* uint16_t color8to16(uint8_t color332)
* uint8_t  color16to8(uint16_t color565)
* uint32_t color16to24(uint16_t color565)
* uint32_t color24to16(uint32_t color888);
* uint16_t alphaBlend(uint8_t alpha, uint16_t fgc, uint16_t bgc)
* uint16_t alphaBlend(uint8_t alpha, uint16_t fgc, uint16_t bgc, uint8_t dither)
* uint32_t alphaBlend24(uint8_t alpha, uint32_t fgc, uint32_t bgc, uint8_t dither = 0)
* bool initDMA(bool ctrl_cs = false)
* void deInitDMA(void)		   
* void pushImageDMA(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t* data, uint16_t* buffer = nullptr)
* void pushImageDMA(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t const* data)
* void pushPixelsDMA(uint16_t* image, uint32_t len)
* bool dmaBusy(void)
* void dmaWait(void)

  bool     DMA_Enabled = false;   // Flag for DMA enabled state
  uint8_t  spiBusyCheck = 0;      // Number of ESP32 transfer buffers to check

* void startWrite(void)
* void writeColor(uint16_t color, uint32_t len)
* void endWrite(void)

  // Set/get an arbitrary library configuration attribute or option
  //       Use to switch ON/OFF capabilities such as UTF8 decoding - each attribute has a unique ID
  //       id = 0: reserved - may be used in future to reset all attributes to a default state
  //       id = 1: Turn on (a=true) or off (a=false) GLCD cp437 font character error correction
  //       id = 2: Turn on (a=true) or off (a=false) UTF8 decoding
  //       id = 3: Enable or disable use of ESP32 PSRAM (if available)
           #define CP437_SWITCH 1
           #define UTF8_SWITCH  2
           #define PSRAM_ENABLE 3
  void     setAttribute(uint8_t id = 0, uint8_t a = 0); // Set attribute value
  uint8_t  getAttribute(uint8_t id = 0);                // Get attribute value

           // Used for diagnostic sketch to see library setup adopted by compiler, see Section 7 above
  void     getSetup(setup_t& tft_settings); // Sketch provides the instance to populate
  bool     verifySetupID(uint32_t id);

  // Global variables
#if !defined (TFT_PARALLEL_8_BIT) && !defined (RP2040_PIO_INTERFACE)
  static   SPIClass& getSPIinstance(void); // Get SPI class handle
#endif
  uint32_t textcolor, textbgcolor;         // Text foreground and background colours

  uint32_t bitmap_fg, bitmap_bg;           // Bitmap foreground (bit=1) and background (bit=0) colours

  uint8_t  textfont,  // Current selected font number
           textsize,  // Current font size multiplier
           textdatum, // Text reference datum
           rotation;  // Display rotation (0-3)

  uint8_t  decoderState = 0;   // UTF8 decoder state        - not for user access
  uint16_t decoderBuffer;      // Unicode code-point buffer - not for user access


Private methodes
----------------

*  void     spi_begin()
*  void     spi_end()
*  void     spi_begin_read()
*  void     spi_end_read()
*  inline void begin_tft_write() __attribute__((always_inline));
*  inline void end_tft_write()   __attribute__((always_inline));
*  inline void begin_tft_read()  __attribute__((always_inline));
*  inline void end_tft_read()    __attribute__((always_inline));

   void     initBus(void);

           // Temporary  library development function  TODO: remove need for this
  void     pushSwapBytePixels(const void* data_in, uint32_t len);

           // Same as setAddrWindow but exits with CGRAM in read mode
  void     readAddrWindow(int32_t xs, int32_t ys, int32_t w, int32_t h);

           // Byte read prototype
  uint8_t  readByte(void);

           // GPIO parallel bus input/output direction control
  void     busDir(uint32_t mask, uint8_t mode);

           // Single GPIO input/output direction control
  void     gpioMode(uint8_t gpio, uint8_t mode);

           // Smooth graphics helper
  uint8_t  sqrt_fraction(uint32_t num);

           // Helper function: calculate distance of a point from a finite length line between two points
  float    wedgeLineDistance(float pax, float pay, float bax, float bay, float dr);

           // Display variant settings
  uint8_t  tabcolor,                   // ST7735 screen protector "tab" colour (now invalid)
           colstart = 0, rowstart = 0; // Screen display area to CGRAM area coordinate offsets

           // Port and pin masks for control signals (ESP826 only) - TODO: remove need for this
  volatile uint32_t *dcport, *csport;
  uint32_t cspinmask, dcpinmask, wrpinmask, sclkpinmask;

           #if defined(ESP32_PARALLEL)
           // Bit masks for ESP32 parallel bus interface
  uint32_t xclr_mask, xdir_mask; // Port set/clear and direction control masks

           // Lookup table for ESP32 parallel bus interface uses 1kbyte RAM,
  uint32_t xset_mask[256]; // Makes Sprite rendering test 33% faster, for slower macro equivalent
                           // see commented out #define set_mask(C) within TFT_eSPI_ESP32.h
           #endif

  //uint32_t lastColor = 0xFFFF; // Last colour - used to minimise bit shifting overhead

  getColorCallback getColor = nullptr; // Smooth font callback function pointer

  bool     locked, inTransaction, lockTransaction; // SPI transaction and mutex lock flags


Protected attributs
-------------------

  int32_t  _init_width, _init_height; // Display w/h as input, used by setRotation()
  int32_t  _width, _height;           // Display w/h as modified by current rotation
  int32_t  addr_row, addr_col;        // Window position - used to minimise window commands

  int16_t  _xPivot;   // TFT x pivot point coordinate for rotated Sprites
  int16_t  _yPivot;   // TFT x pivot point coordinate for rotated Sprites

  // Viewport variables
  int32_t  _vpX, _vpY, _vpW, _vpH;    // Note: x start, y start, x end + 1, y end + 1
  int32_t  _xDatum;
  int32_t  _yDatum;
  int32_t  _xWidth;
  int32_t  _yHeight;
  bool     _vpDatum;
  bool     _vpOoB;

  int32_t  cursor_x, cursor_y, padX;       // Text cursor x,y and padding setting
  int32_t  bg_cursor_x;                    // Background fill cursor
  int32_t  last_cursor_x;                  // Previous text cursor position when fill used

  uint32_t fontsloaded;               // Bit field of fonts loaded

  uint8_t  glyph_ab,   // Smooth font glyph delta Y (height) above baseline
           glyph_bb;   // Smooth font glyph delta Y (height) below baseline

  bool     isDigits;   // adjust bounding box for numbers to reduce visual jiggling
  bool     textwrapX, textwrapY;  // If set, 'wrap' text at right and optionally bottom edge of display
  bool     _swapBytes; // Swap the byte order for TFT pushImage()

  bool     _booted;    // init() or begin() has already run once

                       // User sketch manages these via set/getAttribute()
  bool     _cp437;        // If set, use correct CP437 charset (default is OFF)
  bool     _utf8;         // If set, use UTF-8 decoder in print stream 'write()' function (default ON)
  bool     _psram_enable; // Enable PSRAM use for library functions (TBD) and Sprites

  uint32_t _lastColor; // Buffered value of last colour used

  bool     _fillbg;    // Fill background flag (just for for smooth fonts at the moment)

#if defined (SSD1963_DRIVER)
  uint16_t Cswap;      // Swap buffer for SSD1963
  uint8_t r6, g6, b6;  // RGB buffer for SSD1963
#endif

#ifdef LOAD_GFXFF
  GFXfont  *gfxFont;
#endif

/***************************************************************************************
**                         Section 9: TFT_eSPI class conditional extensions
***************************************************************************************/
// Load the Touch extension
#ifdef TOUCH_CS
  #if defined (TFT_PARALLEL_8_BIT) || defined (RP2040_PIO_INTERFACE)
    #if !defined(DISABLE_ALL_LIBRARY_WARNINGS)
      #error >>>>->> Touch functions not supported in 8/16-bit parallel mode or with RP2040 PIO.
    #endif
  #else
    #include "Extensions/Touch.h"        // Loaded if TOUCH_CS is defined by user
  #endif
#else
    #if !defined(DISABLE_ALL_LIBRARY_WARNINGS)
      #warning >>>>->> TOUCH_CS pin not defined, TFT_eSPI touch functions will not be available!
    #endif
#endif

// Load the Anti-aliased font extension
#ifdef SMOOTH_FONT
  #include "Extensions/Smooth_font.h"  // Loaded if SMOOTH_FONT is defined by user
#endif

}; // End of class TFT_eSPI

-->