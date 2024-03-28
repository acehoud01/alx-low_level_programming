#include "main.h"

/**
 * _strspn - function prototype
 *
 * @s: scanned
 * @accept: list of characters
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int str = 0, i, j;

	for (i = 0;; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] != accept[j])
				continue;
			str++;
			break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (str);
}
