#include "main.h"

/**
 * leet - funtion prototype
 *
 * @str: string to en
 * Return: 0
 */

char *leet(char *str)
{
	int i;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i]; i++)
	{
		int j;

		for (j = 0; j < 5; j++)
		{
			if (str[i] != lower[j] && str[i] != upper[j])
				continue;
			str[i] = num[j];
			break;
		}
	}
	return (str);
}
