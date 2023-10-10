#include "main.h"

/**
 * print_alphabet - I sometimes suffer from insomnia.
 * And when I can't fall asleep,
 * I play what I call the alphabet game
 * Function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
