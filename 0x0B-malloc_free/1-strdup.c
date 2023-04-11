#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 *
 * @str: - the input string
 *
 * Return: dup upon successful
 */

char *_strdup(char *str)
{
	char *dup;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0' ; i++)
	{
		dup = malloc(sizeof(char) * (i + 1));
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; str[j] ; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
