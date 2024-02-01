#include "lists.h"

/**
 * add_node_end - function prototype
 *
 * @head: start
 * @str: list
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *i = malloc(sizeof(list_t));

        if (i == NULL)
                return (NULL);

        i->str = strdup(str);
        if (i->str == NULL)
        {
                free(i);
                return (NULL);
        }
        i->len = strlen(str);
        i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = i;
	}

        return (i);
}

