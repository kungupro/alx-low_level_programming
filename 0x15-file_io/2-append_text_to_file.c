#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends a text to the end of a file
 * @filename: file ane argument
 * @text_content: text content argument
 *
 * Return: 1 whwn succesful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fclose(fp);
		return (-1);
	}
	fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (-1);
	}
	fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);


}
