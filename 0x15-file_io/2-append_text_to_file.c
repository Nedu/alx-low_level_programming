#include "main.h"

/**
 * append_text_to_file - Speak gently, she can hear
 * Function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to write to the file.
 * Author - Nedu Robert
 * Return: Returns 1 on success,
 * -1 on failure (file can not be created,
 * file can not be written, write “fails”, filename is NULL,
 * if the file does not exist or if you do not have the required
 * permissions to write the file)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);
	return (1);
}
