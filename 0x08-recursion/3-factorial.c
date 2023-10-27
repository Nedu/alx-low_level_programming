#include "main.h"

/**
 * factorial - You mustn't be afraid to dream a little bigger, darling
 * Function that returns the factorial of a given number.
 * @n: input int n
 * Author - Nedu Robert
 * Return: Returns factorial of n if n is greater than or equal to 0,
 * otherwise it returns -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
