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
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
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
	strcpy(res, s1);
	strncat(res, s2, n);

	return (res);
}
