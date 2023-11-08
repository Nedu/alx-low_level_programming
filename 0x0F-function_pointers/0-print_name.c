#include "function_pointers.h"

/**
 * print_name - What's my name
 * Function that prints a name.
 * @name: The name to pass to the function to print
 * @f: pointer to function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
