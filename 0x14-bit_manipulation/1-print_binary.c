#include <stdio.h>
#include "main.h"

/**
 * print_binary - 1
 * Function that prints the binary representation of a number.
 * @n: number to be converted
 * Author - Nedu Robert
 * Return: Returns void.
 */
void print_binary(unsigned long int n)
{
	int j, binaryArr[32];
	int i = 0;

	if (n == 0) 
	{
		printf("0");
		return;
	}
	
	
	while (n > 0) 
	{
		binaryArr[i] = n & 1;
		n = n >> 1;
		i++;
	}
	
	for (j = i - 1; j >= 0; j--) 
	{
		printf("%d", binaryArr[j]);
	}
}
