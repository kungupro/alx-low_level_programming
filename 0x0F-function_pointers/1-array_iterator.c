#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: array to be executed
 * @size: - size of the array
 * @action: - pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	j = 0;
	while (j < size)
	{
		action(array[j]);
		j++;
	}
}
