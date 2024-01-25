#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: sum 1
 * @b: sum 2
 * Return: Always return 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: diff 1
 * @b: diff 2
 * Return: Always return 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: prod 1
 * @b: prod 2
 * Return: Always return 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: diviser
 * @b: dividend
 * Return: Always return 0
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo
 * @a: mod 1
 * @b: mod 2
 * Return: Always return 0
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
