#include "main.h"

/**
 * reverse_array - I am a kind of paranoid in reverse.
 * I suspect people of plotting to make me happy
 * Function that reverses the content of an array of integers.
 * @a: pointer to int a.
 * @n: int n.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
