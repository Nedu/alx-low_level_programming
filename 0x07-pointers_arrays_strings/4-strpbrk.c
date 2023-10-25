#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - strpbrk
 * Function that searches a string for any of a set of bytes.
 * @s: pointer to char s.
 * @accept: pointer to char accept.
 * Author - Nedu Robert
 * Return: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
