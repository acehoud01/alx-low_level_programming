#include "main.h"

/**
 * _strchr - function prototype
 *
 * @s: scanned
 * @c: search
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
