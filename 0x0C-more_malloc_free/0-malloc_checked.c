#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Trust no one
 * Function that allocates memory using malloc.
 * @b: input unsigned int b.
 * Author - Nedu Robert
 * Return: Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
