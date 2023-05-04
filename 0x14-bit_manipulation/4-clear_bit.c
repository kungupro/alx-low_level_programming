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
	unsigned long int george;

	if (index > 63)
		return (-1);

	george = ~(1ul << index);
	
	*n &= george;

	return (1);
}
