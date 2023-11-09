#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - To be is a to be the value of a variable
 * Function that prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Author - Nedu Robert
 * Return: Returns void.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *seperator = "";
	char *currentString;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(list, double));
					break;
				case 's':
					currentString = va_arg(list, char *);
					if (!currentString)
					{
						currentString = "(nil)";
					}
					printf("%s%s", seperator, currentString);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}
	va_end(list);

	printf("\n");
}
