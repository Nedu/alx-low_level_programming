#include "function_pointers.h"

/**
 * array_iterator - If you spend too much time thinking about a thing,
 * you'll never get it done
 * Function that executes a function given as a parameter
 * on each element of an array.
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: Returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;
    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
