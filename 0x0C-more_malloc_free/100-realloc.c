#include <stdlib.h>
#include "main.h"

/**
 * array_range - array_range
 * Function that creates an array of integers.
 * @ptr: input void ptr that is a pointer to the memory
 * previously allocated with a call to malloc: malloc(old_size).
 * @old_size: input unsigned int old_size is the size, in bytes,
 * of the allocated space for ptr.
 * @new_size: input unsigned int new_size is the new size,
 * in bytes of the new memory block.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *res;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		res = malloc(new_size);

		if (res == NULL)
			return (NULL);
		
		return (res);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	res = malloc(new_size);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		res[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (res);
}
