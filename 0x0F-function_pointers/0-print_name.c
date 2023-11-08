#include "function_pointers.h"

/**
 * print_name - What's my name
 * Function that prints a name.
 * @name: The name to pass to the function to print
 * @f: pointer to function
 *
 * Return: Returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
