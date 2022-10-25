#include "lists.h"

/**
 * sum_listint - function prototype
 * @head: address to node
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
