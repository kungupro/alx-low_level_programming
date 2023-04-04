#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: pointer to the beginning haystack
 * @needle: pointer to the beginning of needle
 *
 * Return: haystack if succesful, NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	size_t len2  = strlen(needle);

	if (len2 == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, len2) == 0)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
