#include <stdio.h>

/**
 * main - The main output
 *
 * Return: - Always zero
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i + j < 197)
			{
				putchar('.');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
