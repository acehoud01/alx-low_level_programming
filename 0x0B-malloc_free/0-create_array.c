#include "main.h"
#include <stdlib.h>

/**
 * create_array - functon prototype
 *
 * @size: array size
 * @c: array char to fill
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (0);

	s = malloc(size);

	if (s == 0)
		return (0);

	while (size--)
	{
		s[size] = c;
	}

	return (s);
}
