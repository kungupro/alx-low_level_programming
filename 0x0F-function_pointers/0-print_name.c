#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: pointer to the function
 * Return: Nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
