#include "main.h"

/**
 * _strncat - strncat
 * Function that concatenates two strings.
 * @dest: pointer to char dest.
 * @src: pointer to char src.
 * @n: integer input n.
 * Author - Nedu Robert
 * Return: Returns a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
