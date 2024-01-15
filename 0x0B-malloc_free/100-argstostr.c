#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int len = 0;

	for (int i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len += strlen(av[i]) + 1;
		}
	}

	char *result = malloc((len + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	int index = 0;

	for (int i = 0; i < ac; ++i)
	{
		if (av[i] != NULL)
		{
			int total_len = strlen(av[i]);

			strncpy(result + index, av[i], total_len);
			index += total_len;
			result[index++] = '\n';
		}
	}

	result[index] = '\0';

	return (result);
}
