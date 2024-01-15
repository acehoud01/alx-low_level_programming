#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function prototype
 *
 * @str: string to be copied
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == 0)
		return (0);

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
