#include "main.h"

/**
 * main - I sometimes suffer from insomnia.
 * And when I can't fall asleep,
 * I play what I call the alphabet game
 * Function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
void print_alphabet(void)
{
	for (char i = 'a'; i<= 'z'; i++)
    {
        _putchar(i);
    }
        _putchar('\n');
}
