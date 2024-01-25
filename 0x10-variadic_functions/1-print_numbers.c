#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prototype
 *
 * @separator: a string to be printed between numbers
 * @n: number of passed args
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;
	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(li, int));
		if(separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(li);

	printf("\n");
}
