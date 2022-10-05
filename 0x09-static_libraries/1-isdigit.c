#include "main.h"

/**
 * _isdigit - funtion prototype
 *
 * @c: character to check
 * Return: 1 otherwise 0
 */

int _isdigit(int c)
{
	int _isdigit = c >= 48 && c <= 57 ? 1 : 0;

	return (_isdigit);
}
