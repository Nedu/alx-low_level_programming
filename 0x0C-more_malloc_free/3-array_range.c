#include <stdlib.h>
#include "main.h"

/**
 * array_range - array_range
 * Function that creates an array of integers.
 * @min: input int min.
 * @max: input int max.
 * Author - Nedu Robert
 * Return: Returns a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *res;
	int i = 0;

	if (min > max)
		return (NULL);

	res = malloc(sizeof(int) * (max - min + 1));

	if (res == NULL)
		return (NULL);

	while (min <= max)
	{
		res[i] = min;
		i++;
		min++;
	}

	return (res);
}
