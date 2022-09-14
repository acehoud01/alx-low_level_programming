#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prototype
 *
 * @n: number
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 97; n++)
		{
			printf("%i, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%i, ", n);
		}
	}

	printf("98\n");
}
