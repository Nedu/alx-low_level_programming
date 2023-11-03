#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - string_nconcat
 * Function that concatenates two strings.
 * @s1: input char s1.
 * @s2: input char s2.
 * @n: input unsigned int n.
 * Author - Nedu Robert
 * Return: Returns a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenatedString;
	unsigned int s1Size = 0, s2Size = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1Size])
		s1Size++;

	while (s2[s2Size])
		s2Size++;

	if (n >= s2Size)
		concatenatedString = malloc(sizeof(char) * (s1Size + s2Size + 1));
	else
		concatenatedString = malloc(sizeof(char) * (s1Size + n + 1));

	if (concatenatedString == NULL)
		return (NULL);

	while (i < s1Size)
	{
		concatenatedString[i] = s1[i];
		i++;
	}

	while ((n >= s2Size && i < (s1Size + s2Size)) ||
	(n < s2Size && i < (s1Size + n)))
	{
		concatenatedString[i] = s2[j];
		i++;
		j++;
	}

	concatenatedString[i] = '\0';
	return (concatenatedString);
}
