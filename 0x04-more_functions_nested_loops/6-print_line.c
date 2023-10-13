#include "main.h"

/**
 * print_line - The shortest distance between two points is a straight line
 * Function that draws a straight line in the terminal.
 * @n: input number
 * Author - Nedu Robert
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
