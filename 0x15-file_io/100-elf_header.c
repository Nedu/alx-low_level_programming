#include "main.h"

/**
 * main - cp entry
 * Program that copies the content of a file to another file.
 * @argc: name of the file.
 * @argv: NULL terminated string to write to the file.
 * Author - Nedu Robert
 * Return: Returns
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    int open_file;

	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
	{
		dprintf(STDERR_FILENO, "Error opening file: %s\n", argv[1]);
		exit(98);
	}
}
