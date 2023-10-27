#include "main.h"

/**
 * _strcmp - strcmp
 * Function that compares two strings.
 * @s1: pointer to char s1.
 * @s2: pointer to char s2.
 * Author - Nedu Robert
 * Return: Returns an integer greater than, equal to, or less than 0.
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
