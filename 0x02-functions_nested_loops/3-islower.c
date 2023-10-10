#include "main.h"

/**
 * _islower - islower
 * Function that checks for lowercase character.
 * @c: the character to be checked.
 * Author - Nedu Robert
 *
 * Return: Returns 1 for lowercase character, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) {
		return (1);
	}
	return (0);
}
