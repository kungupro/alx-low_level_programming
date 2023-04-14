#include "main.h"

/**
 * array_range - Entry point
 *
 * @min: The minimum point of the array;
 * @max: The maximum point of the array
 *
 * Return: - newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int k;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (k = 0 ; k < size ; k++)
		array[k] = min + k;
	return (array);

}
