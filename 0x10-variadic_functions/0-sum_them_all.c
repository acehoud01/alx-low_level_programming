#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function prototype
 *
 * @n: numb of args
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j;
	va_list arg_list;

	if (n)
	{
		va_start(arg_list, n);
		for (j = 0; j < n; j++)
		{
			sum += va_arg(arg_list, int);
		}
		va_end(arg_list);
	}
	return (sum);
}
