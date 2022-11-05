#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument input
 * @argv: argument input
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
