#include "main.h"

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - funtion to create buffer size
 *
 * @file: fle to store chars
 * Return: newly created buffer
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "error: unable to write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - closes fd
 * @fd: file descrpripter
 *
 */
void close_file(int fd)
{
	int close_fd;

	close_fd = close(fd);

	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: failed to close fd %d\n", fd);
		exit(100);
	}
}

/**
 *  main - entry point.
 * @argc: number of arguments
 * @argv: - array of args
 *
 * Return: 0upon success
 */
int main(int argc, char *argv[])
{
	char *buff;
	int file_from;
	int file_to;
	int bytes_read;
	int bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	bytes_read = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: unable to read from file %s\n", argv[1]);
			free(buff);
			exit(98);

		}
		bytes_written = write(file_to, buff, bytes_read);

		if (file_to == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: unable to write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		bytes_read = read(file_from, buff, 1024);

	}
	while (bytes_read > 0);
	
	free(buff);
	close_file(file_from);
	close_file(file_to);
	
	return (0);

}



