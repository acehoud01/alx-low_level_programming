#include "lists.h"

/**
 * get_dnodeint_at_index - function prototype
 * @head: pointer to the head
 * @index: index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list;
	unsigned int i;

	list = head;
	i = 0;
	while (list != NULL)
	{
		if (i == index)
			return (list);
		list = list->next;
		i++;
	}
	return (NULL);
}
