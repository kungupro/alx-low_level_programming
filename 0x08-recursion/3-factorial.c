#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number of integers
 *
 * Return: -1, 1, and n * fatorial(n - 1)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
