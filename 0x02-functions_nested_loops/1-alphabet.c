#include "main.h"
/**
 * main - alphabet.c
 *
 * Description: Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Returns 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');

}
