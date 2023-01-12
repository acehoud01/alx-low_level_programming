#include "lists.h"

/**
 * insert_dnodeint_at_index - function prototype
 * @h: pointer too head list
 * @idx: index of the list where the new node
 * @n: value
 *
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added_node = malloc(sizeof(dlistint_t));
	dlistint_t *list;
	unsigned int count = 0;

	if (h == NULL || added_node == NULL)
	{
		return (NULL);
	}

	added_node->n = n;
	added_node->next = NULL;
	added_node->prev = NULL;
	list = *h;

	if (idx == 0)
	{
		added_node = add_dnodeint(h, n);
		return (added_node);
	}

	while (list)
	{
		if (list->next == NULL && count == idx - 1)
		{
			added_node = add_dnodeint_end(h, n);
			return (added_node);
		}
		else if ((idx - 1) == count)
		{
			added_node->next = list->next;
			added_node->prev = list;
			list->next->prev = added_node;
			list->next = added_node;
			return (added_node);
		}
		count++;
		list = list->next;
	}
	free(added_node);
	return (NULL);
}
