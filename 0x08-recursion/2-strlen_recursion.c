#include "main.h"

/**
 * _strlen_recursion - Dreams feel real while we're in them.
 * It's only when we wake up that we realize something was actually strange
 * Function that returns the length of a string.
 * @s: pointer to char s
 * Author - Nedu Robert
 * Return: Returns int length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
