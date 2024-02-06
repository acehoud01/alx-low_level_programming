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
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (unsigned int i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
		{
			current = current->next;
		}
	}

	return (NULL);
}
