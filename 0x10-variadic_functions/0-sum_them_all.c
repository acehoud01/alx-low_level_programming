#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function prototype
 *
 * @n: numb of args
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list lst;

	if (n <= 0)
		return (0);

	va_start(lst, n);
	for (i; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}
