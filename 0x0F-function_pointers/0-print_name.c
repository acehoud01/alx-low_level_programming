#include "function_pointers.h"

/**
 * print_name - function prototype
 *
 * @name: name of a person
 * @f: pointer to a function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
