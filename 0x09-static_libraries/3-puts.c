#include "main.h"

/**
 * _puts - I do not fear computers. I fear the lack of them
 * Function that prints a string, followed by a new line, to stdout.
 * @s: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
