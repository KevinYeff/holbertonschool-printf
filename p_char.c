#include "main.h"

/**
 * p_char - Prints a char.
 * @c:      Char to be printed.
 * Return:  1 on Succes.
 */

int p_char(va_list c)
{
	char ch;

	ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
