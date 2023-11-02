#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * Program that adds positive numbers.
 * @argc: int argc.
 * @argv: char argv array.
 * Author - Nedu Robert
 * Return: Returns 1 if one of the number contains symbols that are not digits
 * Otherwise return 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if(!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d", sum);
	}

	return (0);
}
