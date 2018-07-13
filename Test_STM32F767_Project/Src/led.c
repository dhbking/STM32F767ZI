#include "Led.h"

void Led_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	
	__HAL_RCC_GPIOB_CLK_ENABLE();
	GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull  = GPIO_PULLUP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;

	GPIO_InitStruct.Pin = LED_GREEN_PIN | LED_BLUE_PIN | LED_RED_PIN;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

void Led_Show(void)
{
	LED_GREEN_CTL(ON);
	LED_BLUE_CTL(OFF);
	LED_RED_CTL(OFF);
    HAL_Delay(1000);
    LED_GREEN_CTL(OFF);
	LED_BLUE_CTL(ON);
	LED_RED_CTL(OFF);
    HAL_Delay(1000);
	LED_GREEN_CTL(OFF);
	LED_BLUE_CTL(OFF);
	LED_RED_CTL(ON);
	HAL_Delay(1000);
}
