#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated to dog
 * @d: dog.
 *
 * Return: Returns void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
