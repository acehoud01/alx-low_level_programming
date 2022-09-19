#include "main.h"

/**
 * puts_half - function prototype
 *
 * @str: string to print
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = (i + 1) / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
