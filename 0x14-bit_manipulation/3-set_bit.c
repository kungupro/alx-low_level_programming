#include "main.h"

/**
 * set_bit - function that set bit to 1
 * @n: number of bits
 * @index: the position of the bit
 *
 * Return: 1 upon successs or 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1ul << index);

	return (1);
}
