/*
 * update7SEG.c
 *
 *  Created on: Oct 29, 2023
 *      Author: 84334
 */
#include "update7SEG.h"
#include "main.h"
#include "display7SEG.h"
void update7SEG(int index){
	switch(index){
	case 0:
		display7SEG(1);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_SET);
		break;
	case 1:
		display7SEG(2);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_SET);
		break;
	case 2:
		display7SEG(3);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_SET);
		break;
	case 3:
		display7SEG(0);
		HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, GPIO_PIN_RESET);
	default:
		break;
	}
}

