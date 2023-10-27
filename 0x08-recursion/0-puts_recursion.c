#include "main.h"

/**
 * _puts_recursion - She locked away a secret, deep inside herself,
 * something she once knew to be true... but chose to forget
 * Function that prints a string, followed by a new line.
 * @s: pointer to char s
 * Author - Nedu Robert
 * Return: Returns void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
