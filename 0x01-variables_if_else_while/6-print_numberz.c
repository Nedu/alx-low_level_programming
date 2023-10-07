#include <stdio.h>
/**
 * main -  Numberz
 *  a program that prints all single digit
 * numbers of base 10 starting from 0,
 * followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
