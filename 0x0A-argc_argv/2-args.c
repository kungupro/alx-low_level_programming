#include "main.h"

/**
 * main - the main function
 *
 * @argc: input that represents number of arguments
 * @argv: input that represents all arguments
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
