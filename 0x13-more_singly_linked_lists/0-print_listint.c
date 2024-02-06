#include "lists.h"

/**
 * print_listint - function prototype
 *
 * @h: elements to print
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
