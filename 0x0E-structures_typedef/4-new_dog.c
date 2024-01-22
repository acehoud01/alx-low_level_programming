#include "dog.h"

/**
 * new_dog - function prototype
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tiger;
	int nameLen, ownerLen;

	tiger = malloc(sizeof(dog_t));

	if (tiger == NULL)
		return (NULL);

	nameLen = _strLen(name);
	tiger->name = malloc(sizeof(char) * nameLen + 1);

	if (tiger->name == NULL)
	{
		free(tiger);
		return (NULL);
	}

	fillMem(name, nameLen, tiger->name);

	ownerLen = _strLen(owner);
	tiger->owner = malloc(sizeof(char) * ownerLen + 1);

	if (tiger->owner == NULL)
	{
		free(tiger);
		free(tiger->name);
		return (NULL);
	}

	fillMem(owner, ownerLen, tiger->owner);

	tiger->age = age;
	return (tiger);
}

/**
 * _strLen - function prototype
 * @str: A string
 * Return: 0
 */

int _strLen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * fillMem - Copy string literal to allocated memory
 * @str: String literal
 * @strLen: @str length
 * @dest: The allocated memory
 */

void fillMem(char *str, int strLen, char *dest)
{
	int i;

	for (i = 0; i < strLen; i++)
		dest[i] = str[i];
	dest[i] = '\0';
}
