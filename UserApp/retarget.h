
//
// Created by nino on 23-6-18.
//

#ifndef STM32H7_TEST_RETARGET_H
#define STM32H7_TEST_RETARGET_H

#include "main.h"
#include "stdio.h"
#include "stdarg.h"
#include "string.h"

void uart_printf(const char *format, ...);

#endif //STM32H7_TEST_RETARGET_H
