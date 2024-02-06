#include "lists.h"

/**
 * listint_len - function prototype
 *
 * @h: list
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		 count++;
		 h = h->next;
	}
	return (count);
}
