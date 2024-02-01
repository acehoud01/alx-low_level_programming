#include "lists.h"

/**
 * list_len - function prototype
 *
 * @h: length of elements
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	int count;

	while (h != NULL)
	{
		count++;
	}

	return (count);
}
