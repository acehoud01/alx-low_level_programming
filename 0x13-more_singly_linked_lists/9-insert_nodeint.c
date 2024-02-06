#include "lists.h"

/**
 * insert_nodeint_at_index - function prototype
 *
 * @head: list
 * @idx: index at given
 * @n: node
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node-> n;
	if (idx == 0)
	{
		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}

	listint_t *current = *head;

	for (unsigned int i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
