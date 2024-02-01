#include "lists.h"

/**
 * list_len - function prototype
 *
 * @h: length of elements
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
