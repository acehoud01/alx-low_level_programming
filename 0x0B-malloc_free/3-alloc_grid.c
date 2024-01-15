#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function prototype
 *
 * @width: grid width
 * @height: grid height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **arr, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		arr[j] = malloc(sizeof(int) * width);

		if (arr[j] == NULL)
		{
			for (; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (k = 0; k <= width; k++)
		{
			arr[j][k] = 0;
		}
	}

	return (arr);
}
