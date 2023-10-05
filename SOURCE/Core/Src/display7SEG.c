/*
 * display7SEG.c
 *
 *  Created on: Oct 5, 2023
 *      Author: 84334
 */

#include "display7SEG.h"
#include "global.h"
void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}

