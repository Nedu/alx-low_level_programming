#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string S
 * @accept: string accept
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int x = 0;

	while (*s != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				return (s);
			}
			x++;
		}
		x = 0;
		s++;
	}
	return (NULL);
}
