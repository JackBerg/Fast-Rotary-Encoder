Hello & Welcome to my page

This simple Arduino code is for a Mechanical or Optical Rotary Encoder or Tactile switch with output pulse A,B.
While rotating, the code will detect the direction of rotation, upon detecting the rotation
a timing pulse is issue on 2 different output pins for each direction.

The setup (between the Rotary board and Arduino UNO) does not require any debouncing circuit, instead it's use
the detection of states and enable what I call a "one shot latching pulse" function
for each direction, the pulse use the  "_delay_ms()" function.

Note: Connections between the Rotary Encoder Board and Arduino UNO R3

 (GND/VCC inverted to use the Rotary Encoder 10k resistor as Pulldown)

              Rotary Encoder                    Arduino UNO
              GND--------------------------------VCC 5v  
              VCC--------------------------------GND  
              Switch----------not used-----------N.C.
              DT---------------------------------Digital Pin 11 "PB3"
              CLK--------------------------------Digital Pin 10 "PB2"
              

This sketch as been written under Arduino IDE 1.8.19, and tested for ATMEGA328P.

Tested also on ATTiny85 with PortBx modifications.

Youtube Video Demo:  https://www.youtube.com/watch?v=w7fJdX4Nkaw


U P D A T E : 
 *  Sketch File: "Rotary_Mech_Button_248bytes.ino"
 *  R E V I S I O N : Feb 26-2022
 *  Removed "buttonStateA,B" function, replace with bitRead(x, n) 
 *  easier coding to read single bit from PORT
 *  Sketch uses 248 bytes (0%) of program storage space.
 *  Global variables use 2 bytes (0%) of dynamic memory
 *  Added No Comments file


Any suggestion / comments are welcome.

Feel free to use this sketch, and does not contain any warranty.

Thank's for sharing





