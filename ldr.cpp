#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   pinMode(LDR_SENSOR,INPUT);
   
}
void brightness_control(void)
{
  unsigned int adc_val;
    /* to read values from LDR sensor*/
  adc_val=analogRead(LDR_SENSOR);  

      /* "scale it down from 0-255" and "reverse it from 255-0"*/
  adc_val=255-(adc_val/4); /* manual way*/
      /* map(0,1023,255,0); using built-in function*/
  analogWrite(GARDEN_LIGHT,adc_val);

  delay(100);
  
}
