#include "main.h"

/**
 * rot13 - function prototype
 * @str: string to encode
 * Return: 0
 */

char *rot13(char *str)
{
	int i, j;

	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alph[j] != '\0')
		{
			if (str[i] == alph[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
