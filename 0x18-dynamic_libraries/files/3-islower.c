#include "main.h"

/**
 * _islower - function prototype
 *
 * @c: ASCII character
 * Return: 1 otherwise 0
 */

int _islower(int c)
{
	int _lower = c >= 97 && c <= 122 ? 1 : 0;

	return (_lower);
}
