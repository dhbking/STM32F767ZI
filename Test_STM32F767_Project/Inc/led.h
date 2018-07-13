#ifndef __LED_H
#define __LED_H

#include "stm32f4xx_hal.h"

#define LED_GREEN_PIN	GPIO_PIN_0
#define LED_BLUE_PIN	GPIO_PIN_7
#define LED_RED_PIN		GPIO_PIN_14

#define LED_GREEN_GPIO	GPIOB
#define LED_BLUE_GPIO	GPIOB
#define LED_RED_GPIO	GPIOB

#define ON		GPIO_PIN_SET
#define OFF		GPIO_PIN_RESET

#define LED_GREEN_CTL(SWITCH)		HAL_GPIO_WritePin(LED_GREEN_GPIO, LED_GREEN_PIN, SWITCH)
#define LED_BLUE_CTL(SWITCH)		HAL_GPIO_WritePin(LED_BLUE_GPIO, LED_BLUE_PIN, SWITCH)
#define LED_RED_CTL(SWITCH)			HAL_GPIO_WritePin(LED_RED_GPIO, LED_RED_PIN, SWITCH);

void Led_Init(void);
void Led_Show(void);

#endif
