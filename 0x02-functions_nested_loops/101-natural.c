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
	int i, result = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result += i;
		}

		i++;
	}

	printf("%d\n", result);
	return (0);
}
