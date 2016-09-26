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

#ifndef MAGICMUSICKEYBOARD_H
#define MAGICMUSICKEYBOARD_H

#include "PS2Device.h"
#include <Arduino.h>

class MagicMusicKeyboard : public PS2Device
{
public:
  MagicMusicKeyboard(uint8_t clockPin, uint8_t dataPin, uint8_t midiChannel, uint8_t noteOffset);
  ~MagicMusicKeyboard();
  bool init();
  bool update();

private:
  bool _isInitialized;
  uint8_t _midiChannel;
  uint8_t _keyArrangeType;
  uint8_t _noteOffset;
  uint8_t _transposeOffset;
  uint8_t _volume;
  uint8_t _dutyRatio;
  uint8_t _modulationRate;
  uint8_t _modulationDepth;
  uint8_t _modulationDelay;
  uint8_t _modulationWaveType;

  bool initReset();
  bool tryRead();
  bool processKey(uint8_t btCode, bool isPressed);

  void midiNoteOn(uint8_t note);
  void midiNoteOff(uint8_t note);

  void midiAllNotesOff();
  
  void changeKeyArrangement(uint8_t diff);
  void changeOctave(int8_t diff);
  void transpose(int8_t diff);
  void changeVolume(int8_t diff);
  void changeDutyRatio();
  void resetModulationSettings();
  void changeModulationRate(int8_t diff);
  void changeModulationDepth(int8_t diff);
  void changeModulationDelay(int8_t diff);
  void changeModulationWaveType(int8_t diff);
};

#endif //PS2KEYBOARD_H
