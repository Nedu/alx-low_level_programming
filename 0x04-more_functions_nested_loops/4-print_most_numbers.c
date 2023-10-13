#include "main.h"

/**
 * print_most_numbers - I believe in numbers and signs
 * Function that prints the numbers, from 0 to 9,
 * followed by a new line except 2 and 4.
 * Author - Nedu Robert
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
