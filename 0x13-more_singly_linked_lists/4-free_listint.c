#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
