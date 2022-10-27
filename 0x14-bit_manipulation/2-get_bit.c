#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: parameter
 * @index: index
 *
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = (n >> index);
	if (index > 32)
		return (-1);
	return (i & 1);
}
