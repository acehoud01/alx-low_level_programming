#include "lists.h"

/**
 * print_listint_safe - function prototype
 *
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t free_listint_safe(listint_t **h);
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
