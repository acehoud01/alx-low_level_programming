#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list, even if it has a loop.
 *
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *visited[1024];
	int i;

	for (i = 0; i < 1024; i++)
	{
		visited[i] = NULL;
	}

	while (head && !visited[(size_t)head])
	{
		printf("Node %zu: [%d] @ %p\n", node_count, head->n, (void *)head);
		visited[(size_t)head] = head;
		node_count++;
		head = head->next;
	}

	if (head)
	{
		printf("-> [SUSPECT] %p (Infinity)\n", (void *)head);
		free_listint((listint_t *)head);
		exit(98);
	}
	return (node_count);
}
