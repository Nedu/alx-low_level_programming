#include <stdio.h>
/**
 * main -  When I was having that alphabet soup,
 * I never thought that it would pay off
 * a program that prints the alphabet in lowercase,
 * except q and e, followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
