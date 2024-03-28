#include "main.h"

/**
 * _strncpy - function prototype
 *
 * @dest: pointer to destination string
 * @src: pointer to copy
 * @n: number of bytes to copy
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
