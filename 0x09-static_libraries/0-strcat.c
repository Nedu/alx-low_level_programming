#include "main.h"

/**
 * _strcat - strcat
 * Function that concatenates two strings.
 * @dest: pointer to char dest.
 * @src: pointer to char src.
 * Author - Nedu Robert
 * Return: Returns a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
