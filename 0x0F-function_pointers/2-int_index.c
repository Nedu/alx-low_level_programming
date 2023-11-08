#include "function_pointers.h"

/**
 * int_index - To hell with circumstances; I create opportunities
 * Function that searches for an integer.
 * @array: array to iterate
 * @size: size of the array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: Returns the index of the first element for which the
 * cmp function does not return 0
 * If no element matches, or if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
