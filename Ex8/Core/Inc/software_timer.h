/*
 * software_timer.h
 *
 *  Created on: Oct 6, 2022
 *      Author: HMT
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;

void setTimer0(int duration);

extern int timer1_flag;

void setTimer1(int duration);

void timer_run();



#endif /* INC_SOFTWARE_TIMER_H_ */
