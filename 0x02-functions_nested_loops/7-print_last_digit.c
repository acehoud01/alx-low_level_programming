#include "main.h"

/**
 * print_last_digit - function prototype
 *
 * @n: check the number
 * Return: last digit
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);
}
