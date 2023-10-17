#include "main.h"

/**
 * _puts - I do not fear computers. I fear the lack of them
 * Function that prints a string, followed by a new line, to stdout.
 * @str: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
