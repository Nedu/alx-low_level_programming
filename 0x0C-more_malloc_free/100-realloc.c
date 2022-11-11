#include "main.h"
#include <stdlib.h>
/**
 * _realloc -function that reallocates a memory block using malloc and free
 * @ptr: void *ptr
 * @old_size: unsigned int old_size
 * @new_size:  unsigned int new_size
 *
 * Return: If new_size == old_size do not do anything and return ptr
 * if new_size is equal to zero, and ptr is not NULL, then the call is
 * equivalent to free(ptr). Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
