#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary string
 *
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	int power = 0;
	unsigned int result = 0;

	for (; *b; b++)
	{
		char c = *b;

		if (c != '0' && c != '1')
		{
			return (0);
		}
		result |= (c - '0') << power;
		power++;
	}
	return (result);
}
