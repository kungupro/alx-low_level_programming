#include "main.h"

/**
 * check_num - checks if there is a digit
 * @str: string of array
 *
 * Return: 0 upon success
 */

int check_num(char *str)
{
	unsigned int count;

	for (count = 0 ; count < strlen(str) ; count++)
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - this is the main function
 *
 * @argc: - input that counts the arguments
 * @argv: input that represent the arguments
 *
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	for (count = 1 ; count < argc ; count++)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;

		}
		else
		{
			printf("Error\n");
			return (1);
		}


	}
	printf("%d\n", sum);
	return (0);
}
