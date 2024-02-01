#include "lists.h"

/**
 * print_list - function prototype
 *
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%s\n", h->str ? h->str : "[0] (nil)");
		count++;
		h = h->next;
	}
	return (count);
}
