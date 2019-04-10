/*
 * tim11_delay.h
 *
 *  Created on: 10 apr. 2019
 *      Author: Tim
 */

#ifndef TIM11_DELAY_H_
#define TIM11_DELAY_H_
extern TIM_HandleTypeDef htim11;
extern volatile uint32_t usekTick;
void delay_us(uint32_t delay);


#endif /* TIM11_DELAY_H_ */
