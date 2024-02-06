#include "lists.h"

/**
 * free_listint2 - function ptototype
 *
 * @head: current nodes
 * Return: 0
 */

void free_listint2(listint_t **head)
{
        listint_t *node;
        listint_t *next_node;

	if (head == NULL) return;

	node = *head;
        while (node != NULL)
        {
                next_node = node->next;
                free(node);
                node = next_node;
        }

	*head = NULL;
}
