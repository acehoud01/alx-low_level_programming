#include "lists.h"

/**
 * free_listint2 - function prototype
 * @head: pointer to head list
 *
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tail;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			tail = *head;
			free(tail);
			*head = (*head)->next;
		}

		*tmp = NULL;
	}
}
