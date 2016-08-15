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

#ifndef BTKEYCODES_H
#define BTKEYCODES_H

//modifier codes
#define BTMC_NONE 0x00
#define BTMC_CTRL_LEFT 0x01
#define BTMC_SHIFT_LEFT 0x02
#define BTMC_ALT_LEFT 0x04
#define BTMC_GUI_LEFT 0x08
#define BTMC_CTRL_RIGHT 0x10
#define BTMC_SHIFT_RIGHT 0x20
#define BTMC_ALT_RIGHT 0x40
#define BTMC_GUI_RIGHT 0x80

//consumer codes
#define BTCC_NONE 0x0000
#define BTCC_HOME 0x0001
#define BTCC_EMAIL 0x0002
#define BTCC_SEARCH 0x0004
#define BTCC_KEYBOARD_LAYOUT 0x0008
#define BTCC_VOLUME_UP 0x0010
#define BTCC_VOLUME_DOWN 0x0020
#define BTCC_MUTE 0x0040
#define BTCC_PLAY_PAUSE 0x0080
#define BTCC_NEXT_TRACK 0x0100
#define BTCC_PREVIOUS_TRACK 0x0200
#define BTCC_STOP 0x0400
#define BTCC_EJECT 0x0800
#define BTCC_FAST_FORWARD 0x1000
#define BTCC_REWIND 0x2000
#define BTCC_STOP_EJECT 0x4000
#define BTCC_BROWSER 0x8000

// 1 <= x < 60 music notes
// 61 <= x     control notes
#define MUSIC_NOTE_MIN 1
#define MUSIC_NOTE_MAX 59

//keycodes (common)
#define BTKC_NONE 0
#define BTKC_BACKSPACE 60
#define BTKC_ESCAPE 70
#define BTKC_ARROW_LEFT 71
#define BTKC_ARROW_RIGHT 72
#define BTKC_KEYPAD_ADD 73
#define BTKC_KEYPAD_0 74
#define BTKC_KEYPAD_1 75
#define BTKC_TAB 0
#define BTKC_EUROPE_1 0
#define BTKC_GRAVE 0
#define BTKC_CAPS_LOCK 0
#define BTKC_PRINT_SCREEN 0
#define BTKC_SCROLL_LOCK 0
#define BTKC_PAUSE 0
#define BTKC_INSERT 0
#define BTKC_HOME 0
#define BTKC_PAGE_UP 0
#define BTKC_DELETE 0
#define BTKC_END 0
#define BTKC_PAGE_DOWN 0
#define BTKC_ARROW_DOWN 0
#define BTKC_ARROW_UP 0
#define BTKC_NUM_LOCK 0
#define BTKC_KEYPAD_DIV 0
#define BTKC_KEYPAD_MUL 0
#define BTKC_KEYPAD_SUB 0
#define BTKC_KEYPAD_ENTER 0
#define BTKC_KEYPAD_DOT 0
#define BTKC_KEYPAD_2 0
#define BTKC_KEYPAD_3 0
#define BTKC_KEYPAD_4 0
#define BTKC_KEYPAD_5 0
#define BTKC_KEYPAD_6 0
#define BTKC_KEYPAD_7 0
#define BTKC_KEYPAD_8 0
#define BTKC_KEYPAD_9 0
#define BTKC_EUROPE_2 0
#define BTKC_APPLICATION 0
#define BTKC_POWER 0
#define BTKC_KEYPAD_EQUAL 0
#define BTKC_F13 0
#define BTKC_F14 0
#define BTKC_F15 0

// for keyboard arrangemnt type 0

#define BTKC0_Z 1
#define BTKC0_X 3
#define BTKC0_C 5
#define BTKC0_V 6
#define BTKC0_B 8
#define BTKC0_N 10
#define BTKC0_M 12
#define BTKC0_COMMA 13
#define BTKC0_PERIOD 15
#define BTKC0_SLASH 17
#define BTKC0_BACKSLASH 0
#define BTKC0_JP_UNDERSCORE 18

#define BTKC0_A 0
#define BTKC0_S 2
#define BTKC0_D 4
#define BTKC0_F 0
#define BTKC0_G 7
#define BTKC0_H 9
#define BTKC0_J 11
#define BTKC0_K 0
#define BTKC0_L 14
#define BTKC0_SEMICOLON 16
#define BTKC0_APOSTROPHE 0

#define BTKC0_Q 13
#define BTKC0_W 15
#define BTKC0_E 17
#define BTKC0_R 18
#define BTKC0_T 20
#define BTKC0_Y 22
#define BTKC0_U 24
#define BTKC0_I 25
#define BTKC0_O 27
#define BTKC0_P 29
#define BTKC0_BRACKET_LEFT 30
#define BTKC0_BRACKET_RIGHT 32

#define BTKC0_1 0
#define BTKC0_2 14
#define BTKC0_3 16
#define BTKC0_4 0
#define BTKC0_5 19
#define BTKC0_6 21
#define BTKC0_7 23
#define BTKC0_8 0
#define BTKC0_9 26
#define BTKC0_0 28
#define BTKC0_MINUS 0
#define BTKC0_EQUAL 31

