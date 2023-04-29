#include "lists.h"

/**
 * print_listint - function to print all elements
 * @h: - pointer to the list
 * Return: Return the number of elements
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t num;
	const listint_t *curr = h;

	for (num = 0 ; curr ; num++)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	return (num);

}
