#include <stdlib.h>
#include <string.h>

/**
 * strtow - function prototype
 *
 * @str: input characters
 * Return: 0
 */

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	int count = 0;
	int str_len = strlen(str);

	for (int i = 0; i < str_len; i++)
	{
		if (str[i] == ' ' && (i == 0 || str[i - 1] != ' '))
		{
			count++;
		}
	}

	char **words = (char **)malloc((count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	int index = 0;
	int start = 0;
	int len = 0;

	for (int i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (len > 0)
			{
				words[index] = (char *)malloc((len + 1) * sizeof(char));
				
				if (words[index] == NULL)
				{
					free(words);
					return (NULL);
				}
				strncpy(words[index], str + start, len);
				words[index][len] = '\0';
				index++;
			}
			start = i + 1;
			len = 0;
		}
	}
	
	words[count] = NULL;
	return (words);
}
