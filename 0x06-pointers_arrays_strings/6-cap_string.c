#include "main.h"

/**
 * cap_string - function prototype
 *
 * @str: string to capitalize
 * Return: 0
 */

char *cap_string(char *str)
{
	char cap[] = ",\t;\n; .!?\"(){}";

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int j = 0;

		if (i == 0)
			j = 1;
		else
		{
			int k;

			for (k = 0; cap[k]; k++)
			{
				if (str[i - 1] != cap[k])
					continue;
				j = 1;
				break;
			}
		}

		if (j != 1)
			continue;
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= ('a' - 'A');
	}
	return (str);
}
