# ArduinoMidiPS2

Inspired by  
[https://github.com/evankale/ArduinoMidiPS2](https://github.com/evankale/ArduinoMidiPS2)  
(The demo video is found [here](https://www.youtube.com/watch?v=NtWRIHYDzWQ))

Original functionalities

- Turn PS2 keyboards into MIDI controllers!
- Able to connect up to 4 keyboards on the Arduino UNO

This repository further adds some control changes and miscellaneous functionalities shown below.

## Control Changes

* Volume
	* Page Up
	* Page Down
* Transpose
	* Up Arrow
	* Down Arrow
* Octave Shift
	* Left Arrow
	* Right Arrow
* Duty Ratio
	* Num Pad Plus
* Modulation Rate
	* Home
	* End
* Modulation Wave Type
	* Insert
	* Delete
* All Notes Off
	* Backspace

## Miscs

* Key Arrangement Type
	* Num Pad 0
		* Piano Arrangement
	* Num Pad 1
		* Guitar (or Bass) Arrangement
* Reset Keyboard
	* Esc

## Notes
* I used this repository to play sounds on famicon, using a custom ROM called FAMIMIMIDI (which is not sold anymore at this time of writing), so control change numbers are set to fit FAMIMIMIDI spec. Take a look at the source code and change it when trying to use this repository for other targets.
* I used [this](https://www.amazon.co.jp/dp/B005LL9IYC) Japanese keyboard when mapping keycode to midi notes. Different keyboards may emit different keycodes.

## Photos

<img src="images/001.png" width="400" />
<img src="images/002.png" width="400" />