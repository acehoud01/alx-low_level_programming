#include "lists.h"

/**
 * listint_len - function prototype
 * @h: pointer of head list
 *
 * Return: he number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
