#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list, even if it has a loop.
 *
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	size_t nodes = 0;
	const listint_t **addr_array = malloc(sizeof(listint_t *) * 1024);

	if (!addr_array)
	{
		exit(98);
	}

	while (slow != NULL)
	{
		for (size_t i = 0; i < nodes; i++)
		{
			if (slow == addr_array[i])
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				free(addr_array);
				return (nodes);
			
			}
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		addr_array[nodes] = slow;
		slow = slow->next;
		nodes++;

		if (nodes % 1024 == 0)
		{
			const listint_t **new_addr_array = realloc(addr_array, sizeof(listint_t *) * (nodes + 1024));
			if (!new_addr_array)
			{
				free(addr_array);
				exit(98);
			}
			addr_array = new_addr_array;
		}
	}

	free(addr_array);
	return (nodes);
}
