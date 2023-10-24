#include "lists.h"

/**
 * listint_len - returns the no. of elements in a linked listint_t list
 * @h: singly linked list passed
 *
 * Return: no.of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
