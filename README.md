Hello & Welcome to my page

This Arduino Sketch is for a Mechanical or Optical Rotary Encoder or Tactile switch with A,B output signal.
a timing pulse controlled by the  "_delay_ms()" function, is send for each respective direction.

The setup does not require any debouncing circuit, instead it's use
the detection of states and enable a "one shot latching pulse" function. 

Note: Connections between the Rotary Encoder Board and Arduino UNO R3

 (GND/VCC inverted to use the Rotary Encoder 10k resistor as Pulldown)

              Rotary Encoder                    Arduino UNO
              GND--------------------------------VCC 5v  
              VCC--------------------------------GND  
              Switch----------not used-----------N.C.
              DT---------------------------------Digital Pin 11 "PB3"
              CLK--------------------------------Digital Pin 10 "PB2"
              

This sketch as been written under Arduino IDE 1.8.19, and tested for ATMEGA328P and ATTiny85 with PortBx modifications.

Youtube Video Demo:  https://www.youtube.com/watch?v=w7fJdX4Nkaw

 U P D A T E : 
 *  Sketch File: "Rotary_Mech_Button_242_bytes_No_Comments"
 *  Feb 27-2022
 *  Removed "buttonStateA,B" function, replace with bitRead(x, n) 
 *  easier coding to read single bit from PORTx
 *  Sketch uses 242 bytes (0%) of program storage space.
 *  Global variables use 2 bytes (0%) of dynamic memory.
 *  Feel free to use this sketch, without any warranty.







