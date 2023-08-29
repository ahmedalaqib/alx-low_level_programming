#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free the memory allocated for dog
 * @d: The dog to be freed
 *
 * Return: void
 **/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
