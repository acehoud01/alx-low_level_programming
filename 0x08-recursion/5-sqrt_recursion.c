#include "main.h"

/**
 * _sqrt - function to calculate
 *
 * @n: to return
 * @j: compare
 * Return: 0
 */

int _sqrt(int n, int j)
{
	if (j * j == n)
		return (j);
	else if (j * j > n)
		return (-1);
	return (_sqrt(n, j + 1));
}

/**
 * _sqrt_recursion - function prototype
 *
 * @n: number to return
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
