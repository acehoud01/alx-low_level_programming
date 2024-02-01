#include "lists.h"

/**
 * free_list - function prototype
 *
 * @head: list to free
 * Return: 0
 */

void free_list(list_t *head)
{

	while (head != NULL)
	{
		list_t *current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
