#include "main.h"

/**
 * print_diagonal - function prototype
 *
 * @n: number of lines
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; i < n; i++)
		{
			for (j = 0; j < 1; j++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
}
