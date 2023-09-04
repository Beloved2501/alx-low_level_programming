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
	int fm, bw, len;

	if (!filename)
		return (-1);

	fm = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fm == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;
	bw = write(fm, text_content, len);

	if (bw == -1)
		return (-1);
	close(fm);

	return (1);
}
