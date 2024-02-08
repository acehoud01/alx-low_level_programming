#include "main.h"

/**
 * flip_bits - function prototype
 * @n: parameter
 * @m: destination
 *
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, number_of_flips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	while (i < j)
	{
		if ((m & 1) != (n & 1))
			number_of_flips += 1;
		i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (number_of_flips);
}
