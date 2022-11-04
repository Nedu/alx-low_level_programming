#include "main.h"
/**
 * sqrt_main - function that returns the natural square root of a number
 * @n: input number
 * @c: iterator
 * Return: Returns square root or -1 if n does not have a natural square root
 */
int sqrt_main(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + sqrt_main(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: Returns square root or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_main(n, 2));
}
