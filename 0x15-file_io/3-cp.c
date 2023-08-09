#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *doc);
void close_file(int file);

/**
 * create_buffer - allocate 1024 bytes to a buffer
 * @doc: name of the file buffer is storing chars into
 * Return: a pointer to the newly-allocared buffer
 **/
char *create_buffer(char *doc)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", doc);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - closes file discriptors
 * @file: file discriptor to be closed
 **/
void close_file(int file)
{
	int a;

	a = close(file);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close file %d\n", file);
		exit(100);
	}
}
/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Return 0 on success
 *
