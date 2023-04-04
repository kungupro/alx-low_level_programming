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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	return (0);
}
