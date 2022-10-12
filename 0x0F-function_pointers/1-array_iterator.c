#include "function_pointers.h"

/**
 * int_index - function prototype
 *
 * @array: array
 * @size: size of an array
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			cmp(array[i]);
	
	}
}
