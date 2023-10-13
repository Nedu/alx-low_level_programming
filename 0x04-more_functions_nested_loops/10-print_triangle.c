#include "main.h"

/**
 * print_triangle - Triangles
 * Function that prints a triangle, followed by a new line.
 * @size: input number for size of the triangle
 * Author - Nedu Robert
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			if (i < size)
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
