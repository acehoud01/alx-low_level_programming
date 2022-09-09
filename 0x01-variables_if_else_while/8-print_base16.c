#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int j;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
