#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: size of array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i <  j; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (i == j - 1)
		{
			continue;
		}
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
