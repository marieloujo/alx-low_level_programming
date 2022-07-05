#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it t
 * the POSIX standard output
 * @filename: path of file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t read_letters, write_letters;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_letters = read(file, buffer, letters);
	if (read_letters == -1)
		return (0);

	write_letters = write(STDOUT_FILENO, buffer, read_letters);

	if (write_letters == -1 || read_letters != write_letters)
		return (0);

	free(buffer);
	close(file);

	return (write_letters);
}
