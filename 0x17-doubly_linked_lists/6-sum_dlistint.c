#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: Pointer to head of the list
 *
 * Return: Sum of all data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}

	if (head != NULL)
		return (sum);

	return (0);
}
