#include <stdio.h>

/**
 * first print before main
 */

void __attribute__((constructor)) my_print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
