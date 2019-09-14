/*
 * PWM_int.h
 *
 *  Created on: Sep 11, 2019
 *      Author: Administrator
 */

#ifndef PWM_INT_H_
#define PWM_INT_H_

void PWM_intialize(void);

void PWM_OC0_Set_DutyCycle(u8 DC);
void PWM_OC2_Set_DutyCycle(u8 DC);

#endif /* PWM_INT_H_ */
