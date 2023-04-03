#include "main.h"

/**
 * _memset - function that  fill a block of memory with a specific value
 *
 * @s: Pointer to the memory block
 * @b: the value to fill with
 * @n: number of bytes
 *
 * Return: always s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
