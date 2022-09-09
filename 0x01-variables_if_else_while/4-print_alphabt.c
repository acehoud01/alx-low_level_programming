#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
