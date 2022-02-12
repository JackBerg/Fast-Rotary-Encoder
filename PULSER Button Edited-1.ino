/*- File:"D:\Arduino IDE 2.0\Sketchbook\PULSER Button Edited-1\PULSER Button Edited-1.ino"
  - Chip: ATTiny85, Port 0,1,3,4 Port 2=nc
  - Editor: Arduino IDE 2.00 RC3
  - Sketch uses 570 bytes (6%) of program storage space. Maximum is 8192 bytes.
  - Global variables use 15 bytes (2%) of dynamic memory, leaving 497 bytes for local variables. Maximum is 512 bytes
  - For Optical Rotary Encoder 
  - PULSER Button / by JB Feb-9 2022
  - ROTARY PULSE OUTPUT WAVEFORM
  -    0   1  
  - A  __────____────____
  - B   ___────____────___
  - On buton/pulse A,B is Low then set  buttonDir = 0, goto main
  - .. button/pulse A = 1 and B = 0 then set buttonDir = 1
  - .. button/pulse A = 1 and B = 1 then send a Pulse
       to ledPinA or ledPinB (depending of the buttonDir 0 or 1)
  - PB0,PB1 -> LED ANODE / CATHODE -> 330r to GND / TTL output to driver
  - Vcc to -> sw-1,sw-2 -> PB3,PB4 -> 10k to GND
  */
// constants won't change. They're used here to set pin numbers:
 const int buttonPinA = 3;     // Pulse A TTL/pushbutton pin
 const int buttonPinB = 4;     // Pulse B TTL/pushbutton pin
 const int ledPinA =  0;       // LED A pin or to TTL input driver
 const int ledPinB =  1;       // LED B pin or to TTL input driver

// variables will change:
 int buttonStateA = 0;         // TTL/pushbutton A status 0/1
 int buttonStateB = 0;         // TTL/pushbutton B status 0/1
 int buttonFlag = 0;           // button Flag for one-shot Led output Pulse
 int buttonDir = 0;            // button Direction 0/1 
 
 // initialize only ounce
void setup() {
    // initialize the LED pin as an input or output:
    DDRB = B00111; // PORT B 0=IN  1=OUT  (B=543210)
}

//main program loop
void loop() {
main:
     // read the status of the TTL/ A or B
     buttonStateA = digitalRead(buttonPinA);
     buttonStateB = digitalRead(buttonPinB);

     // if both sw = low -> set buttonDir = 0,buttonFlag = 0, goto main
     if (buttonStateA == LOW && buttonStateB == LOW ) {
       //if (PINB == 0) {
      buttonDir = 0;buttonFlag = 0 ;goto main; }
      // if A = 1 and B = 0 then buttonDir = 1
      else if (buttonStateA == HIGH && buttonStateB == LOW) {
         buttonDir = 1; 
  }
// check the buttonState
   if (buttonStateA == HIGH && buttonStateB == HIGH && buttonFlag == LOW) {
        //if (((PINB & (1 << PINB3)) && (PINB & (1 << PINB4))) &&  (buttonFlag == LOW)) {
             buttonFlag = 1;  // setup the one-shot Flag , set to 0 to retrigger
           if (buttonDir == LOW){  //send a pulse to ledPinA
         PORTB |=B000001; _delay_ms(50); PORTB &=B000000; 
         }
           else if (buttonDir == HIGH) { //send a pulse to ledPinB
         PORTB |=B000010; _delay_ms(50); PORTB &=B000000;
         }
    }
}

