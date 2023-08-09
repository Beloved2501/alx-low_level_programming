#include "main.h"

/**
 * read_textfile - Reads a text file and print it to POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print.
 * Return: The exact number of letters read and printed or 0 if failed.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fm;
	ssize_t br;
	ssize_t bw;

	if (!filename)
		return (0);

	fm = open(filename, O_RDONLY);

	if (fm == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	br = read(fm, buff, letters);
	bw = write(STDOUT_FILEN0, buff, br);

	close(fm);
	free(buff);
	return (bw);
}
