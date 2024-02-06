#include "lists.h"

/**
 * add_nodeint_end  - function prototype
 *
 * @head: current node
 * @n: new node
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /* this will be the last node */
	if (*head == NULL)
		*head = new_node;
	else
	{
		listint_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		
		last_node->next = new_node;
	}
	return (new_node);
}
