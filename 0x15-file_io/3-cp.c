#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: arguments as strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, stat_1, stat_2;
	char buffer[MAXSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_2 == -1)
		dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		stat_1 = read(fd_1, buffer, MAXSIZE);
		if (stat_1 == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (stat_1 > 0)
		{
			stat_2 = write(fd_2, buffer, (ssize_t) stat_1);
			if (stat_2 == -1)
				dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	} while (stat_1 > 0);

	stat_1 = close(fd_1);
	if (stat_1 == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_1), exit(100);

	stat_2 = close(fd_2);
	if (stat_2 == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_2), exit(100);

	return (0);
}
