#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - 98 Battery Street, the OG
 * function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: input number.
 * Author - Nedu Robert
 *
 * Return: Returns void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		if (n != 98)
		{
			for (i = n; i <= 98; i++)
			{
				printf("%d, ", i);
			}
		}
		else
		{
			printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
}
