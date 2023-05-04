#include "main.h"

/**
 * get_endianness -  checks the endianness
 *
 * Return: 1 for little, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *endian_check = (char *)&j;

	return (*endian_check);
}
