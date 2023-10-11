#include "main.h"

/**
 * print_last_digit - There are only 3 colors, 10 digits,
 * and 7 notes; it's what we do with them that's important
 * Function that prints the last digit of a number.
 * @c: input number.
 * Author - Nedu Robert
 *
 * Return: Last digit of number
 */
int print_last_digit(int c)
{
	int result = c % 10;
	
	if (result < 0)
	{
		return (result * -1);
	}
	return (result);
}