#define BTKC0_F1 25
#define BTKC0_F2 26
#define BTKC0_F3 27
#define BTKC0_F4 28
#define BTKC0_F5 29
#define BTKC0_F6 30
#define BTKC0_F7 31
#define BTKC0_F8 32
#define BTKC0_F9 33
#define BTKC0_F10 34
#define BTKC0_F11 35
#define BTKC0_F12 36

#define BTKC0_RETURN 0
#define BTKC0_SPACE 0


// for keyboard arrangemnt type 1
#define BTKC1_1 1
#define BTKC1_Q 2
#define BTKC1_A 3
#define BTKC1_Z 4

#define BTKC1_2 5
#define BTKC1_W 6
#define BTKC1_S 7
#define BTKC1_X 8

#define BTKC1_3 9
#define BTKC1_E 10
#define BTKC1_D 11
#define BTKC1_C 12

#define BTKC1_4 13
#define BTKC1_R 14
#define BTKC1_F 15
#define BTKC1_V 16

#define BTKC1_5 17
#define BTKC1_T 18
#define BTKC1_G 19
#define BTKC1_B 20

#define BTKC1_6 21
#define BTKC1_Y 22
#define BTKC1_H 23
#define BTKC1_N 24

#define BTKC1_7 25
#define BTKC1_U 26
#define BTKC1_J 27
#define BTKC1_M 28

#define BTKC1_8 29
#define BTKC1_I 30
#define BTKC1_K 31
#define BTKC1_COMMA 32

#define BTKC1_9 33
#define BTKC1_O 34
#define BTKC1_L 35
#define BTKC1_PERIOD 36

#define BTKC1_0 37
#define BTKC1_P 38
#define BTKC1_SEMICOLON 39
#define BTKC1_SLASH 40

#define BTKC1_MINUS 41
#define BTKC1_BRACKET_LEFT 42
#define BTKC1_APOSTROPHE 43

#define BTKC1_EQUAL 44
#define BTKC1_BRACKET_RIGHT 45

#define BTKC1_F1 46
#define BTKC1_F2 47
#define BTKC1_F3 48
#define BTKC1_F4 49
#define BTKC1_F5 50
#define BTKC1_F6 51
#define BTKC1_F7 52
#define BTKC1_F8 53
#define BTKC1_F9 54
#define BTKC1_F10 55
#define BTKC1_F11 56
#define BTKC1_F12 57
#define BTKC1_RETURN 58
#define BTKC1_SPACE 59
#define BTKC1_BACKSLASH 0

//highest bit masked with 1 is a virtual keycode
//ie, 0x80 = 1000000b

//0x80 to 0x87 are modifer keys
// the lower 7 bits defines how much 0x1 is shifted left to get the modifier code
// ie) BTKC_ALT_LEFT = 0x82 (10000010b)
//       lower 7 bits = 0x02 (0000010b)
//       0x1 << 2 = 100b = 0x04 = BTMC_ALT_LEFT
#define BTKC_CTRL_LEFT 0x80
#define BTKC_SHIFT_LEFT 0x81
#define BTKC_ALT_LEFT 0x82
#define BTKC_GUI_LEFT 0x83
#define BTKC_CTRL_RIGHT 0x84
#define BTKC_SHIFT_RIGHT 0x85
#define BTKC_ALT_RIGHT 0x86
#define BTKC_GUI_RIGHT 0x87

//0xC0 to 0xD0 are consumer keys
// the lower 6 bits defines how much 0x1 is shifted left to get the 2 byte consumer code
// ie) BTKC_VOLUME_UP = 0xC4 (11000100b)
//       lower 6 bits = 0x04 (000100b)
//       0x1 << 4 = 10000b = 0x0010 = BTCC_VOLUME_UP
//consumer codes
#define BTKC_HOMEPAGE 0xC0
#define BTKC_EMAIL 0xC1
#define BTKC_SEARCH 0xC2
#define BTKC_KEYBOARD_LAYOUT 0xC3
#define BTKC_VOLUME_UP 0xC4
#define BTKC_VOLUME_DOWN 0xC5
#define BTKC_MUTE 0xC6
#define BTKC_PLAY_PAUSE 0xC7
#define BTKC_NEXT_TRACK 0xC8
#define BTKC_PREVIOUS_TRACK 0xC9
#define BTKC_STOP 0xCA
#define BTKC_EJECT 0xCB
#define BTKC_FAST_FORWARD 0xCD
#define BTKC_REWIND 0xCE
#define BTKC_STOP_EJECT 0xCF
#define BTKC_BROWSER 0xD0

//0xE0 to 0xE2 are system keys
#define BTKC_SYSTEM_POWER 0xE0 //0x81
#define BTKC_SYSTEM_SLEEP 0xE1 //0x82
#define BTKC_SYSTEM_WAKE 0xE2 //0x83


#endif //BTKEYCODES_H
