#include "main.h"

/**
 * reverse_array - function prototype
 *
 * @a: pointer to array
 * @n: number of array elements
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (j = n / 2; j > 0; j--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] -= a[i];
	}
}
