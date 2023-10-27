#include "main.h"

/**
 * _abs - There is no such thing as absolute value in this world.
 * You can only estimate what a thing is worth to you
 * Function that computes the absolute value of an integer.
 * @n: input number.
 * Author - Nedu Robert
 *
 * Return: Absolute value of number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
