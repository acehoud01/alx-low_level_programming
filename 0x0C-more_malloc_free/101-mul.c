#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: couting
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{ printf("Error\n");
	exit(98); }

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{ printf("Error\n");
			exit(98); }
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
