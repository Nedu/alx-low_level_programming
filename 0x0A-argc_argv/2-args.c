#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * Program that prints all arguments it receives.
 * @argc: int argc.
 * @argv: char argv array.
 * Author - Nedu Robert
 * Return: Returns 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
