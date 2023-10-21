#include "main.h"

/**
 * _strncpy - strncpy
 * Function that copies a string.
 * @dest: pointer to char dest.
 * @src: pointer to char src.
 * @n: integer input n.
 * Author - Nedu Robert
 * Return: Returns a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
