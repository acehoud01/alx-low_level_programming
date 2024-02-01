#include "lists.h"

/**
 * add_node - function prototype
 *
 * @head: start
 * @str: list
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

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
	i->next = *head;
	*head = i;

	return (i);
}
