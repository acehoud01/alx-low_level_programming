#include "main.h"
#include <stdio.h>

/**
 * create_array - function prototype
 *
 * @size: array size
 * @c: array char to fill
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
