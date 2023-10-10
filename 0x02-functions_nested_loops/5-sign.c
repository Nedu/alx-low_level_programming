#include "main.h"

/**
 * print_sign - Sign
 * Function that prints the sign of a number.
 * @n: the number to be checked.
 * Author - Nedu Robert
 *
 * Return: Returns 1 for positive number,
 * -1 for negative number, or 0 for zero number.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
