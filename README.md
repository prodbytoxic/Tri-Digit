# *Tri-Digit*
EEG &amp; servo driver code for the *Tri-Digit* — a non-invasive prosthetic arm entered into the BEST Engineering competition

Attempts to utilize the serial output of the **Mattel Mindflex™** as an axis to move a servo that drives the movement of the prosthetic through the usage of Arduino™ technology

## Usage & Dependencies
The Arduino IDE alongside the Brain & Servo libraries are required to run this project, located at `C:\Program Files\Arduino IDE` or `{Arduino IDE install folder}/libraries`. 

You may find these at:
- [Arduino](https://github.com/arduino/arduino-ide) - IDE to run the .ino file included
- [Brain](https://github.com/kitschpatrol/Brain) - Parser library for the serial output on the T pin
- [Servo](https://github.com/arduino-libraries/Servo/tree/master) - Library to communicate with the servo (located on pin 7)
