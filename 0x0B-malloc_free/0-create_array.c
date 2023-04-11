#include "main.h"

/**
 * *create_array - a function that creates an array of chars
 *
 * @size: size of the array to be created
 * @c: character with which the array is to be initialized
 *
 * Return: array upon success
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	if (size == 0)
	{
		return (0);
	}
	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j < size ; j++)
	{
		str[j] = c;
	}
	return (str);
}
