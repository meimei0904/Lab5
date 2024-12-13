#include "parser.h"

//xử lý chuỗi lệnh.

void command_parser_fsm() {
	switch(status_parser) {
	case INIT_STR:
		// chờ ký tự đầu tiên ('!'). nếu nhận được, chuyển sang WAIT_END và bắt đầu đọc lệnh
		if(temp == '!') {
			status_parser = WAIT_END;
			command_index = 0;
		}
		break;

	case WAIT_END:
		// nếu nhận được ký tự '#': kết thúc lệnh, lưu chuỗi lệnh vào command, bật cờ command_flag, và quay về INIT_STR
		if(temp == '#') {
			status_parser = INIT_STR;
			command[command_index] = '\0';
			command_flag = 1;
		}
		else {
			//nếu nhận ký tự '!': đặt lại chỉ số lệnh (command_index) và bắt đầu lại lệnh mới.
			if (temp == '!')
				command_index = 0;
			else {
			// tiếp tục đọc ký tự vào command. nếu vượt quá MAX_BUFFER_SIZE, quay vòng lại chỉ số.
				command[command_index++] = temp;
				if (command_index == MAX_BUFFER_SIZE) command_index = 0;
			}
		}
		break;
	default:
		break;
	}
}
