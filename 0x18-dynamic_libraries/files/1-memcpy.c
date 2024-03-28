#include "main.h"

/**
 * _memcpy - function prototype
 *
 * @dest: pointer to an array
 * @src: pointer to source f data
 * @n: number of bytes to be copied
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
