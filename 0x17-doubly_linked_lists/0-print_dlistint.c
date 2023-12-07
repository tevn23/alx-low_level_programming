#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: Pointer to node
 *
 * Return: no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d", h->n);

		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}

