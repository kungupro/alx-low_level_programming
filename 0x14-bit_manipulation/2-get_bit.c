#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number of values
 * @index: index of the bit to be returned
 *
 * Return: Value of the bit, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
