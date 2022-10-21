#include <stdio.h>

void __attribute__((constructor)) here(void);

/**
 * here - function print
 * Return: 0
 */

void here(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
