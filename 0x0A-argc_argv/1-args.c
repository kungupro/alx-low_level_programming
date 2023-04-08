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
	(void)argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
