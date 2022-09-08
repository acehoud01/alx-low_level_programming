#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lld;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lld));
	printf("Size of a floa: %ld byte(s)\n", sizeof(f));
	return (0);
}
