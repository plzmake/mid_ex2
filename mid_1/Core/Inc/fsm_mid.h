/*
 * fsm_mid.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#ifndef INC_FSM_MID_H_
#define INC_FSM_MID_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int statusbut;
#define buttonreset 2
#define buttoninc   3
#define buttondec   4
#define initbut		5
void isResetNor();
void isIncNor();
void isDecNor();
void display7SEG(int num);
#endif /* INC_FSM_MID_H_ */
