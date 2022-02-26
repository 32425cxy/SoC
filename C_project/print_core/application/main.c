#include <stdio.h>
#include "hbird_sdk_hal.h"


int main(void)
{
    // GPIO Init
    // Set BUTTON_U as input, LED0 as output
    //gpio_enable_input(GPIOA, SOC_BUTTON_U_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_LED_RED_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_LED_GREEN_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_LED_BLUE_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_BUTTON_U_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_BUTTON_D_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_BUTTON_L_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_BUTTON_R_GPIO_MASK);
    gpio_enable_output(GPIOA, SOC_BUTTON_C_GPIO_MASK);

    // Set LED0 value to 0, off
    gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 0);
    gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 0);
    gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 0);
    gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 0);
    gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);

    while (1)
    {
    	//H
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//B
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//I
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//R
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//D
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//_
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//E
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//2
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//0
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);

    	//3
    	gpio_write(GPIOA, SOC_LED_RED_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_GREEN_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_LED_BLUE_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_U_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_D_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_L_GPIO_MASK, 1);
    	gpio_write(GPIOA, SOC_BUTTON_R_GPIO_MASK, 0);
    	gpio_write(GPIOA, SOC_BUTTON_C_GPIO_MASK, 0);
    	delay_1ms(3000);
    }
    return 0;
}
