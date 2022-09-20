#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, j = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (j <  2772)
	{
		i = rand() % 128;

		if ((j + i) > 2772)
			break;

		j += i;

		printf("%c", j);
	}
	printf("%c\n", (2772 - j));

	return (0);
}
