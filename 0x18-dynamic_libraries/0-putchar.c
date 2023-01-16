#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char x[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(x[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
