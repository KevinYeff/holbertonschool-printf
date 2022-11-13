#include "main.h"
/**
 * p_string - Function that prints a string.
 * @s:        String to print from specifier.
 * Return:    Number of chars printed.
 */

int p_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	return (count);
}
