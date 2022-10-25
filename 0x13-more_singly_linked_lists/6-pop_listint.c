#include "lists.h"

/**
 * pop_listint - function prototype
 * @head: head to the list
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *popp;
	int the_list;

	if (*head == NULL)
		return (0);

	popp = *head;
	*head = popp->next;
	the_list = popp->n;
	free(popp);
	return (the_list);
}
