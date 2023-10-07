#include <stdio.h>
/**
 * main - The success combination in business
 * is: Do what you do better... and: do more of what you do...
 * a program that prints all possible different
 * combinations of three digits.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				else
				{
					continue;
				}
				if (i == '7' && j == '8' && k == '9')
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
