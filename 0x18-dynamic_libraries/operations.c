#include <stdio.h>
#include <stdlib.h>

/**
 * add - functio
 *
 * @a: first number
 * @b: sewcond number
 * Return: 0
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * subtract - function
 *
 * @a: first num
 * @b: second num
 * Return: 0
 */

int subtract(int a, int b)
{
	return (a - b);
}

/**
 * multiply - function
 *
 * @a: 1st num
 * @b: 2nd num
 * Return: 0
 */

int multiply(int a, int b)
{
	return (a * b);
}

/**
 * divide - function
 *
 * @a: 2st num
 * @b: 2nd num
 * Return: 0
 */

int divide(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	return (-1);
}
