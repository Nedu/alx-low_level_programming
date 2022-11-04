#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: input number
 * Return: If n is lower than 0, returns -1 to indicate an error,
 * otherwise returns the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
