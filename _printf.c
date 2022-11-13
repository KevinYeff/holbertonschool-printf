#include "main.h"
/**
 * _printf - Function that emulates the original printf.
 * @format: Main string that we need to search for possible
 *          format specifiers.
 * Return:  Total number of chars printed.
 */

int _printf(const char *format, ...)
{
	int rtn;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);
	/* calling a function */
	rtn = lookOver_f(format, list);

	va_end(list);
	return (rtn);
}
