#include "main.h"

/**
 * _memset - function prototype
 *
 * @s: start address
 * @b: value filled
 * @n: number of bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
