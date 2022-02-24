Hello & Welcome to my page
this simple Arduino code is for a Optical Rotary Encoder with TTL output pulse A,B
when connected , the code will detect the sense of rotation, upon detecting a left or right rotation
a timing pulse is provide on 2 different output pin.
This setup (Arduino+Rotary) does not require any debouncing circuit, it's use instead
the states of input A and B as switch or TTL driver to detect and enable a one shot latching pulse on 
either direction.
Feel free to use theses codes, and does not contain any warranty.

Thank's for sharing


here's the code:
-----------------------------

/* File:"D:\Arduino1819\Arduino\Sketchbook\Rotary_Mech_Button.ino\Rotary_Mech_Button.ino.ino"
 * Arduino IDE 1.8.19         *  By:HASHEM & J.Berg Feb-2022
 * Board: Arduino UNO R3
 * Sketch uses 2234 bytes (6%) of program storage space. Maximum is 32256 bytes.
 * Global variables use 206 bytes (10%) of dynamic memory, leaving 1842 bytes for local variables. Maximum is 2048 bytes.
 *  Mechanical Rotary Encoder  (Direction+Pulse Encoder Only)
 * >>>(*Rotary Board VCC AND GND INVERTED TO USE ONBOARD 10K RESISTOR AS PULLDOWN)<<<
 *   ***** READ CAREFULLY *****   > > > P I N ' S    C O N N E C T I O N S   <  < <
 *  Mechanical Rotary                     Arduino UNO r3
 *      * GND  -----------------------------   VCC  
 *      * VCC  -----------------------------   GND
 *        SW               N.C.                NOT USED
 *        DT   -----------------------------  (PB3) DIGITAL PIN 11
 *        CLK  -----------------------------  (PB2) DIGITAL PIN 10
*/
// constants won't change. They're used here to set pin numbers:
 const byte buttonPinA = 6;   //digital pin 10 = PB2  Rotary CLK
 const byte buttonPinB = 7;   //digital pin 11 = PB3  Rotary DT
 const byte ledPinA =  8;      //digital pin 8 = PB0  Led A
 const byte ledPinB =  9;      //digital pin 9 = PB1  Led B

// variables will change
 byte buttonStateA = 0;         // Tactile Switch/TTL or pushbutton A status 0/1
 byte buttonStateB = 0;         // Tactile Switch/TTL or pushbutton B status 0/1
 byte buttonFlag = 0;           // button Flag for one-shot Latch/Trigger Led Pulse
 byte buttonDir = 0;            // button Direction 0/1 
 byte BDir = 0;                 // button direction counter
 char buffer[40];               // sprintf() "Characters buffer = string + var" = (equal or greater)
  
// initialize only ounce
void setup() {
// initialize the LED pin as an input or output:
    DDRB = B00000011; // PORT B 0=IN  1=OUT  (B=76543210)
//PORTB =B00011000; // 1= PULLUP 0= NO PULLUP
    Serial.begin(9600);
}

//main program loop
void loop() {
main:
// read the status of the Button/Rotary/TTL as A or B
buttonStateA = digitalRead(buttonPinA);
buttonStateB = digitalRead(buttonPinB);

// if both A&B = Low then set Direction=0,Flag=0 goto main
if (buttonStateA == LOW && buttonStateB == LOW ) {
   buttonDir = 0;buttonFlag = 0;goto main; 
  }

// Set buttonDir to 1
  else if (buttonStateA == HIGH && buttonStateB == LOW) {
          buttonDir = 1; 
   }

// check the buttonStateA,B + one Shot Latch/Trigger (buttonFlag)
  if (buttonStateA == HIGH && buttonStateB == HIGH  &&  buttonFlag == LOW) {    
           buttonFlag = 1; BDir++;
           if (buttonDir == LOW){  
           PORTB |=B000001; _delay_ms(10); PORTB &=B000000;
           }
           else if (buttonDir == HIGH) { 
           PORTB |=B000010; _delay_ms(10); PORTB &=B000000;    
           }

// Serial Terminal counter+messages output           
    if (BDir <256){           
  sprintf(buffer,"Direction : %d and count : %d",buttonDir, BDir);
  Serial.println(buffer);
      }
      else { BDir=0;
      }
   }
}






