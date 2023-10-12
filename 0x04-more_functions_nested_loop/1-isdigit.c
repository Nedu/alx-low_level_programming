#include "main.h"

/**
 * _isupper - isupper
 * Function that checks for uppercase character.
 * @c: input number.
 * Author - Nedu Robert
 *
 * Return: Returns 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
