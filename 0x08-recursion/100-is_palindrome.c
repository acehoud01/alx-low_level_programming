#include "main.h"
#include <string.h>

/**
 * m_palindrome - function to compute string
 *
 * @s: pointer to a string
 * @j: lenght of string
 * Return: 0
 */

int m_palindrome(char *s, int j)
{
	if (j < 1)
		return (1);
	return (*s == *(s + j) ? m_palindrome(s + 1, j - 2) : 0);
}

/**
 * is_palindrome - function prototype
 *
 * @s: pointer to string
 * Return: 0
 */

int is_palindrome(char *s)
{
	int j = strlen(s) - 1;

	return (m_palindrome(s, j));
}
