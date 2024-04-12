#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 hash algorithm.
 *
 * @@str: The input string to hash.
 * Return: The computed hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	while (*str)
	{
		hash = ((hash << 5) + hash) + *str;
		str++;
	}

	return (hash);
}
