#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function prototype
 *
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOnwer: %s\n",
				d->name == NULL ? "(nil)" : d->name,
				d->age,
				d->owner == NULL ? "(nil)" : d->owner);
	}
}
