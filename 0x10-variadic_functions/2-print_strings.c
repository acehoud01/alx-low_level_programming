#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	unsigned int i;
	char *pt;

	i = 0;

	va_start(lis, n);

	while (i < n)
	{
		pt = va_arg(lis, char*);
		if (pt != NULL)
			printf("%s", pt);
		else
			printf("%p", pt);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(lis);
}
