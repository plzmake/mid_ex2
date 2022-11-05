/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int Timer1_flag;
void Settimer1(int du);
extern int Timer2_flag;
void Settimer2(int du);
void TimerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
