#include "lists.h"

/**
 * delete_nodeint_at_index - function prototype
 *
 * @head: list
 * @index: postion
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;

		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *current = *head;

	for (unsigned int i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);

		current = current->next;
	}

	if (current->next == NULL)
		return (-1);

	listint_t *temp = current->next;

	current->next = temp->next;
	free(temp);
	return (1);
}
