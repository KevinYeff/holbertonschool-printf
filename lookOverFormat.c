#include "main.h"

/**
 * lookOver_f - Function that recieves the main string and an object
 *              type as a parameter.
 * @format:     Main string that possibly contains a format specifier.
 * @list:       List containing all the arguments.
 * Return:      Count of character printed.
 */

int lookOver_f(const char *format, va_list list)
{
	int i = 0, j, chCount;
	/* Typedef Struct defined here */
	specifiers_t typeSpec[] = {{'c', p_char}, {'s', p_string},
				   {'%', p_mdls}, {'i', p_int},
				   {'d', p_int}, {'\0', NULL}
	};
	/* Validating the main format string */
	if (*format == '\0' || *(format + (i + 1)) == '\0')
	return (-1);
	/* 1st loop to iterate the main format string */
	i = 0;
	while (*(format + i))
	{/* Conditional to match pointer related to iterator i with '%' */
		if (*(format + i) == '%')
		{
			j = 0;/* Nested loop to iterate trough typedef struct */
			while (typeSpec[j].ch != '\0')
			{/* Conditional to match the next character to '%' */
				if (*(format + (i + 1)) == typeSpec[j].ch)
				{
					chCount += typeSpec[j].f(list);
					break;
				}
				j++; /* Nested loop iterator */
			} /* Conditional to see if the character next to '%'
			   *  does not match any format specifier.
			   */
			if (typeSpec[j].ch == '\0' && *(format + (i + 1)) != ' ')
			{       /* Conditional that prints if the next character
				 * to '%' is not equal to NULL
				 */
				if (*(format + (i + 1)) != '\0')
				{
					_putchar(*(format + i));
					_putchar(*(format + (i + 1)));
					chCount += 2;
				}
				else
					return (-1);
			} /* Added to increment the position of the iterator i,
			   * so the format specifier is not printed
			   */
			i++;
		}
		else/* Prints until a '%' character is found*/
		{
			_putchar(*(format + i));
			chCount++;
		}
		i++; /* main loop iterator */
	}
	return (chCount);
}
