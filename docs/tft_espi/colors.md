---
title: Colors
---

## Default color definition

| const             | `int32_t` value | Red | Green | Blue | Comment                        |
|-------------------|:---------------:|:---:|:-----:|:----:|--------------------------------|
| `TFT_BLACK`       |     0x0000      |  0  |   0   |  0   |                                |
| `TFT_NAVY`        |     0x000F      |  0  |   0   | 128  |                                |
| `TFT_DARKGREEN`   |     0x03E0      |  0  |  128  |  0   |                                |
| `TFT_DARKCYAN`    |     0x03EF      |  0  |  128  | 128  |                                |
| `TFT_MAROON`      |     0x7800      | 128 |   0   |  0   |                                |
| `TFT_PURPLE`      |     0x780F      | 128 |   0   | 128  |                                |
| `TFT_OLIVE`       |     0x7BE0      | 128 |  128  |  0   |                                |
| `TFT_LIGHTGREY`   |     0xD69A      | 211 |  211  | 211  |                                |
| `TFT_DARKGREY`    |     0x7BEF      | 128 |  128  | 128  |                                |
| `TFT_BLUE`        |     0x001F      |  0  |   0   | 255  |                                |
| `TFT_GREEN`       |     0x07E0      |  0  |  255  |  0   |                                |
| `TFT_CYAN`        |     0x07FF      |  0  |  255  | 255  |                                |
| `TFT_RED`         |     0xF800      | 255 |   0   |  0   |                                |
| `TFT_MAGENTA`     |     0xF81F      | 255 |   0   | 255  |                                |
| `TFT_YELLOW`      |     0xFFE0      | 255 |  255  |  0   |                                |
| `TFT_WHITE`       |     0xFFFF      | 255 |  255  | 255  |                                |
| `TFT_ORANGE`      |     0xFDA0      | 255 |  180  |  0   |                                |
| `TFT_GREENYELLOW` |     0xB7E0      | 180 |  255  |  0   |                                |
| `TFT_PINK`        |     0xFE19      | 255 |  192  | 203  | Lighter pink,<br>was 0xFC9F    | 
| `TFT_BROWN`       |     0x9A60      | 150 |  75   |  0   |                                |                
| `TFT_GOLD`        |     0xFEA0      | 255 |  215  |  0   |                                |              
| `TFT_SILVER`      |     0xC618      | 192 |  192  | 192  |                                |             
| `TFT_SKYBLUE`     |     0x867D      | 135 |  206  | 235  |                                |            
| `TFT_VIOLET`      |     0x915C      | 180 |  46   | 226  |                                |
| `TFT_TRANSPARENT` |     0x0120      |     |       |      | This is a special 16-bit colour value that encodes to 8 bits<br/>and will then decode back to the same 16-bit value.<br/>Convenient for 8-bit and 16-bit transparent sprites.<br/>This is actually a dark green  |

## Default palette for 4-bit colour sprites

`static const uint16_t default_4bit_palette[]`

| Rank | Value           | Comment                  |
|------|-----------------|--------------------------|
| 0    | `TFT_BLACK`     | ^                        |
| 1    | `TFT_BROWN`     | \|                       |
| 2    | `TFT_RED`       | \|                       |
| 3    | `TFT_ORANGE`    | \|  Colors 0-9           |
| 4    | `TFT_YELLOW`    | \|  follow the resistor  |
| 5    | `TFT_GREEN`     | \|  color code!          |
| 6    | `TFT_BLUE`      | \|                       |
| 7    | `TFT_PURPLE`    | \|                       |
| 8    | `TFT_DARKGREY`  | \|                       |
| 9    | `TFT_WHITE`     | v                        |
| 10   | `TFT_CYAN`      | Blue+green mix           |
| 11   | `TFT_MAGENTA`   | Blue+red mix             |
| 12   | `TFT_MAROON`    | Darker red colour        |
| 13   | `TFT_DARKGREEN` | Darker green colour      |
| 14   | `TFT_NAVY`      | Darker blue colour       |
| 15   | `TFT_PINK`      |                          |
