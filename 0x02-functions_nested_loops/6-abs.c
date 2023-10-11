#include "main.h"

/**
 * _abs - There is no such thing as absolute value in this world.
 * You can only estimate what a thing is worth to you
 * Function that computes the absolute value of an integer.
 * @c: input number.
 * Author - Nedu Robert
 *
 * Return: Absolute value of number
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
