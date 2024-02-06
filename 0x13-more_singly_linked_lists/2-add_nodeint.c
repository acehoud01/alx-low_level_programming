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
	if (head == NULL)
		return (NULL);

	listint_t *newNode = createNode(n);

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
