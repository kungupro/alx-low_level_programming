#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: the file to be created
 * @text_content: paramenter that contain the content
 *
 * Return: 1 upon success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bw;
	int str_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		str_len = strlen(text_content);
		bw = write(fd, text_content, str_len);

		if (bw != str_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
