#include <stdio.h>
/**
 * main -  Patience, persistence and
 * perspiration make an unbeatable
 * combination for success
 *  program that prints all possible
 * combinations of single-digit numbers.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			break;
		} else {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
