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
    char k;
    int l;

	while (s[i] != '\0')
	{
		i++;
	}

    l = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		k = s[j];
        s[j] = s[l];
        s[l--] = k;
	}
}
