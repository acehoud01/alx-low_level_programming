#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%i is postive\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else
	{
		printf("%i is zero\n", i);
	}
	return (0);
}
