#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
    	{	
        	return (NULL);
    	}

    
    size_t total_length = 0;
    for (int i = 0; i < ac; ++i)
    {
        if (av[i] != NULL)
	{
            total_length += strlen(av[i]) + 1;
        }
    }

    char *result = (char *)malloc((total_length + 1) * sizeof(char));


    if (result == NULL)
    {
        return (NULL);
    }

    size_t index = 0;
    for (int i = 0; i < ac; ++i)
    {
        if (av[i] != NULL)
	{
            size_t len = strlen(av[i]);
            strncpy(result + index, av[i], len);
            index += len;
            result[index++] = '\n';
        }
    }

    result[index] = '\0';

    return (result);
}
