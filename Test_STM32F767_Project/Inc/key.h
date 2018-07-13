#ifndef __KEY_H
#define __KEY_H

#include "stm32f4xx_hal.h"

#define KEY_PIN		GPIO_PIN_13
#define KEY_GPIO	GPIOC

#define KEY		HAL_GPIO_ReadPin(KEY_GPIO, KEY_PIN)

void Key_Init(void);
 
#endif
