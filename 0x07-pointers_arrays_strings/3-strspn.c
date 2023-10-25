#include <stdio.h>
#include "main.h"

/**
 * _strspn - strspn
 * Function that gets the length of a prefix substring.
 * @s: pointer to char s.
 * @accept: pointer to char accept.
 * Author - Nedu Robert
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != ' ')
		{
			if (accept[i] == s[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}

	return (k);
}
