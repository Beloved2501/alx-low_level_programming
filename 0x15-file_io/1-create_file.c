#include "main.h"

/**
 * create_file - function that create a file with the given filename and
 * writes the text content to it.
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 * Return: Return 1 on sucess, -1 if failed.
 **/
int create_file(const char *filename, char *text_content)
{
	int file, byte_write, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file = open(filename, O_CTEAT | O_RDWR | O_TRUNC, 0600);
	byte_write = write(file, text_content, len);

	if (file == -1 || byte_write == -1)
		return (-1);

	close(file);

	return (1);
}
