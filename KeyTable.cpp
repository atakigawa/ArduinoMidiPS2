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

#include "KeyTable.h"
#include "BTKeyCodes.h"

// convert from raw keycode to midi note number (defined in BTKeyCodes.h).
uint8_t KeyTable::getBTCode(uint8_t ps2ScanCode, bool isExtendedKey)
{
  if (isExtendedKey)
    return pgm_read_byte(g_extendedKeyTable + ps2ScanCode);
  else
    return pgm_read_byte(g_standardKeyTable + ps2ScanCode);
}

//This is a subset of PS/2 scan code set 3 for MagicMusicKeyboard

const PROGMEM uint8_t g_standardKeyTable[] =
{
  BTKC_NONE,      //0x00 (0)
  BTKC_NONE,      //0x01 (1)
  BTKC_NONE,      //0x02 (2)
  BTKC_NONE,      //0x03 (3)
  BTKC_NONE,      //0x04 (4)
  BTKC_NONE,      //0x05 (5)
  BTKC_NONE,      //0x06 (6)
  BTKC_F1,        //0x7 (7)
  BTKC_NONE,      //0x08 (8)
  BTKC_NONE,      //0x09 (9)
  BTKC_NONE,      //0x0a (10)
  BTKC_NONE,      //0x0b (11)
  BTKC_NONE,      //0x0c (12)
  BTKC_NONE,      //0x0d (13)
  BTKC_NONE,      //0x0e (14)
  BTKC_F2,        //0xF (15)
  BTKC_NONE,      //0x10 (16)
  BTKC_NONE,      //0x11 (17)
  BTKC_NONE,      //0x12 (18)
  BTKC_NONE,      //0x13 (19)
  BTKC_NONE,      //0x14 (20)
  BTKC_Q, //0x15 (21)
  BTKC_1, //0x16 (22)
  BTKC_F3,        //0x17 (23)
  BTKC_NONE,      //0x18 (24)
  BTKC_NONE,      //0x19 (25)
  BTKC_Z, //0x1A (26)
  BTKC_S, //0x1B (27)
  BTKC_A, //0x1C (28)
  BTKC_W, //0x1D (29)
  BTKC_2, //0x1E (30)
  BTKC_F4,        //0x1F (31)
  BTKC_NONE,      //0x20 (32)
  BTKC_C, //0x21 (33)
  BTKC_X, //0x22 (34)
  BTKC_D, //0x23 (35)
  BTKC_E, //0x24 (36)
  BTKC_4, //0x25 (37)
  BTKC_3, //0x26 (38)
  BTKC_F5,        //0x27 (39)
  BTKC_NONE,      //0x28 (40)
  BTKC_SPACE,     //0x29 (41)
  BTKC_V, //0x2A (42)
  BTKC_F, //0x2B (43)
  BTKC_T, //0x2C (44)
  BTKC_R, //0x2D (45)
  BTKC_5, //0x2E (46)
  BTKC_F6,        //0x2F (47)
  BTKC_NONE,      //0x30 (48)
  BTKC_N, //0x31 (49)
  BTKC_B, //0x32 (50)
  BTKC_H, //0x33 (51)
  BTKC_G, //0x34 (52)
  BTKC_Y, //0x35 (53)
  BTKC_6, //0x36 (54)
  BTKC_F7,        //0x37 (55)
  BTKC_NONE,      //0x38 (56)
  BTKC_NONE,      //0x39 (57)
  BTKC_M, //0x3A (58)
  BTKC_J, //0x3B (59)
  BTKC_U, //0x3C (60)
  BTKC_7, //0x3D (61)
  BTKC_8, //0x3E (62)
  BTKC_F8,        //0x3F (63)
  BTKC_NONE,      //0x40 (64)
  BTKC_NONE,      //0x41 (65)
  BTKC_K, //0x42 (66)
  BTKC_I, //0x43 (67)
  BTKC_O, //0x44 (68)
  BTKC_0, //0x45 (69)
  BTKC_9, //0x46 (70)
  BTKC_F9,        //0x47 (71)
  BTKC_NONE,      //0x48 (72)
  BTKC_NONE,      //0x49 (73)
  BTKC_KEYPAD_DIV,//0x4a (74)
  BTKC_L,         //0x4B (75)
  BTKC_NONE,      //0x4c (76)
  BTKC_P,         //0x4D (77)
  BTKC_KEYPAD_SUB,//0x4e (78)
  BTKC_F10,       //0x4F (79)
  BTKC_NONE,      //0x50 (80)
  BTKC_NONE,      //0x51 (81)
  BTKC_NONE,      //0x52 (82)
  BTKC_NONE,      //0x53 (83)
  BTKC_NONE,      //0x54 (84)
  BTKC_NONE,      //0x55 (85)
  BTKC_F11,       //0x56 (86)
  BTKC_NONE,      //0x57 (87)
  BTKC_NONE,      //0x58 (88)
  BTKC_NONE,      //0x59 (89)
  BTKC_RETURN,     //0x5A (90)
  BTKC_NONE,      //0x5b (91)
  BTKC_NONE,      //0x5c (92)
  BTKC_NONE,      //0x5d (93)
  BTKC_F12,       //0x5E (94)
  BTKC_NONE,      //0x5f (95)
  BTKC_ARROW_DOWN,        //0x60 (96)
  BTKC_ARROW_LEFT,        //0x61 (97)
  BTKC_NONE,      //0x62 (98)
  BTKC_ARROW_UP,  //0x63 (99)
  BTKC_NONE,      //0x64 (100)
  BTKC_NONE,      //0x65 (101)
  BTKC_BACKSPACE, //0x66 (102)
  BTKC_NONE,      //0x67 (103)
  BTKC_NONE,      //0x68 (104)
  BTKC_KEYPAD_1,  //0x69 (105)
  BTKC_ARROW_RIGHT,       //0x6A (106)
  BTKC_KEYPAD_4,  //0x6B (107)
  BTKC_KEYPAD_7,  //0x6C (108)
  BTKC_NONE,      //0x6d (109)
  BTKC_NONE,      //0x6e (110)
  BTKC_NONE,      //0x6f (111)
  BTKC_NONE,      //0x70 (112)
  BTKC_NONE,      //0x71 (113)
  BTKC_KEYPAD_2,  //0x72 (114)
  BTKC_KEYPAD_5,  //0x73 (115)
  BTKC_KEYPAD_6,  //0x74 (116)
  BTKC_KEYPAD_8,  //0x75 (117)
  BTKC_NONE,      //0x76 (118)
  BTKC_NONE,      //0x77 (119)
  BTKC_NONE,      //0x78 (120)
  BTKC_NONE,      //0x79 (121)
  BTKC_KEYPAD_3,  //0x7A (122)
  BTKC_NONE,      //0x7b (123)
  BTKC_KEYPAD_ADD,//0x7c (124)
  BTKC_KEYPAD_9,  //0x7D (125)
  BTKC_KEYPAD_MUL,//0x7e (126)
  BTKC_NONE,      //0x7f (127)
  BTKC_NONE,      //0x80 (128)
  BTKC_NONE,      //0x81 (129)
  BTKC_NONE,      //0x82 (130)
  BTKC_NONE,      //0x83 (131)
  BTKC_NONE,      //0x84 (132)
  BTKC_NONE,      //0x85 (133)
  BTKC_NONE,      //0x86 (134)
  BTKC_NONE,      //0x87 (135)
  BTKC_NONE,      //0x88 (136)
  BTKC_NONE,      //0x89 (137)
  BTKC_NONE,      //0x8a (138)
  BTKC_NONE,      //0x8b (139)
  BTKC_NONE,      //0x8c (140)
  BTKC_NONE,      //0x8d (141)
  BTKC_NONE,      //0x8e (142)
  BTKC_NONE,      //0x8f (143)
  BTKC_NONE,      //0x90 (144)
  BTKC_NONE,      //0x91 (145)
  BTKC_NONE,      //0x92 (146)
  BTKC_NONE,      //0x93 (147)
  BTKC_NONE,      //0x94 (148)
  BTKC_NONE,      //0x95 (149)
  BTKC_NONE,      //0x96 (150)
  BTKC_NONE,      //0x97 (151)
  BTKC_NONE,      //0x98 (152)
  BTKC_NONE,      //0x99 (153)
  BTKC_NONE,      //0x9a (154)
  BTKC_NONE,      //0x9b (155)
  BTKC_NONE,      //0x9c (156)
  BTKC_NONE,      //0x9d (157)
  BTKC_NONE,      //0x9e (158)
  BTKC_NONE,      //0x9f (159)
  BTKC_NONE,      //0xa0 (160)
  BTKC_NONE,      //0xa1 (161)
  BTKC_NONE,      //0xa2 (162)
  BTKC_NONE,      //0xa3 (163)
  BTKC_NONE,      //0xa4 (164)
  BTKC_NONE,      //0xa5 (165)
  BTKC_NONE,      //0xa6 (166)
  BTKC_NONE,      //0xa7 (167)
  BTKC_NONE,      //0xa8 (168)
  BTKC_NONE,      //0xa9 (169)
  BTKC_NONE,      //0xaa (170)
  BTKC_NONE,      //0xab (171)
  BTKC_NONE,      //0xac (172)
  BTKC_NONE,      //0xad (173)
  BTKC_NONE,      //0xae (174)
  BTKC_NONE,      //0xaf (175)
  BTKC_NONE,      //0xb0 (176)
  BTKC_NONE,      //0xb1 (177)
  BTKC_NONE,      //0xb2 (178)
  BTKC_NONE,      //0xb3 (179)
  BTKC_NONE,      //0xb4 (180)
  BTKC_NONE,      //0xb5 (181)
  BTKC_NONE,      //0xb6 (182)
  BTKC_NONE,      //0xb7 (183)
  BTKC_NONE,      //0xb8 (184)
  BTKC_NONE,      //0xb9 (185)
  BTKC_NONE,      //0xba (186)
  BTKC_NONE,      //0xbb (187)
  BTKC_NONE,      //0xbc (188)
  BTKC_NONE,      //0xbd (189)
  BTKC_NONE,      //0xbe (190)
  BTKC_NONE,      //0xbf (191)
  BTKC_NONE,      //0xc0 (192)
  BTKC_NONE,      //0xc1 (193)
  BTKC_NONE,      //0xc2 (194)
  BTKC_NONE,      //0xc3 (195)
  BTKC_NONE,      //0xc4 (196)
  BTKC_NONE,      //0xc5 (197)
  BTKC_NONE,      //0xc6 (198)
  BTKC_NONE,      //0xc7 (199)
  BTKC_NONE,      //0xc8 (200)
  BTKC_NONE,      //0xc9 (201)
  BTKC_NONE,      //0xca (202)
  BTKC_NONE,      //0xcb (203)
  BTKC_NONE,      //0xcc (204)
  BTKC_NONE,      //0xcd (205)
  BTKC_NONE,      //0xce (206)
  BTKC_NONE,      //0xcf (207)
  BTKC_NONE,      //0xd0 (208)
  BTKC_NONE,      //0xd1 (209)
  BTKC_NONE,      //0xd2 (210)
  BTKC_NONE,      //0xd3 (211)
  BTKC_NONE,      //0xd4 (212)
  BTKC_NONE,      //0xd5 (213)
  BTKC_NONE,      //0xd6 (214)
  BTKC_NONE,      //0xd7 (215)
  BTKC_NONE,      //0xd8 (216)
  BTKC_NONE,      //0xd9 (217)
  BTKC_NONE,      //0xda (218)
  BTKC_NONE,      //0xdb (219)
  BTKC_NONE,      //0xdc (220)
  BTKC_NONE,      //0xdd (221)
  BTKC_NONE,      //0xde (222)
  BTKC_NONE,      //0xdf (223)
  BTKC_NONE,      //0xe0 (224)
  BTKC_NONE,      //0xe1 (225)
  BTKC_NONE,      //0xe2 (226)
  BTKC_NONE,      //0xe3 (227)
  BTKC_NONE,      //0xe4 (228)
  BTKC_NONE,      //0xe5 (229)
  BTKC_NONE,      //0xe6 (230)
  BTKC_NONE,      //0xe7 (231)
  BTKC_NONE,      //0xe8 (232)
  BTKC_NONE,      //0xe9 (233)
  BTKC_NONE,      //0xea (234)
  BTKC_NONE,      //0xeb (235)
  BTKC_NONE,      //0xec (236)
  BTKC_NONE,      //0xed (237)
  BTKC_NONE,      //0xee (238)
  BTKC_NONE,      //0xef (239)
  BTKC_NONE,      //0xf0 (240)
  BTKC_NONE,      //0xf1 (241)
  BTKC_NONE,      //0xf2 (242)
  BTKC_NONE,      //0xf3 (243)
  BTKC_NONE,      //0xf4 (244)
  BTKC_NONE,      //0xf5 (245)
  BTKC_NONE,      //0xf6 (246)
  BTKC_NONE,      //0xf7 (247)
  BTKC_NONE,      //0xf8 (248)
  BTKC_NONE,      //0xf9 (249)
  BTKC_NONE,      //0xfa (250)
  BTKC_NONE,      //0xfb (251)
  BTKC_NONE,      //0xfc (252)
  BTKC_NONE,      //0xfd (253)
  BTKC_NONE      //0xfe (254)
};

const PROGMEM uint8_t g_extendedKeyTable[] =
{
  0
};
