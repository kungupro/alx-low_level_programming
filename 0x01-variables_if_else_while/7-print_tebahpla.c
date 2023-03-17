#include <stdio.h>

/**
 * main -The main input
 *
 * Return: Always zero
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
