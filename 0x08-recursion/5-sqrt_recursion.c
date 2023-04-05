#include "main.h"

/**
 * check - checks for the square root of a number
 *
 * @i: integer i
 * @j: integer j
 *
 * Return: integer
 */

int check(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (check(i + 1, j));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer to find
 * Return: -1 or natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

