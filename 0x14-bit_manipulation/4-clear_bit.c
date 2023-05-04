#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: totoal number of bits
 * @index: the position of the bit to  be set
 *
 * Return: i on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1ul << index);

	return (1);
}
