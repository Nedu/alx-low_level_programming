#include "3-calc.h"

/**
 * main - Sum of two inputs
 * @argc: int argc.
 * @argv: char argv array.
 *
 * Author - Nedu Robert
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int i;
	int (*operator)(int, int);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else
	{
		i = atoi(argv[1]);

		if (i < 0)
		{
			printf("Error\n");
			exit(2);
		}
	}
	
}
