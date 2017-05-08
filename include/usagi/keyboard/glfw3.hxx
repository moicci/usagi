#pragma once

namespace usagi::keyboard::glfw3
{
  const int glfw3_available_keys[] =
  { 32, 39
  , 44, 45, 46, 47, 48, 49
  , 50, 51, 52, 53, 54, 55, 56, 57, 59
  , 61, 65, 66, 67, 68, 69
  , 70, 71, 72, 73, 74, 75, 76, 77, 78, 79
  , 80, 81, 82, 83, 84, 85, 86, 87, 88, 89
  , 90, 91, 92, 93, 96
  , 161, 162
  , 256, 257, 258, 259
  , 260, 261, 262, 263, 264, 265, 266, 267, 268, 269
  , 280, 281, 282, 283, 284
  , 290, 291, 292, 293, 294, 295, 296, 297, 298, 299
  , 300, 301, 302, 303, 304, 305, 306, 307, 308, 309
  , 310, 311, 312, 313, 314
  , 320, 321, 322, 323, 324, 325, 326, 327, 328, 329
  , 330, 331, 332, 333, 334, 335, 336
  , 340, 341, 342, 343, 344, 345, 346, 347, 348
  };
  
  const char* glfw3_key_names[] =
  // 0 .. 9
  { "", "", "", "", "", "", "", "", "", ""
  // 10 .. 19
  , "", "", "", "", "", "", "", "", "", ""
  // 20 .. 29
  , "", "", "", "", "", "", "", "", "", ""
  // 30 .. 39
  , "", "", "space", "", "", "", "", "", "", "apostrophe"
  // 40 .. 49
  , "", "", "", "", "comma", "minus", "period", "slash", "0", "1"
  // 50 .. 59
  , "2", "3", "4", "5", "6", "7", "8", "9", "semicolon"
  // 60 .. 69
  , "", "equal", "a", "b", "c", "d", "e"
  // 70 .. 79
  , "f", "g", "h", "i", "j", "k", "l", "m", "n", "o"
  // 80 .. 89
  , "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"
  // 90 .. 99
  , "z", "left-bracket", "backslash", "right-bracket", "", "", "grave-accent", "", "", ""
  // 100 .. 109
  , "", "", "", "", "", "", "", "", "", ""
  // 110 .. 119
  , "", "", "", "", "", "", "", "", "", ""
  // 120 .. 129
  , "", "", "", "", "", "", "", "", "", ""
  // 130 .. 139
  , "", "", "", "", "", "", "", "", "", ""
  // 140 .. 149
  , "", "", "", "", "", "", "", "", "", ""
  // 150 .. 159
  , "", "", "", "", "", "", "", "", "", ""
  // 160 .. 169
  , "", "world-1", "world-2", "", "", "", "", "", "", ""
  // 170 .. 179
  , "", "", "", "", "", "", "", "", "", ""
  // 180 .. 189
  , "", "", "", "", "", "", "", "", "", ""
  // 190 .. 199
  , "", "", "", "", "", "", "", "", "", ""
  // 200 .. 209
  , "", "", "", "", "", "", "", "", "", ""
  // 210 .. 219
  , "", "", "", "", "", "", "", "", "", ""
  // 220 .. 229
  , "", "", "", "", "", "", "", "", "", ""
  // 230 .. 239
  , "", "", "", "", "", "", "", "", "", ""
  // 240 .. 249
  , "", "", "", "", "", "", "", "", "", ""
  // 250 .. 259
  , "", "", "", "", "", "", "escape", "enter", "tab", "backspace"
  // 260 .. 269
  , "insert", "delete", "right", "left", "down", "up", "page-up", "page-down", "home", "end"
  // 270 .. 279
  , "", "", "", "", "", "", "", "", "", ""
  // 280 .. 289
  , "caps-lock", "scroll-lock", "num-lock", "print-screen", "pause"
  // 290 .. 299
  , "f1", "f2", "f3", "f4", "f5", "f6", "f7", "f8", "f9", "f10"
  // 300 .. 309
  , "f11", "f12", "f13", "f14", "f15", "f16", "f17", "f18", "f19", "f20"
  // 310 .. 319
  , "f21", "f22", "f23", "f24", "f25", "", "", "", "", ""
  // 320 .. 329
  , "keypad-0", "keypad-1", "keypad-2", "keypad-3", "keypad-4", "keypad-5", "keypad-6", "keypad-7", "keypad-8", "keypad-9"
  // 330 .. 339
  , "keypad-decimal", "keypad-devide", "keypad-multiply", "keypad-subtract", "keypad-add", "keypad-enter", "keypad-equal", "", "", ""
  // 340 .. 348 ** Note: 349 is not available! **
  , "left-shift", "left-control", "left-alternate", "left-super", "right-shift", "right-control", "right-alternate", "right-super", "menu"
  };
}