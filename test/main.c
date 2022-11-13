#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 12, len2 = 123;

	_printf("%i\n", INT_MAX);
	_printf("%s\n", "Holberton School!");

	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Percent:[%%%%%%]\n");
	printf("Percent:[%%%%%%]\n");

	_printf("Percent:[%!]\n");
	printf("Percent:[%!]\n");

	_printf("Percent:[%K]\n");
	printf("Percent:[%K]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
