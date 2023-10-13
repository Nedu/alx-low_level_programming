#include <stdio.h>
#include "main.h"

/**
 * main - The problem of distinguishing prime numbers
 * from composite numbers and of resolving the latter into their
 * prime factors is known to be one of the most important and
 * useful in arithmetic
 * Program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Author - Nedu Robert
 *
 * Return: 0.
 */
int main(void)
{
	long int i, num;

	num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
