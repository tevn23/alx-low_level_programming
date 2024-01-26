#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: Pointer to head of the node
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
