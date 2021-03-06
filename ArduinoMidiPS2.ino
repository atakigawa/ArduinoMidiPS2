/*
 * Copyright (c) 2016 Evan Kale
 * Email: EvanKale91@gmail.com
 * Website: www.ISeeDeadPixel.com
 *          www.evankale.blogspot.ca
 *
 * This file is part of ArduinoMidiPS2.
 *
 * ArduinoMidiPS2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "MagicMusicKeyboard.h"

//MIDI baud rate
#define SERIAL_RATE 31250

//PS2 pins
#define KBD1_CLOCK 4
#define KBD1_DATA 5
#define KBD2_CLOCK 6
#define KBD2_DATA 7
#define KBD3_CLOCK 8
#define KBD3_DATA 9
#define KBD4_CLOCK 10
#define KBD4_DATA 11

// midi channel offsets
#define KBD1_CHAN 0
#define KBD2_CHAN 1
#define KBD3_CHAN 2
#define KBD4_CHAN 3

// first note offsets
// 1-2 channel 33-108
// 3   channel 21-96
// 4-5 channel 0-127

#define KBD1_OFFSET 45
#define KBD2_OFFSET 45
#define KBD3_OFFSET 45
#define KBD4_OFFSET 35

MagicMusicKeyboard magicMusicKeyboard1(KBD1_CLOCK, KBD1_DATA, KBD1_CHAN, KBD1_OFFSET);
MagicMusicKeyboard magicMusicKeyboard2(KBD2_CLOCK, KBD2_DATA, KBD2_CHAN, KBD2_OFFSET);
MagicMusicKeyboard magicMusicKeyboard3(KBD3_CLOCK, KBD3_DATA, KBD3_CHAN, KBD3_OFFSET);
MagicMusicKeyboard magicMusicKeyboard4(KBD4_CLOCK, KBD4_DATA, KBD4_CHAN, KBD4_OFFSET);

void setup()
{
  Serial.begin(SERIAL_RATE);
  magicMusicKeyboard1.init();
  magicMusicKeyboard2.init();
  magicMusicKeyboard3.init();
  magicMusicKeyboard4.init();
}

void loop()
{
  magicMusicKeyboard1.update();
  magicMusicKeyboard2.update();
  magicMusicKeyboard3.update();
  magicMusicKeyboard4.update();
}
