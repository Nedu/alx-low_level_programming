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
	int i, j, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		i = atoi(argv[1]);
		operator = get_op_func(argv[2]);
		j = atoi(argv[3]);

		if (!operator)
		{
			printf("Error\n");
			exit(99);
		}
		result = operator(i, j);

		printf("%d\n", result);
		return (0);
	}
}
