#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer of the head of the list
 * @index: index to delete node at
 *
 * Return: 1 on success, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *back;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	back = NULL;

	while (temp != NULL && i < index)
	{
		back = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	back->next = temp->next;
	free(temp);

	return (1);
}
