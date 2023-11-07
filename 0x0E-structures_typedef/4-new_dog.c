#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initializing the dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: Returns void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameLength = 0, ownerLength = 0, i, j;

	while (name[nameLength] != '\0')
		nameLength++;

	while (owner[ownerLength] != '\0')
		ownerLength++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (nameLength + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ownerLength + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	for (i = 0; i < nameLength; i++)
		dog->name[i] = name[i];

	dog->name[i] = '\0';
	dog->age = age;

	for (j = 0; j < ownerLength; j++)
		dog->owner[j] = owner[j];

	dog->owner[j] = '\0';

	return (dog);
}
