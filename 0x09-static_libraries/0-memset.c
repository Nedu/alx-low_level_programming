#include "main.h"

/**
 * _memset - memset
 * Function that fills memory with a constant byte.
 * @s: pointer to char memory area s.
 * @b: input char b.
 * @n: input unsigned int n, number of bytes.
 * Author - Nedu Robert
 * Return: Returns a pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
