#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function prototype
 *
 * @s1: first string
 * @s2: string to append
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s;

	if (s1 == 0)
		s1 = "\0";

	if (s2 == 0)
		s2 = "\0";

	for (j = 0; s1[j] != '\0'; j++)
	{
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
	}

	s = malloc((j + k) * sizeof(char) + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= j + k; i++)
	{
		if (i < j)
			s[i] = s1[i];
		else
			s[i] = s2[i - j];
	}

	s[i] = '\0';

	return (s);
}
