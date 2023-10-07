#include <stdio.h>
/**
 * main -  Smile in the mirror
 * program that prints the lowercase alphabet
 * in reverse, followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
