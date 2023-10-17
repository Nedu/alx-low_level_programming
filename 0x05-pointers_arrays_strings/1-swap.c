#include "main.h"

/**
 * swap_int - Don't swap horses in crossing a stream
 * Function that swaps the values of two integers.
 * @a: pointer to integer a.
 * @b: pointer to integer b.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
