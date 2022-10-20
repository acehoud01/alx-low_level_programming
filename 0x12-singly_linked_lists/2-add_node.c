#include "lists.h"

/**
 * add_node - function prototype
 * @head: pointer to head
 * @str: to add string
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	char *add;
	int len;
	list_t *lst;

	lst = malloc(sizeof(list_t));
	if (lst == NULL)
		return (NULL);

	add = strdup(str);
	if (add == NULL)
	{
		free(lst);
		return (NULL);
	}
	for (len == 0; str[len];)
		len++;
	lst->str = add;
	lst->len = len;
	lst->next = *head;

	*head = lst;

	return (lst);
}
