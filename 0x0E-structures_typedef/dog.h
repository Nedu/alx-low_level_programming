#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The ownwer of the dog
 *
 * Description: Dog's attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
