#include "main.h"
#include <stdio.h>
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int n = 0;
	int s = 0;

	while (haystack[i] != '\0')
	{
		while ((haystack[i] == needle[n]) && (needle[n] != '\0'))
		{
			n++;
			i++;
		}
		if (needle[n] == '\0')
		{
			s = i - n;
			break;
		}
		i++;
	}
	if (needle[n] == '\0')
		return (haystack + s);
	else
		return (NULL);
}
