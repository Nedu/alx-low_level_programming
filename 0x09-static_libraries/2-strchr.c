#include <stdio.h>
#include "main.h"

/**
 * _strchr - strchr
 * Function that locates a character in a string.
 * @s: pointer to char s.
 * @c: input char c.
 * Author - Nedu Robert
 * Return: Returns a pointer to the first occurence of the
 * character c in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i, j = 0;

	while (s[j])
	{
		j++;
	}

	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
