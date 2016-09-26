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
	* Num Pad Add (+)
	* Num Pad Return (-)
* Transpose
	* Up Arrow (+1)
	* Down Arrow (-1)
* Octave Shift
	* Left Arrow (-1 octave)
	* Right Arrow (+1 octave)
* Duty Ratio
	* Return (cyclic change)
* Modulation Rate
	* Page Up (+)
	* Page Down (-)
* Modulation Depth
	* Home (+)
	* End (-)
* Modulation Delay
	* Insert (+)
	* Delete (-)
* Modulation Wave Type
	* Print Screen (back)
	* Scroll (next)
* Reset Modulation Settings
	* Pause/Break
* All Notes Off
	* Backspace

## Miscs

* Key Arrangement Type
	* Num Pad 0
		* Piano Arrangement
	* Num Pad Dot
		* Guitar (or Bass) Arrangement
* Reset Keyboard
	* Esc

## Notes
* I used this repository to play sounds on famicon, using a custom ROM called FAMIMIMIDI (which is not sold anymore at this time of writing), so control change numbers are set to fit FAMIMIMIDI spec. Take a look at the source code and change it when trying to use this repository for other targets.
* I used [this](https://www.amazon.co.jp/dp/B005LL9IYC) Japanese keyboard when mapping keycode to midi notes. Different keyboards may emit different keycodes.

## Photos

<img src="images/001.png" width="400" />
<img src="images/002.png" width="400" />