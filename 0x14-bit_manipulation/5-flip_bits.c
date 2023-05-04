#include "main.h"

/**
 * flip_bits - returns the number of bits you would need\
 *  to flip to get from one number to another
 *  @n: the first number
 *  @m: the second number
 *
 *  Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int excl = n ^ m;
	unsigned long int curr;
	int j, num = 0;

	for (j = 63; j >= 0; j--)
	{
		curr = excl >> j;

		if (curr & 1)
		{
			num++;
		}
	}
	return (num);
}
