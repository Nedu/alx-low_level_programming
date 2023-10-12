#include <stdio.h>
#include "main.h"

/**
 * main - Nature made the natural numbers; All else is the work of women
 * Program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns sum of the two inputs
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 
    2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
