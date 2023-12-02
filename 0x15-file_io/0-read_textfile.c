#include "main.h"

/**
 * read_textfile - Tread lightly, she is near
 * Function that reads a text file and prints it to the POSIX standard output.
 * @filename: char filename.
 * @letters: number of letters it should read and print
 * Author - Nedu Robert
 * Return: Returns the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char *) * letters);
	ssize_t open_file, result;

	if (filename == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		return (0);
	}

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}

	result = read(open_file, buffer, letters);
	write(STDOUT_FILENO, buffer, result);

	free(buffer);
	close(open_file);
	return (result);
}
