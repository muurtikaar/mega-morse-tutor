/**************************************************************************
      Author:   Bruce E. Hall, w8bh.net
        Date:   30 Jun 2019
    Hardware:   STM32F103C "Blue Pill",
    Software:   Arduino IDE 1.8.9; stm32duino package @ dan.drown.org
		          
 Description:   Basic Blink sketch, adopted for the Blue Pill
***************************************************************************/
/**************************************************************************
Modification:   Ken, KM4NFQ "Not Fully Qualified"
        Date:   9 Jul 2019
    Hardware:   RobotDyn Mega2560 Pro Mini (non-USB version)
                programmed with a USBtoSerial adapter
                Software:   Arduino IDE 1.8.9
 Description:   'port' to Mega2560 Pro Mini from Blue Pill
                This program is the 'Hello World' for the Arduino IDE.
                There is a built-in LED on the board connected to 
                digital pin 13. On the Mega2560 Pro Mini, the LED is 
                turned ON with a '1' and turned OFF with a '0'. That 
                logic is inverse on the "Blue Pill".
                So the changes made to this code were to change the 
		1's to 0's, and the 0's to 1's.
                I use a RobotDyn Mega2560 Pro Mini which does not have 
		a USB port. So I used a USB2Serial Adapter to program 
		the board with this sketch. This sketch is from Part 2
                of Bruce Hall's W8BH Morse Tutor Tutorial.
                More information at: w8bh.net
*/
#define CODESPEED 13               // speed in Words per Minute
#define DITPERIOD 1200/CODESPEED   // period of dit, in milliseconds
#define LED       13               // hardware LED pin on board

void ditSpaces(int spaces) {       // user specifies #dits to wait
  for (int i=0; i<spaces; i++)     // count the dits...
    delay(DITPERIOD);              // no action, just mark time
}

void dit() {
  digitalWrite(LED,1); // CHG turn on LED
  ditSpaces(1);
  digitalWrite(LED,0); // CHG turn off LED
  ditSpaces(1);        // space between code elements
}

void dah() {
  digitalWrite(LED,1); // CHG turn on LED
  ditSpaces(3);        // length of dah = 3 dits
  digitalWrite(LED,0); // CHG turn off LED
  ditSpaces(1);        // space between code elements
}

void setup() {
  pinMode(LED,OUTPUT);
}

void loop(){
  dah(); dit(); dah(); dit(); // CHG Send “C” as an example.
  delay(1500);
}
