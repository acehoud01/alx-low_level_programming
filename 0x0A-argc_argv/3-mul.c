#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	i = sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		sum *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
