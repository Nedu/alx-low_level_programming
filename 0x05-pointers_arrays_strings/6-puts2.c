#include "main.h"

/**
 * puts2 - Half the lies they tell about me aren't true
 * Function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
