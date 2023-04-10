#include "main.h"

/**
 * _abs - prints absolute value integer
 *
 * @a: - parameter to be printed
 *
 * Return: Always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = (a);
	return (a);

}
