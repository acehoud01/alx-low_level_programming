#include "lists.h"

/**
 * add_dnodeint - function prototype
 * @head: head pointer
 * @n: values
 *
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added_node;

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = *head;
	added_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = added_node;
	*head = added_node;
	return (added_node);
}
