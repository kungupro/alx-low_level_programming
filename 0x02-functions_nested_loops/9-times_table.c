#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			product = i * j;
			if (j == 0)
			{
				printf("%d", product);
			}	
			else
			{
				printf(", %d", product);
			}
		}
		printf("\n");
	}
}
