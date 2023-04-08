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
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);


}
