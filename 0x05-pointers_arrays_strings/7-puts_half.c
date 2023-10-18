#include "main.h"

/**
 * puts_half - Winning is only half of it. Having fun is the other half
 * Function that prints half of a string, followed by a new line.
 * if the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	} else if (i % 2)
	{
		for (k = (i - 1) / 2; k < i - 1; k++)
		{
			_putchar(str[k + 1]);
		}
	}
	_putchar('\n');
}
