#include <stdlib.h>
#include "main.h"

/**
 * create_array - Float like a butterfly, sting like a bee
 * Function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int size of the array to create.
 * @c: char c to initialize the array.
 * Author - Nedu Robert
 * Return: Returns a pointer to the array, or NULL if it fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;
	if (size == 0)
	{
		return NULL;
	}
	else
	{
		i = (char *)malloc(size * sizeof(char));

		if (i == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < size; j++)
		{
			i[j] = c;
		}
	}
	return (i);
}
