#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The variable to be initialized
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner name
 * Return: void
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
