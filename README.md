Hello & Welcome to my page

This simple Arduino code is for a Mechanical or Optical Rotary Encoder with output pulse A,B.
While rotating, the code will detect the direction of rotation, upon detecting the rotation
a timing pulse is issue on 2 different output pins for each direction.

The setup (Arduino+Rotary) does not require any debouncing circuit, it's use instead
the detection of states and enable what I call a "one shot latching pulse" function
for each direction, the pulse use the  "_delay_ms()".

Note: Connections between the Rotary Encoder and Arduino UNO R3
      (GND/VCC inverted to use the 10k resistor as Pulldown)

              Rotary Encoder                    Arduino UNO
              GND--------------------------------VCC 5v  
              VCC--------------------------------GND  
              Switch----------not used-----------N.C.
              DT---------------------------------Digital Pin 11 "PB3"
              CLK--------------------------------Digital Pin 10 "PB2"
              
This sketch as been tested and work correctly.
Any suggestion / comments are welcome.
Feel free to use this sketch, and does not contain any warranty.

Thank's for sharing
Jack Berg.
