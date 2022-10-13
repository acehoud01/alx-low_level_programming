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
	int sum = 0;
	unsigned int i;
	va_list arg_list;

	if (n == 0)
	{
		va_start(arg_list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg_list, int);
		}
		va_end(arg_list);
		return (0);
	}
	return (sum);
}
