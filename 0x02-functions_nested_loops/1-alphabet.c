#include "main.h"

/**
 * print_alphabet - Function prototype
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
