#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: singly linked list passed
 *
 * Return:no of elements printed
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	for (; h != NULL; h = h->next)
	{
		elements++;
	}
	return (elements);
}
