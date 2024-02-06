#include "lists.h"

/**
 * pop_listint - function prototype
 *
 * @head: current list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
