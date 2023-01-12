#include "lists.h"

/**
 * free_dlistint - function prototype
 * @head: pointer to head
 *
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
