#include <stdio.h>
/**
 * main -  alphABET
 * a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
