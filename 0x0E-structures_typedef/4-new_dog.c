#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of
 * a string
 * @str: string to be counted
 * Return: returns length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;
	return (len);

}


/**
 * _strcopy - copy string pointed by src
 * @dest:buffer storing string copy
 * @src: buffer storing string to copy
 * Return:returns copied string
 */

char *_strcopy(char *dest, char *src)
{

	int index = 0;

	for (; src[index] ; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);

}



/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: me
 * Return: returns NULL in case
 * of failure
 */

dog_t *new_dog(char *name, float age, char *owner)

{

	dog_t *tiger;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	tiger = malloc(sizeof(dog_t));
	if (tiger == NULL)
		return (NULL);

	tiger->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (tiger->name == NULL)
	{
		free(tiger);
		return (NULL);
	}
	tiger->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (tiger->owner == NULL)
	{
		free(tiger->name);
		free(tiger);
		return (NULL);
	}

	tiger->name = _strcopy(tiger->name, name);
	tiger->age = age;
	tiger->owner = _strcopy(tiger->owner, owner);
	return (tiger);
}
