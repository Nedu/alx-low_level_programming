#include "main.h"

/**
 * add - a + b
 * function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @a: input number.
 * @b: input number.
 * Author - Nedu Robert
 *
 * Return: Returns sum of the two inputs
 */
void print_to_98(int n)
{
	for (let i = n; i <= 98; i++)
    {
        _putchar(i);
        if (i != 98)
        {
            _putchar(' ');
            _putchar(',');
        }
    }
}
