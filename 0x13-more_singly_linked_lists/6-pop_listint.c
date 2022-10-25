#include "lists.h"

/**
 * pop_listint - function prototype
 * @head: head to the list
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int the_list;

	if (*head == NULL)
		return (0);

	pop = *head;
	the_list = pop->n;
	free(pop);

	*head = (*head)->next;
	return (the_list);
}
