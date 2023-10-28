#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * Program that multiplies two numbers.
 * @argc: int argc.
 * @argv: char argv array.
 * Author - Nedu Robert
 * Return: Returns 1 if the program does not receive two arguments
 * Otherwise return 0.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}

	return (0);
}
