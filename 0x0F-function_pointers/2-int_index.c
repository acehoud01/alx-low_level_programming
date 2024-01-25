#include "function_pointers.h"

/**
 * int_index - function prototype
 *
 * @array: array
 * @size: size fo array
 * @cmp: pointer to fucntion
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;


	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
