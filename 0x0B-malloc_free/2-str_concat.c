#include "main.h"

/**
 * str_concat - main function
 *
 * @s1: input 1
 * @s2: input 2
 *
 * Return: always zero
 */

char *str_concat(char *s1, char *s2)
{
	char *destn;
	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;

	for (a = 0 ; s1[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; s2[b] != '\0'; b++)
	{
	}
	destn = malloc(sizeof(char) * (a + b + 1));

	if (destn == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; s1[a] != '\0' ; a++)
	{
		destn[a] = s1[a];
		a++;
	}
	for (b = 0 ; s2[b] != '\0' ; b++)
	{
		destn[a] = s2[b];
		b++;
	}
	destn[a] = '\0';
	return (destn);
}

