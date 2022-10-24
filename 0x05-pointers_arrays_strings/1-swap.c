#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first input parameter
 * @b: second input parameter
 *
 * Return: Returns void
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
