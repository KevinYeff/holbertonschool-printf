#include "main.h"
#include <stdarg.h>

/**
 * p_int - Function that prints an integer.
 * @list:  List of arguments.
 * Return: Number of ints printed.
 */

int p_int(va_list list)
{
	long int num = va_arg(list, int), tmp;
	int div = 1, i = 0;

	if (num < 0)
	{
		_putchar('-');
		i++;
		num *= -1;
	}
	tmp = num;
	while (tmp > 9)
	{
		div *= 10;
		tmp /= 10;
	}
	while (div >= 1)
	{
		tmp = num % div;
		num /= div;
		_putchar('0' + num);
		num = tmp;
		div /= 10;
		i++;
	}
	return (i);
}
