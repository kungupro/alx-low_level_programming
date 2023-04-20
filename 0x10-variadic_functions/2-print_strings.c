#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: first parameter
 *
 * @n: number of elements
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list args;
	char *str;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && k < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);

}
