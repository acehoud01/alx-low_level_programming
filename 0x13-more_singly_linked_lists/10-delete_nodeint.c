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
	if (head == NULL || *head == NULL)
		return (-1);

	listint_t *tempNode;
	listint_t *current = *head;
	unsigned int count = 0;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	tempNode = current->next;
	current->next = tempNode->next;
	free(tempNode);

	return (1);
}
