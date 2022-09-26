#include "main.h"

/**
 * _strstr - function prototype
 * @haystack: to search
 * @needle: search for
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (; haystack[i] > '\0'; i++)
	{
		int j = i;

		for (; haystack[i] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
				break;
		}

		if (needle[j - i] == '\0')
			return (haystack + i);
	}

	return (0);
}
