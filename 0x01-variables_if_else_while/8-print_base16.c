#include <stdio.h>
/**
 * main -  Hexadecimal
 *  a program that prints all the numbers
 * of base 16 in lowercase,
 * followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	int i;
    char hexvalues[] = "0123456789abcdef";

	for (i = 0; i <= 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
