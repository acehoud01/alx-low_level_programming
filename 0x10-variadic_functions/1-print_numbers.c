#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prototype
 *
 * @separator: a string to be printed between numbers
 * @n: number of passed args
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;
	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));
		if(i != (n -1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(li);
}
