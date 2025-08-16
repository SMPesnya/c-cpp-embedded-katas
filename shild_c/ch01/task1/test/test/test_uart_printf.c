#include <unity.h>
#include "uart_printf.h"


void test_uart_printf_compiles(void)
{
    (void)uart_printf("Value = %d\n",42);
}
