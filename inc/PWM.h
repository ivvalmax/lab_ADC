#ifndef PWM_H_
#define PWM_H_

#include "common.h"
#include "rgbLed.h"

void PWMInit(void);
void PWMChange(RGBLed_t* ledPtr);

#endif