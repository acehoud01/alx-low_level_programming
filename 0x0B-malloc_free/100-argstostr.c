#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function prototype
 *
 * @ac: counter
 * @av: characters
 * Return: 0;
 */

char *argstostr(int ac, char **av)
{
        if (ac == 0 || av == NULL)
        {
                return (NULL);
        }

        int total_len = 0;

        for (int i = 0; i < ac; i++)
        {
                total_len += strlen(av[i]) + 1;
        }
        total_len++;

        char *result = (char *)malloc(total_len * sizeof(char));

        if (result == NULL)
        {
                return (NULL);
        }

        char *p = result;

        for (int i = 0; i < ac; i++)
        {
                strcpy(p, av[i]);
                p += strlen(av[i]);
                *p++ = '\n';
        }
        *p = '\0';

        return (result);
}
