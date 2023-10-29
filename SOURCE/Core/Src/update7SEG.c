/*
 * update7SEG.c
 *
 *  Created on: Oct 29, 2023
 *      Author: 84334
 */
#include "update7SEG.h"
#include "main.h"
#include "display7SEG.h"

const int MAX_LED = 4;
int led_buffer [4] = {1 , 2 , 3 , 4};
int update7SEG(int index){
	if(index >= MAX_LED) index = 0;
	switch(index){
	case 0:
		display7SEG(led_buffer[index]);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_SET);
		break;
	case 1:
		display7SEG(led_buffer[index]);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_SET);
		break;
	case 2:
		display7SEG(led_buffer[index]);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_SET);
		break;
	case 3:
		display7SEG(led_buffer[index]);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_RESET);
	default:
		break;
	}
	 return index+1;
}

