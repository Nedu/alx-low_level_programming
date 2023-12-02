#include "main.h"

/**
 * main - cp entry
 * Program that copies the content of a file to another file.
 * @argc: name of the file.
 * @argv: NULL terminated string to write to the file.
 * Author - Nedu Robert
 * Return: Returns 1 on success,
 * -1 on failure (file can not be created,
 * file can not be written, write “fails”, filename is NULL,
 * if the file does not exist or if you do not have the required
 * permissions to write the file)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	exit(0);
}
