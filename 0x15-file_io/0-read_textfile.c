#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile -  reads a text file and prints it
 * @filename: - file to be printed
 * @letters: size of the string
 *
 * Return: the number of bytes read, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	ssize_t br;
	ssize_t bw;


	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters + 1));

	br = read(fd, buff, letters);
	bw = write(STDOUT_FILENO, buff, br);


	free(buff);
	close(fd);
	return (bw);
}
