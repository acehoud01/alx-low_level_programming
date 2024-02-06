#include "lists.h"

/**
 * add_noteint - function prototype
 *
 * @head: head of list
 * @n: count
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = createNode(n);

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
