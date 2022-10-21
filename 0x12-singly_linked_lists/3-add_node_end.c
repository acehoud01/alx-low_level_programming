#include "lists.h"

/**
 * add_node_end - function prototype
 * @head: pointer to head
 * @str: to add string
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *lst;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		lst = *head;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}
	return (*head);
}
