#include <stdio.h>
#include "main.h"

/**
 * _strstr - strstr
 * Function that locates a substring.
 * @haystack: pointer to char haystack.
 * @needle: pointer to char needle.
 * Author - Nedu Robert
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}

	return (NULL);
}
