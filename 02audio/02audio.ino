#define CODESPEED 13               // speed in Words per Minute
#define DITPERIOD 1200/CODESPEED   // period of dit, in milliseconds
#define LED       13             // hardware LED pin on board
#define PITCH     700              // pitch in Hz of Morse audio
#define PIEZO     26              // pin attached to piezo element

void ditSpaces(int spaces) {       // user specifies #dits to wait
  for (int i=0; i<spaces; i++)     // count the dits...
    delay(DITPERIOD);              // no action, just mark time
}

void dit() {
  digitalWrite(LED,1);             // turn on LED
  tone(PIEZO,PITCH);               // and turn on sound
  ditSpaces(1);
  digitalWrite(LED,0);             // turn off LED
  noTone(PIEZO);                   // and turn off sound
  ditSpaces(1);                    // space between code elements
}

void dah() {
  digitalWrite(LED,1);             // turn on LED
  tone(PIEZO,PITCH);               // and turn on sound
  ditSpaces(3);                    // length of dah = 3 dits
  digitalWrite(LED,0);             // turn off LED
  noTone(PIEZO);                   // and turn off sound
  ditSpaces(1);                    // space between code elements
}

void setup() {
  pinMode(LED,OUTPUT);
}

void loop(){
  dah(); dit(); dah(); dit();      // Send “C” as an example.
  delay(1500);
}  
