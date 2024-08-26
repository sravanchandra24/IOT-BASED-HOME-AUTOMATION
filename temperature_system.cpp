#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
    /* configue the pins for temperature system*/
       pinMode(HEATER,OUTPUT);
       pinMode(COOLER,OUTPUT);

       pinMode(TEMPERATURE_SENSOR,INPUT);
    
}
/*Read the temperature from the temperature sensor and return the temperature*/
float read_temperature(void)
{
  float temperature;
  temperature = ((analogRead(TEMPERATURE_SENSOR) *( (float) 5/1024))/(float) 0.01);
  return temperature;
}
/* to turn ON and OFF  the cooler*/
void cooler_control(bool control)
{
   if(control){
    digitalWrite(COOLER,HIGH);
   }
   else{
    digitalWrite(COOLER,LOW);
   }
}
/* to turn ON and OFF  the heater*/
void heater_control(bool control)
{
    if(control){
    digitalWrite(HEATER,HIGH);
   }
   else{
    digitalWrite(HEATER,LOW);
   }
}
