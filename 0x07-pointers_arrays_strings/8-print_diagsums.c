#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prototype
 *
 * @a: pointer
 * @size: size of an array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size)
	{
		j = j + a[i];
		k = k + a[size - 1 - i];
		a = a + size;
		i++;
	}

	printf("%d, ", j);
	printf("%d\n", k);
}
