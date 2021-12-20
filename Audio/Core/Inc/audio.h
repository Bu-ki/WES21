#include <stdlib.h>
#include "gpio.h"
#include "i2c.h"
#include "i2s.h"

#define AUDIO_RESET_PIN GPIO_PIN_4
#define AUDIO_I2C_ADDRESS 0x94

void init_AudioReset ();
void configAudio();
