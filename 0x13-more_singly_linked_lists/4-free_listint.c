#include "lists.h"

/**
 * free_list - function ptototype
 *
 * @head: current nodes
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *next_node;

	while (node != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}
