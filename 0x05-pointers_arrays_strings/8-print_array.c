#include "main.h"
#include <stdio.h>

/**
 * print_array - function prototype
 *
 * @a: an array
 * @n: elements of an array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");
}
