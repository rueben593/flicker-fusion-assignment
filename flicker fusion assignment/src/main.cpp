#include <Arduino.h>
#define led 13
#define buttonpin 10
float halftimeperiod_max = 300;
uint8_t ledstate = 0;
const uint32_t debouncedelay_ms = 100;
float f = 0 ;
void ISR_button(); //
volatile boolean buttonpress = 0;
volatile uint32_t presscounter = 0;
volatile uint32_t debouncepresscounter = 0;

 
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  //digitalWrite(led,ledstate);


attachInterrupt(buttonpin, ISR_button, FALLING);
}


void loop() {
  
  for(int flag=50000;flag>=0;flag--)
  {
  //Serial.print("\nTimeperiod_max"); 
  if(halftimeperiod_max == 0 )
  {return 1;  
  }
  //Serial.print(halftimeperiod_max);
   
  static int32_t previous_time_ms = 0 ; //static variable for blinking 
  int32_t current_time_ms = millis(); //variable for blinking
  digitalWrite(led,ledstate);
  //Serial.print(ledstate);
  f = (1/halftimeperiod_max)*500;
 
if(current_time_ms-previous_time_ms >= halftimeperiod_max)
{
  ledstate = !ledstate;
  
  previous_time_ms = current_time_ms;
  halftimeperiod_max = halftimeperiod_max-1;
  
} 
  }
}
void ISR_button()
{
  static uint32_t previoustimebutton_ms = 0;
  uint32_t currenttimebutton_ms = millis();
   if((currenttimebutton_ms - previoustimebutton_ms) >= debouncedelay_ms)
   {
   previoustimebutton_ms = currenttimebutton_ms;
    Serial.println(f);
    Serial.println("\nfrequency");

   debouncepresscounter++;
   }
   presscounter++;
}