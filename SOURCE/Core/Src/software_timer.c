/*
 * software_timer.c
 *
 *  Created on: Oct 5, 2023
 *      Author: 84334
 */
#include"software_timer.h"

int timer1_counter = 50;
int timer1_flag = 0;

void setTimer1(int duration){
		timer1_counter = duration;
		timer1_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
}


