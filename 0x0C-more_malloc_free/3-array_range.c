#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function prototype
 * create array of intergers
 *
 * @min: minimum
 * @max: maximum
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *arr = NULL;
	int i, j, count;

	count = 0;
	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	arr = malloc(j * sizeof(int));
	if (arr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			arr[count] = i;
			count++;
		}
		return (arr);
	}
	return (NULL);
}
