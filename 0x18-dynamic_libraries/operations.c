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
 * sub - function
 *
 * @a: first num
 * @b: second num
 * Return: 0
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function
 *
 * @a: 1st num
 * @b: 2nd num
 * Return: 0
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function
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

/**
 * mod - function
 *
 * @a: first numer
 * @b: second nun
 * Return: 0
 */

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	return (-1);
}
