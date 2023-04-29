#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer to the list listint_t
 * Return: - Total number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}
	return (total);
}
