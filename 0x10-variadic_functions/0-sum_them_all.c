#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum upon success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	j = 0;
	while (j < n)
	{
		sum += va_arg(args, int);
		j++;
	}
	va_end(args);
	return (sum);
}
