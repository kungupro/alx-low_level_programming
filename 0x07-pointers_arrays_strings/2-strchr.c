#include "main.h"
/**
 * _strchr - Locates character
 *
 * @s: specifies the pointer
 * @c: character to be located
 *
 * Return: s when found, NULL when not found
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0 ; s[j] >= '\0' ; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);

}
