#include "lists.h"

/**
 * free_list - function prototype
 *
 * @head: list to free
 * Return: 0
 */

void free_list(list_t *head)
{
	list *i = malloc(sizeof(list_t));
	free(i);
}
