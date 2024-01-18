#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply_numbers - function
 *
 * @num1: first input
 * @num2: second input
 *
 * Return: num1 * num2
 */

int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_positive_integer - function
 *
 * @num: input
 * Return: 0
 */

int is_positive_integer(const char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
		{
			return (0);
		}
        }
	num++;

	return (1);
}

/**
 * main - entry point
 *
 * @argc: args count
 * @argv: args vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *endptr;
	int num1 = strtol(argv[1], &endptr, 10);

	if (*endptr != '\0' || !is_positive_integer(argv[1]))
	{
		printf("Error\n");
		return (98);
	}

	int num2 = strtol(argv[2], &endptr, 10);

	if (*endptr != '\0' || !is_positive_integer(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	int result = multiply_numbers(num1, num2);

	printf("%d\n", result);
	return (0);
}
