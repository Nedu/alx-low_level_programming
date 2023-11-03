#include <stdlib.h>
#include "main.h"

/**
 * _calloc - _calloc
 * Function that allocates memory for an array, using malloc.
 * @nmemb: input unsigned int nmemb.
 * @size: input unsigned int size.
 * Author - Nedu Robert
 * Return: Returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *res;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	res = malloc(j);

	if (res == NULL)
		return (NULL);

	while (i < j)
	{
		res[i] = 0;
		i++;
	}

	return (res);
}
