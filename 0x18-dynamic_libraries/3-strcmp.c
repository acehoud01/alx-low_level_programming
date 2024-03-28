#include "main.h"

/**
 * _strcmp - function prototype
 *
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
