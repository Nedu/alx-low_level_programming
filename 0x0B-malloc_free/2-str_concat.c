#include <stdlib.h>
#include "main.h"

/**
 * _strdup - He who is not courageous enough to take risks
 * will accomplish nothing in life
 * Function that concatenates two strings.
 * @s1: input char string s1 to concatenate.
 * @s2: input char string s2 to concatenate.
 * Author - Nedu Robert
 * Return: Returns a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2, and null terminated.
 * It returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenatedString;
	unsigned int s1Size = 0;
	unsigned int s2Size = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1[s1Size])
	{
		s1Size++;
	}

	while (s2[s2Size])
	{
		s2Size++;
	}

	concatenatedString = (char *)malloc(sizeof(char) * (s1Size + s2Size + 1));

	if (concatenatedString == NULL)
	{
		return (NULL);
	}

	if (s1)
	{
		while (i < s1Size)
		{
			concatenatedString[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (s1Size + s2Size))
		{
			concatenatedString[i] = s2[j];
			i++;
			j++;
		}
	}

	concatenatedString[i] = '\0';
	return (concatenatedString);
}
