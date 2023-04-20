#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: first parameter
 * @n: number of parameters
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list args;

	va_start(args, n);

	j = 0;
	while (j < n)
	{
		printf("%d", va_arg(args, int));

		if (j < n - 1 && separator != NULL)
		{
			printf("%s", separator);

		}
		j++;
	}
	va_end(args);
	printf("\n");
}
