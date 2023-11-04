#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - main function
 * Function that multiplies two positive numbers.
 * @argc: int argc.
 * @argv: char argv array.
 * Author - Nedu Robert
 * Return: Returns void.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit (98);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}

	return (0);
}
