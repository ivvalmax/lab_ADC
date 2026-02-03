#include "inc/common.h"
#include "inc/adc.h"
#include "inc/PWM.h"
#include "inc/rgbLed.h"

extern RGBLed_t led;

void allInit(void);

int main(void)
{
  allInit();
  adcStart();

  while(1)
  {
    led.g = 1023-adcRead();
    led.b = led.g;
    sevenSegmentWrite(led.g);
    PWMChange(&led);
  }

}

void allInit(void)
{
  adcInit();
  PWMInit();
  rgbLedInit();
  sevenSegmentInit();

  sei();
}