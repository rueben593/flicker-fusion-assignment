# flicker-fusion-assignment
## Flicker Fusion Threshold Assignment Project Report
### 1.Introduction

**“The flicker fusion threshold (or flicker fusion rate) is a concept in the psychophysics of vision. It is defined as the frequency at which an intermittent light stimulus appears.
It is defined as the frequency at which an intermittent light stimulus appears
to be completely steady to the average human observer.”
In this assignment I constructed the circuit using Teensy 3.2 micro controller and a push button,led,resistor.When we upload the program the inbuilt.Push button connected to the 10th pin of the teensy
led blinks in teensy.When the person which cannot see the blinking in teensy,then press the push button.Then the set blink frequency can
seen in a serial monitor on a connected pc.

### 2.Methods
   
   ### Calculations for resistor
   **Rs=Vs-Vf/If
   ** Where Rs is the series resistor value
   Vs is the supply voltage
   Vf is the led forward voltage
    Vs = 3.3 V
    Vf =1.85
    If = 10 ms
     Rs = 3.3-1.85/.01
      Rs = 145 ohm
      So we have to take highest preffered value.So I take 220 ohm as resistor
      
      
 ### 3.Schematic and Circuit Design 
 https://github.com/rueben593/flicker-fusion-assignment/blob/master/flicker%20fusion%20assignment/assignment%20flicker_bb.png
 https://github.com/rueben593/flicker-fusion-assignment/blob/master/flicker%20fusion%20assignment/assignment%20flicker_schem.png
     
   ## Output
      https://github.com/rueben593/flicker-fusion-assignment/blob/master/flicker%20fusion%20assignment/frequency.png
    
  ### Working Explanation
   https://youtu.be/PA1jcw09-kA 
      
   ###  4.Conclusion
   
   **This project helps me to find Person's subjective flicker fusion threshold.It also helps me to learn about teensy 3.2 micro controller.Also learn about the softwares such as ardruino ,visual studio code and git hub .
   
   **Limitations 
   ** In some conditions we can see that serial plotter getting different values.In that cases values are not accurate.
   
   ###   5.References
   ** Wikipedia - https://en.wikipedia.org/wiki/Flicker_fusion_threshold
      Arudruino.cc
      
      
      
      
