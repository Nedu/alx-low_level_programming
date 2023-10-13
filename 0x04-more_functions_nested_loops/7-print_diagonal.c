#include "main.h"

/**
 * print_line - I feel like I am diagonally parked in a parallel universe
 * Function that draws a diagonal line in the terminal.
 * @n: input number
 * Author - Nedu Robert
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
