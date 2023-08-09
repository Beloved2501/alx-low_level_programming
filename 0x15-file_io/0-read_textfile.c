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
	int file;
	ssize_t byte_write;
	ssize_t byte_read;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	byte_read = read(file, buff, letters);
	byte_write = write(STDOUT_FILEN0, buff, byte_read);

	close(file);
	free(buff);
	return (byte_write);
}
