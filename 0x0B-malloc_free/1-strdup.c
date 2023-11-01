#include <stdlib.h>
#include "main.h"

/**
 * _strdup - The woman who has no imagination has no wings
 * Function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: unsigned int size of the array to create.
 * Author - Nedu Robert
 * Return: Returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available or if str is NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	int size = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[size])
		{
			size++;
		}

		duplicate = (char *)malloc(sizeof(char) * size);

		if (duplicate == NULL)
		{
			return (NULL);
		}

		while (i < size)
		{
			duplicate[i] = str[i];
			i++;
		}

		duplicate[i] = '\0';

	}
	return (duplicate);
}
