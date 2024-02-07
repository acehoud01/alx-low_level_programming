#include "lists.h"

/**
 * print_listint_safe - function prototype
 *
 * @head: list
 * Return: 0
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int def;

	while (head)
	{
		def = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (def > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
	}
	return (count);
}
