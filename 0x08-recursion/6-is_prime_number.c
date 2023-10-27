#include "main.h"

/**
 * is_prime - Inception. Is it possible?
 * Function returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: input int n
 * Author - Nedu Robert
 * Return: Returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - Inception. Is it possible?
 * Function returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: input int n
 * Author - Nedu Robert
 * Return: Returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
