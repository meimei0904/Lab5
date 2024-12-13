/*
 * global.h
 *
 *  Created on: Dec 10, 2024
 *      Author: MY LE
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

// Status command parser
#define INIT_STR 		0
#define WAIT_END		1

// Status UART communication
#define WAIT_RST 		10
#define SEND_ADC		11
#define WAIT_OK 		12
#define MAX_BUFFER_SIZE 30

extern int status_parser; //xử lý lệnh uart
extern int status_uart; //xử lý giao tiếp dữ liệu adc qua uart

//  biến đọc dữ liệu nhận được từ uart.
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

//  lưu và quản lý các lệnh.
extern uint8_t command_flag;
extern uint8_t command[MAX_BUFFER_SIZE];
extern uint8_t command_index;

// chuỗi gửi từ console
extern char str[50];
// giá trị biến ADC
extern uint32_t ADC_value;

#endif /* INC_GLOBAL_H_ */
