#include "main.h"

/**
 * _memcpy - memcpy
 * Function that copies memory area.
 * @dest: pointer to char memory area dest.
 * @src: pointer to char memory area src.
 * @n: input unsigned int n, number of bytes.
 * Author - Nedu Robert
 * Return: Returns a pointer to memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
