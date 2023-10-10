#include "main.h"

/**
 * _isalpha - isalpha
 * Function that checks for alphabetic character.
 * @c: the character to be checked.
 * Author - Nedu Robert
 *
 * Return: Returns 1 for lowercase character, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
		return (1);
	}
	return (0);
}
