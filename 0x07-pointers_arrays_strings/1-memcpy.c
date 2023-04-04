#include "main.h"

/**
 * _memcpy - The function that copies memory area.
 *
 * @dest: The destination
 * @src: The source
 * @n: Number of bytes to be copied
 * Return: dest upon successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0 ; i < n ; i++)
	{
		d[i] = s[i];
	}
	return (d);
}
