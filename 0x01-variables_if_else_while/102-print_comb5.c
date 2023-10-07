#include <stdio.h>
/**
 * main - Software is eating the World
 * a program that prints all possible
 * combinations of two two-digit numbers.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	int i, j;

    for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);

			putchar(' ');

			putchar('0' + j / 10);
			putchar('0' + j % 10);

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
