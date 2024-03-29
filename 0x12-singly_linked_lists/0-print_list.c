#include "lists.h"

/**
 * print_list - function prototype
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}

	return (count);
}
