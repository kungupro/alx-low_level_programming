#include "main.h"
/**
 * string_nconcat -  a function that concatenates two strings
 *
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: Number of bytes from s2
 *
 * Return: Results pointer string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1, len2, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0 ; s1[len1] != '\0' ; len1++)
	{
	}
	for (len2 = 0 ; s2[len2] != '\0' ; len2++)
	{
	}
	if (n >= len2)
	{
		n = len2;
	}
	res = malloc(sizeof(char) * (len1 + n + 1));

	if (res == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j < (len1 + n) ; j++)
	{
		if (j < len1)
			res[j] = s1[j];
		else
			res[j] = s2[j - len1];
	}
	res[j] = '\0';

	return (res);
}
