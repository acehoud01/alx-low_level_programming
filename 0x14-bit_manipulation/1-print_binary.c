#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: parameter
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int i, start = 0;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = n >> i;
		if (value & 1)
		{
			_putchar('1');
			start++;
		}
		else if (start)
			_putchar('0');
	}
	if (!start)
		_putchar('0');
}
