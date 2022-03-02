Hello & Welcome to my page

As a new hobby, I decided to get familiar and learn a new programming language C++, with a Arduino UNO R3, so this is my very first project. 
In the past 30 years, I did some programming with Microsoft Visual Basic, Picaxe, PBP3.0.

Thanks to many Youtubers like Ralph S.Bacon, NerdRalph and DroneBot Workshop, to name a few for helping me learning C++ and Arduino.

My new challenge to learn C++ lead me to choose Arduino for some obvious reasons as, popularity,and the availability 
of many microcontrollers available for more then 10 years, and a steady ever growing community that support it's development.

This Arduino Sketch is for a Mechanical or Optical Rotary Encoder or Tactile switch with A,B output signal.
a timing pulse controlled by the  "_delay_ms()" function, is send for each respective direction.

The setup does not require any debouncing circuit, instead it's use
the detection of states as a "one shot latching pulse".

This sketch as been written under Arduino IDE 1.8.19, and tested for ATMEGA328P and ATTiny85.

Youtube Video Demo:  https://www.youtube.com/watch?v=w7fJdX4Nkaw

 U P D A T E : Feb 28-2022
 
 *  Sketch File: "Rotary_Mech_Button_246_bytes_No_Comments"
 *  Removed "buttonStateA,B" function, replace with bitRead(x, n) 
 *  easier coding to read single bit from PORTx
 
 *  Sketch uses 246 bytes (0%) of program storage space.
 *  Global variables use 2 bytes (0%) of dynamic memory.
 *  -
 *  Added Arduino code Sketch: Rotary_Mech_Button_Arduino.ino
 *  uses 1136 bytes (3%) of program storage space.
 *  Global variables use 13 bytes (0%) of dynamic memory.

 U P D A T E : March 1 -2022

 *  Use regular connections between the Rotary Encoder MODEL: EC11 and Arduino.
 *  VCC  --------  VCC
 *  GND  --------  GND
 *  CLK  --------  PINB,2
 *  DT   --------  PINB,3
 *  SW   -- N.C.-  NOT USE
 
 U P D A T E : March 2 -2022

*  Added Rotary Schematic
*  PCB Layout 26 x 18 mm
*  
 
     
    This sketch is free to use and share, without any warranty.
     
     

