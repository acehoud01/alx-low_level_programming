#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number
 * @argv: seize of array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int S;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	S = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", S);

	return (0);
}
