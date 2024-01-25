#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function prototype
 *
 * @n: the number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list s;

	va_start(s, n);
	int sum = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(s, int);
	}
	va_end(s);
	return (sum);
}
