#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function protype
 *
 * @d: pointer to dog struct
 * @name: pointer to char
 * @age: our dog age
 * @owner: pointer to char
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
