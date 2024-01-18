#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * realloc - function prototype
 *
 * @ptr: pointer
 * @old_size: to copy
 * @new_size: new copy
 * Return: new_ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		unsigned int size_to_copy = (old_size < new_size) ? old_size : new_size;
		memcpy(new_ptr, ptr, size_to_copy);
	}

	free(ptr);

	return (new_ptr);
}
