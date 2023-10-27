#include "main.h"

/**
 * _strlen - This report, by its very length,
 * defends itself against the risk of being read
 * Function that returns the length of a string.
 * @s: pointer to integer s.
 * Author - Nedu Robert
 * Return: Returns the length of a string in integer.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		s++;
		i++;
	}
	return (i);
}
