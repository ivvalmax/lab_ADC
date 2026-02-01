#ifndef RGBLED_H_
#define RGBLED_H_

#include "common.h"

typedef struct RGBLed{
  uint16_t r;
  uint16_t g;
  uint16_t b;
} RGBLed_t;

void rgbLedInit(void);

#endif