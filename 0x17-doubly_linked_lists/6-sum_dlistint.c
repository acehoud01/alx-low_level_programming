#include "lists.h"

/**
 * sum_dlistint - funciton prototype
 * @head: pointer to head list
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
