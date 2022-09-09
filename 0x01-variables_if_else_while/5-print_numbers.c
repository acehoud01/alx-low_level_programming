#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x = x + 1;
	}

	putchar('\n');
	return (0);
}
