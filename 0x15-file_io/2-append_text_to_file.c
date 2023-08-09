#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of the file
 * @text_content: the context to add at the end of the file
 * Return: Return 1 on success, -1 if failed
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int j, byte_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	j = open(filename, O_WRONLY | O_APPEND);
	byte_write = write(j, text_content, len);
	if (j == -1 || byte_write == -1)
		return (-1);

	close(j);
	return (1);
}
