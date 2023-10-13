#include "main.h"

/**
 * print_numbers - The numbers speak for themselves
 * Function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Author - Nedu Robert
 *
 * Return: void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
