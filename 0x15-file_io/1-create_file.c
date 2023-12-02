#include "main.h"

/**
 * create_file - Under the snow
 * Function that creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Author - Nedu Robert
 * Return: Returns 1 on success,
 * -1 on failure (file can not be created,
 * file can not be written, write “fails”, filename is NULL)
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);
	return (1);
}
