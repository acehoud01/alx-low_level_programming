#include "main.h"

/**
 * print_sign - function prototype
 *
 * @n: number to be checked
 * Return: 1, 0 and -1
 */

int print_sign(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		if (n == 0)
		{
			i = 0;
			j = '0';
		}
		else
		{
			i = -1;
			j = '-';
		}
	}
	else
	{
		i = 1;
		j = '+';
	}

	_putchar(j);
	return (i);
}
