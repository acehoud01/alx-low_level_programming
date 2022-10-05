#include "main.h"

/**
 * _atoi - function prototype
 *
 * @s: string to be converted
 * Return: 0
 */

int _atoi(char *s)
{
	int i;
	int set = 0;
	int last = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			last = last * -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			set = set * 10;
			set -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	set = last * set;
	return (set);
}
