#include <stdio.h>
#include "dog.h"

/**
 * print_dog - initializing the dog
 * @d: dog.
 *
 * Return: Returns void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
