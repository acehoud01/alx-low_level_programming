#include "main.h"

/**
 * rev_string - function prototype
 *
 * @s: string to reverse
 * Return: 0
 */

void rev_string(char *s)
{
	char *i = s;

	while (*(i + 1) != '\0')
		i++;

	while (i > s)
	{
		char tmp = *i;
		*i-- = *s;
		*s++ = tmp;
	}
}
