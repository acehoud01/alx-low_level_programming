#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary string
 *
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL || *b == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = (num << 1) + (b[i] - '0');
		i++;
	}
	return (num);
}
