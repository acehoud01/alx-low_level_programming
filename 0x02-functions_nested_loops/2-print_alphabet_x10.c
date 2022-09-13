#include "main.h"

/**
 * print_alphabet_x10 - function protptype
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j = 0;
	char k;

	while (j < 10)
	{
		k = 'a';
		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
