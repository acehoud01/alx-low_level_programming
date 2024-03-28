#include "main.h"

/**
 * _strcat - function prototype
 *
 * @dest: pointer to array
 * @src: terminated null
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = -1;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	do {
		i++;
		dest[j] = src[i];
		j++;
	} while (src[i] != '\0');

	return (dest);
}
