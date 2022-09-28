#include "main.h"

/**
 * is_prime - function that return power of number
 *
 * @n: number
 * @a: to compare
 * Return: 0
 */

int is_prime(int n, int a)
{
	int i = 0;

	if (a <= n)
	{
		if (n % a == 0)
			i++;
		return (i + is_prime(n, a + 1));
	}
	return (i);
}

/**
 * is_prime_number - function prototype
 *
 * @n: number to return
 * Return: 0
 */

int is_prime_number(int n)
{
	if (is_prime(n, 1) == 2)
		return (1);
	else
		return (0);
}
