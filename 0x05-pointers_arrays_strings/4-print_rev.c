#include "main.h"

/**
 * print_rev - I can only go one way. I've not got a reverse gear
 * Function that prints a string, in reverse, followed by a new line.
 * @s: pointer to char s.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void print_rev(char *s)
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
