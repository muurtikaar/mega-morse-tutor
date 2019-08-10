# W8BH Morse Tutor for the  Mega2560 Pro Mini

Source code for the Bruce Hall W8BH Morse Tutor, 
ported to the Mega 2560 Pro Mini.

## LICENSE

This source code is released under the MIT License. 

Copyright (c) 2019 Bruce E. Hall

Permission is hereby granted, free of charge, to any person 
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without 
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the 
Software is furnished to do so, subject to the following 
conditions:

The above copyright notice and this permission notice shall be 
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR 
OTHER DEALINGS IN THE SOFTWARE.

## Schematics

The schematics show an LM2596 buck converter and a PAM8403 Amplifier module.

## Wiring Diagrams

The wiring diagrams show a simple voltage regulator using a 78L05 IC and a couple of electrolytic capcitors. This is from building Stand-alone Arduinos. The transistor amp was borrowed from the schematic of the K3NG Keyer. These just show that brand new modules do not have to be purchased in order to build this circuit.

## Porting the W8BH Morse Tutor to a Mega2560

The file pin-assignments.txt shows the original Blue Pill pins used, and the corresponding Mega2560 pins that I used to 'port' the W8BH Morse Tutor to the Mega2560. I used a RobotDyn Mega 2560 Pro Mini without a USB port. Your Mega 2560 Pro Mini may have a USB port. Or, you may use a Mega 2560 R3 full size development board. 

## RESOURCES

Full 8 part Morse Tutor Tutorial (PDF) available at: 
http://w8bh.net

Original source code for Blue Pill development board at: 
https://github.com/bhall66/morse-tutor
