#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int intType;
	char charType;
	long int longIType;
	long long int longLintType;
	float flpType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLintType));
	printf("Size of a float: %ld byte(s)\n", sizeof(flpType));
	return (0);
}
