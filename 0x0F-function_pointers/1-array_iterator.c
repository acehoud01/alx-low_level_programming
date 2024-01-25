#include "function_pointers.h"

/**
 * array_iterator - function prototype
 *
 * @array: array
 * @size: size of an array
 * @action: pointer to function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
