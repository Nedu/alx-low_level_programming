#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * Program that prints minimum number number of coins
 * to make change for an amount of money.
 * @argc: int argc.
 * @argv: char argv array.
 * Author - Nedu Robert
 * Return: Returns 1 if the number of arguments passed to your program
 * is not exactly 1, Otherwise return 0.
 */
int main(int argc, char *argv[])
{
	int i, input;
    int min = 0;
    int coins[] = { 25, 10, 5, 2, 1 };

	if (argc != 2)
	{
		printf("Error\n");
        return (1);
	}
	else
	{
        input = atoi(argv[1]);
        if (input < 0)
        {
            printf("0\n");
        }
        else
        {
            for (i = 0; i < 5; i++)
            {
                while (input >= coins[i])
                {
                    min++;
                    input -= coins[i];
                }
            }

        }
		printf("%d\n", min);
	}

	return (0);
}
