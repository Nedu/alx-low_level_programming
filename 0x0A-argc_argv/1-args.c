#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * Program that prints the number of arguments passed into it.
 * @argc: int argc.
 * @argv: char argv array.
 * Author - Nedu Robert
 * Return: Returns 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
