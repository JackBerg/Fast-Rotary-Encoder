Hello & Welcome to my page

This simple Arduino code is for a Mechanical or Optical Rotary Encoder or Tactile switch with output pulse A,B.
While rotating, the code will detect the direction of rotation, upon detecting the rotation
a timing pulse is send to either 2 output pins for each respective direction.

The setup (between the Rotary board and Arduino UNO) does not require any debouncing circuit, instead it's use
the detection of states and enable what I call a "one shot latching pulse" function for each direction
the pulse timing is controlled by the  "_delay_ms()" function.

Note: Connections between the Rotary Encoder Board and Arduino UNO R3

 (GND/VCC inverted to use the Rotary Encoder 10k resistor as Pulldown)

              Rotary Encoder                    Arduino UNO
              GND--------------------------------VCC 5v  
              VCC--------------------------------GND  
              Switch----------not used-----------N.C.
              DT---------------------------------Digital Pin 11 "PB3"
              CLK--------------------------------Digital Pin 10 "PB2"
              

This sketch as been written under Arduino IDE 1.8.19, and tested for ATMEGA328P.
Also on ATTiny85 with PortBx modifications.

Youtube Video Demo:  https://www.youtube.com/watch?v=w7fJdX4Nkaw

 U P D A T E : 
 *  Sketch File: "Rotary_Mech_Button_242_bytes_No_Comments"
 *  Feb 26-2022
 *  Removed "buttonStateA,B" function, replace with bitRead(x, n) 
 *  easier coding to read single bit from PORTx
 *  Sketch uses 244 bytes (0%) of program storage space. Maximum is 32256 bytes.
 *  Global variables use 2 bytes (0%) of dynamic memory, leaving 2046 bytes for local variables. Maximum is 2048 bytes.
 *  Feel free to use this sketch, without any warranty.

Thank's for sharing





