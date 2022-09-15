#include "main.h"

/**
 * print_number - function prototype
 *
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	int i, j, k;

	if (n >= 0)
	{
		i = n;
	}
	else
	{
		_putchar(45);
		i = n * -1;
	}

	j = i;
	k = 1;

	while (j > 0)
	{
		j /= 10;
		k *= 10;
	}

	for (; k >= 1; k /= 10)
		_putchar(((i / k) % 10) + 48);
}
