#include "main.h"

/**
 * _strlen - function prototype
 *
 * @s: check string lenght
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
