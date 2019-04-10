/*
 * tim11_delay.c
 *
 *  Created on: 10 apr. 2019
 *      Author: Tim
 */
void delay_us(uint32_t delay){
 HAL_TIM_Base_Start_IT(&htim11); /* denna rad kan stå antingen I delay.c eller I main. Vilken skillnad fås?*/
 uint32_t current = usekTick;
while((usekTick-current)<(delay-2));
 	 HAL_TIM_Base_Stop_IT(&htim11);
}

