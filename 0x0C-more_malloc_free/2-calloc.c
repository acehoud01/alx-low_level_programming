#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function prototype
 *
 * allocate memory of an array using malloc
 * @nmemb: array size
 * @size: type size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;
	unsigned int i, j;
	char *k;

	if (size == 0 || nmemb == 0)
		return (NULL);
	j = nmemb * size;
	arr = malloc(j);
	k = (char *)arr;
	if (k != NULL)
	{
		for (i = 0; i < j; i++)
		{
			k[i] = 0;
		}
		return (k);
	}
	return (NULL);
}
