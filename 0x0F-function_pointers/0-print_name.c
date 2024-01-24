#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prototype
 *
 * @name: name to print
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
