#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Float like a butterfly, sting like a bee
 * Function that converts a binary number to an unsigned int.
 * @b: input char b.
 * Author - Nedu Robert
 * Return: Returns the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result <<= 1;
		result += b[i] - '0';
	}
	return (result);
}
