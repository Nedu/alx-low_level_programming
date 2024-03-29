#include "main.h"
/**
 * wildcmp - Inception. Now, before you bother telling me it's impossible...
 * Function that compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0
 * @s1: string input
 * @s2: string input. Can contain the special character *
 * Return: Returns 1 if strings are identical, otherwise,  0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
