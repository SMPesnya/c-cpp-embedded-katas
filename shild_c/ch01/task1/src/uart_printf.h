/**
 * @file    uart_printf.h
 * @brief   Модуль для замены класического printf из stdio.h для MCU 
 * @author  Песня С.М (pspesnya@gmail.com
 * @date    16.08.2025
 * @note    Это заголовочный файл для реализации задания №1 главы №1 по Шилду (c Embedded контекстом)
 * @warning Что бы пример работал требуется релизовать низкоуровневую функцию void uart_send_char(char c);
 */
#ifndef __STDIO_H__
#define __STDIO_H__

/**
 * @brief Вывод отформатированной строки в UART
 * @param format Нультерминированная строка описывающая формат будующего собщения как в класическом printf
 * @param ...    Аргументы для подстановки в формат
 * @return       Возвращает реально успешно переданное по UART данных в байтах
 *
 * @details
 * Поддерживаются стандартные спецификаторы printf:
 * - %d, %i для целых чисел
 * - %f для чисел с плавающей точкой
 * - %s для строк
 * 
 * @note Максимальная длина вывода - регулируется через define MAX_PRINTF_LEN, по умолчанию 256 символов
 * 
 * @example
 * @code
 * uart_printf("Temperature: %.1f°C", 23.5f);
 * @endcode
 */
int uart_printf(const char * restrict format,...);

#endif
