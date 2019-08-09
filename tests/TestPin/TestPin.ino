/**************************************************************************
      Author:   Bruce E. Hall, w8bh.net
        Date:   07 Jul 2019
    Hardware:   STM32F103C "Blue Pill",
    Software:   Arduino IDE 1.8.9; stm32duino package @ dan.drown.org
    
 Description:   Test functionality of an individual pin.  To test:
                1) change TESTPIN define to the pin you want to test.
                2) upload the code.
                3) temporarily ground the test pin.
                4) onboard LED should flash while pin is grounded.
   
===========================================================

Mods by:  Ken, KM4NFQ "Not Fully Qualified"
Date:     9 August 2019
Hardware: Mega2560 Pro Mini
Software: Arduino IDE 1.8.9

 **************************************************************************/

#define TESTPIN   13               // change to the pin you want to test!

#define LED       13               // DONT CHANGE THIS ONE

void setup() {
  pinMode(TESTPIN, INPUT_PULLUP);    // configure test Pin as input
  pinMode(LED, OUTPUT);              // configure onboard LED
  digitalWrite(LED, HIGH);           // turn ON LED
}

void flashLED() {
  digitalWrite(LED, LOW);            // turn the LED OFF
  delay(200);                        // wait a bit
  digitalWrite(LED, HIGH);           // turn the LED ON
  delay(200);                        // wait a bit 
}

bool testPinIsGrounded()
{
  return !digitalRead(TESTPIN);
}

void loop() {
  if (testPinIsGrounded())           // if test pin is grounded...
    flashLED();                      // ...the LED will flash
}
