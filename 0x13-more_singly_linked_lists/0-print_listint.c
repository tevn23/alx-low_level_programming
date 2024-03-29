#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: list to be printed
 *
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

