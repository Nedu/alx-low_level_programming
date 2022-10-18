#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10
 *
 * Description: Prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: Returns 0
 */
void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
