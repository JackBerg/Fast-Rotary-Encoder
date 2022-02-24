Hello & Welcome to my page

This simple Arduino code is for a Mechanical or Optical Rotary Encoder with TTL output pulse A,B
when connected , the code will detect the sense of rotation, upon detecting the rotation
a timing pulse is provide on 2 different output pin for each direction.

The setup (Arduino+Rotary) does not require any debouncing circuit, it's use instead
the detection of states and enable a one shot latching pulse for each direction.

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
