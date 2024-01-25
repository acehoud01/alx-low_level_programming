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
	int sum = 0;
	unsigned int i;
	va_list s;

	if (n == 0)
	{
		return (0);
	}

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(s, int);
	}

	va_end(s);
	return (sum);
}
