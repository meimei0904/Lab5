/*
 * uart.h
 *
 *  Created on: Dec 10, 2024
 *      Author: MY LE
 */

// fsm giao tiếp uart kết hợp đọc adc và xử lý lệnh.

#ifndef UART_H_
#define UART_H_

#include "main.h"
#include "timer.h"
#include "stdio.h"
#include "stdlib.h"
#include "global.h"
#include "parser.h"

void uart_communiation_fsm(ADC_HandleTypeDef hadc1, UART_HandleTypeDef huart2);


#endif /* UART_H_ */
