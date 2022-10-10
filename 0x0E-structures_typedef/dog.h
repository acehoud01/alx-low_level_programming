#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 *
 * @name: name of the dog
 * @age: thee age
 * @owner: de owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog dog_t;

void init_dog(struct dog *, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
