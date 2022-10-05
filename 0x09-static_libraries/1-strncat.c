#include"main.h"

/**
 * _strncat - function prototype
 *
 * @dest: pointer to destination array
 * @src: null terminated
 * @n: to amend
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j]; j++)
	{
	}

	for (i = 0; i < n && dest[i]; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
