#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table to search.
 * @key: The key to look for.
 * Return: The value associated with the key, or NULL if not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
