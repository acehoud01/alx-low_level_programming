#include "main.h"

/**
 * print_triangle - function prototype
 *
 * @size: size of a triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a = 0;
	int b, c = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(a < c ? ' ' : '#');
			}
			c--;
			_putchar('\n');
		}
	}
}
