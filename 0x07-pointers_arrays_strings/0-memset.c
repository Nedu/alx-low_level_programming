#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: Pointer to destination
 * @b: Constant byte being printed
 * @n: Unsigned int for number of times being copied
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
