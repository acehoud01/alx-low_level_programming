#include "main.h"

/**
 * swap_int - function prototype
 *
 * @a: first number
 * @b: second number
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
