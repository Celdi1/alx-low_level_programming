#include "main.h"

/**
 * print_numbers - prints 0 to 9, and then a new line
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c >= '0'; c <= '9')
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
