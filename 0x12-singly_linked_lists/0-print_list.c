#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: list to be printed
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_printed = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes_printed++;
	}
	return (nodes_printed);
}



