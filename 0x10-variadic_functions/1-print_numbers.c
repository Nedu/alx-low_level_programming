#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - To be is to be the value of a variable
 * Function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of arguments
 *
 * Author - Nedu Robert
 * Return: Returns void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(list, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(list, int));
		}
	}

	va_end(list);

	printf("\n");
}
