#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 1;
	hash_node_t *current;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (!first)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			first = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
