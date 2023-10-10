#include "main.h"

/**
 * print_sign - Sign
 * Function that prints the sign of a number.
 * @n: the number to be checked.
 * Author - Nedu Robert
 *
 * Return: Returns 1 for lowercase character, 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    if (n == 0)
    {
        _putchar('0');
        return (0);
    }
    if (n < 0)
    {
        _putchar('-');
        return (-1);
    }
}
