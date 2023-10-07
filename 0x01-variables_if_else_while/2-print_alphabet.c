#include <stdio.h>
/**
 * main -  I sometimes suffer from insomnia.
 * And when I can't fall asleep, I play what
 * I call the alphabet game
 * a program that prints the alphabet in lowercase,
 * followed by a new line.
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
	putchar('\n');
	return (0);
}
