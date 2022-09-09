#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x = x + 1;
	}

	while (y <= 'z')
	{
		putchar(y);
		y = y + 1;
	}

	putchar('\n');
	return (0);
}
