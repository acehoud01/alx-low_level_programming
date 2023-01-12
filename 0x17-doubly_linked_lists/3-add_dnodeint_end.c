#include "lists.h"

/**
 * add_dnodeint_end - function prototype
 * @head: pointer to head
 * @n: new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added_node;

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
	{
		added_node->prev == NULL;
		*head = added_node;
		return (added_node);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = added_node;
	added_node->prev = *head;

	return (added_node);
}
