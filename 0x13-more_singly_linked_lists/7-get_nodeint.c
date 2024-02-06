#include "lists.h"

/**
 * get_nodeint_at_index - function prototype
 *
 * @head: list
 * @index: postion
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	listint_t *current_node = head;

	for (unsigned int i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return (NULL);

		current_node = current_node->next;
	}
	return (current_node);
}
