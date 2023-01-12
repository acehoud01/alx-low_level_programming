#include "lists.h"

/**
 * dlistint_len - function prototype
 * @h: pointer to linked list
 *
 * Return: always return 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
		h = h->next;
	return (j);
}
