//
// Created by nino on 23-6-18.
//

#include "retarget.h"

void uart_printf(const char *format, ...) {
    char buffer[128];  // 缓冲区用于存储格式化后的字符串
    va_list args;
    va_start(args, format);

    vsnprintf(buffer, sizeof(buffer), format, args);  // 格式化字符串到缓冲区
    va_end(args);

    for (size_t i = 0; buffer[i] != '\0'; ++i) {
        HAL_UART_Transmit(&huart1, (uint8_t *) &buffer[i], 1, HAL_MAX_DELAY);
    }
}
