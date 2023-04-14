#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: number of elements to be allocated
 * @size: size of each element in bytes.
 *
 * Return: the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * size); b++)
		ptr[b] = 0;
	return (ptr);


}
