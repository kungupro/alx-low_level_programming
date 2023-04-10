#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 *
 * @s: the main string
 * @accept: string that contain characters
 *
 * Return: s if successful, 0 otherwise
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *a = accept;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (s[i] == a[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
