#include "main.h"

/**
 * _isalpha - function prototype
 * @c: ASCII character
 * Return: 1 otherwise 0
 */

int _isalpha(int c)
{
	int _alpha = (c >= 97 && 122) || (c >= 65 && c <= 90) ? 1 : 0;

	return (_alpha);
}
