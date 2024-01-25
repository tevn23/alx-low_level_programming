#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: Pointer to head of the list
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
