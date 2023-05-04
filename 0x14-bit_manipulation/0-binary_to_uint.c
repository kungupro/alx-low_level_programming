#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to the first value of the string
 *
 * Return: converved number, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int j;

	if (b == NULL)
	{
		return (0);
	}
	for (j = 0 ; b[j] ; j++)
	{
		if (b[j] == '0')
		{
			res = res << 1;
		}
		else if (b[j] == '1')
		{
			res = res << 1 | 1;
		}
		else
		{
			return (0);
		}

	}
	return (res);
}
