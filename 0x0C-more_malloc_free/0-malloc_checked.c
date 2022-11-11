#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int b
 *
 * Return: Returns a pointer to the allocated memory
 * if malloc fails,  function should cause normal process
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
