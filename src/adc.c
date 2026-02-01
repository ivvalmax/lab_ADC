#include "../inc/adc.h"

void adcInit(void)
{
  ADMUX = (1 << REFS0)|(1 << MUX0)|(1 << MUX1);
  ADCSRA = (1 << ADIE)|(1 << ADFR)|(1 << ADIF)|(1<< ACSR2); 
}
