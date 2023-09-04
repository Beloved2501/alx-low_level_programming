#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of the file
 * @text_content: the context to add at the end of the file
 * Return: Return 1 on success, -1 if failed
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fm, bw, len;

	if (!filename)
		return (-1);
	fm = open(filename, O_WRONLY | O_APPEND);

	if (fm == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		bw = write(fm, text_content, len);

		if (bw == -1)
			return (-1);
	}
	close(fm);

	return (1);
}
