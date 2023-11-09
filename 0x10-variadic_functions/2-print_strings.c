#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - One woman's constant is another woman's variable
 * Function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of arguments
 *
 * Author - Nedu Robert
 * Return: Returns void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *currentString;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		currentString = va_arg(list, char *);

		if (!currentString)
		{
			currentString = "(nil)";
		}
		if (!separator)
		{
			printf("%s", currentString);
		}
		else if (separator && i == 0)
		{
			printf("%s", currentString);
		}
		else
		{
			printf("%s%s", separator, currentString);
		}
	}

	va_end(list);

	printf("\n");
}
