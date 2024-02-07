#include "lists.h"

/**
 * free_listint_safe - function prototype
 *
 * @h: pointer to the first node in the linked list
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int def;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		def = *h - (*h)->next;
		if (def > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
