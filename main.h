#ifndef _PRINT_F
#define _PRINT_F
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - Structure for format specifiers and functions.
 * @ch:            Format specifiers.
 * @f:             Function associated to the specifiers.
 */

struct format
{
	char ch;
	int (*f)(va_list);
};
typedef struct format specifiers_t;

int _printf(const char *format, ...);
int lookOver_f(const char *format, va_list list);

int _putchar(char);
int p_char(va_list);
int p_string(va_list);
int p_mdls(va_list);

int p_int(va_list);
#endif
