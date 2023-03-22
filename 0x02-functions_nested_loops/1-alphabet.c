#include "main.c"

/**
 * print_alphabet - This is the function that prints alphabets in lower case.
 *
 * Return: Always zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
