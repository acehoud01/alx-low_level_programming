#include "lists.h"

/**
 * add_nodeint_end - functin prototype
 * @head: pointer to head list
 * @n: number of nodes
 *
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (tail != NULL)
	{
		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
