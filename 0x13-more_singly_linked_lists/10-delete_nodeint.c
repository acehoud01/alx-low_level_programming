#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 * @head: First node address
 * @index: Position of the node to delete
 *
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	next = node->next;
	node->next = next->next;
	free(next);
	return (1);
}
