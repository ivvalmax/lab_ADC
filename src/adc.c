#include "../inc/adc.h"
#include "../inc/rgbLed.h"

extern RGBLed_t led;
uint16_t value = 0;

void adcInit(void)
{
  ADMUX = (1 << REFS0)|(1 << MUX0)|(1 << MUX1);
  ADCSRA = (1 << ADIE)|(1 << ADFR)|(1<< ADPS2)|(1 << ADEN);
}

void adcStart(void)
{
  ADCSRA |= (1 << ADSC);
}

ISR (ADC_vect)
{
  value = (ADCH << 8)|ADCL;
  led.g = 1023 - value;
  led.b = 1023 - value;
  ADCSRA &= ~(1 << ADIF);
}