#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 *
 * @s: parameter of the string to be checked
 * @accept:parameter containing set of characters
 *
 * Return: s if successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	char *a = accept;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (s[i] == a[j])
			{
				break;
			}
		}
		if (a[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
