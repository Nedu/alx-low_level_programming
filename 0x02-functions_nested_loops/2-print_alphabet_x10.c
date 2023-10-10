#include "main.h"

/**
 * print_alphabet - 10 x alphabet
 * Function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns void
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}

