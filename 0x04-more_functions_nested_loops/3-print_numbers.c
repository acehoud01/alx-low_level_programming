#include "main.h"

/**
 * print_numbers - function prototype
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
