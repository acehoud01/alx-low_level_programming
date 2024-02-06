#include "lists.h"

/**
 * sum_listint - function prototype
 *
 * @head: nodes
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
