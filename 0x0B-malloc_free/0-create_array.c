#include "main.h"
#include <stdio.h>

/**
 * function prototype - create_array
 *
 * @size: array size
 * &c: array char to fill
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return NULL;
	}

	if (array == NULL)
	{
		return NULL;
	}

	// Initialize each element of the array with the specified character
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return array;
}
