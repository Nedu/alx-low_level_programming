#include "main.h"

/**
 * rev_string - A good engineer thinks in reverse and asks himself
 * about the stylistic consequences of the components and systems he proposes
 * Function that reverses a string.
 * @s: pointer to char s.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
