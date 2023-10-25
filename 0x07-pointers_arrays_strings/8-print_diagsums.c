#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - The line of life is a ragged
 * diagonal between duty and desire
 * Function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer to int a
 * @size: int input
 * Author - Nedu Robert
 * Return: Returns void
 */
void print_diagsums(int *a, int size)
{
	int i;
    unsigned int j = 0;
    unsigned int k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size * i) + i];
		k += a[(size * (i + 1)) - (i + 1)];
	}

    printf("%d, %d\n", j, k);
}
