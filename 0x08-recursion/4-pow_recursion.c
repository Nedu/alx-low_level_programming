#include "main.h"

/**
 * _pow_recursion - Once an idea has taken hold of the brain
 * it's almost impossible to eradicate
 * Function that returns the value of x raised to the power of y.
 * @x: input int x
 * @y: input int y
 * Author - Nedu Robert
 * Return: Returns the value of x raised to the power of y
 * if n is greater than or equal to 0,
 * otherwise it returns -1 to indicate an error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
