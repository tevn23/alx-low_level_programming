#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: Pointer to pointer to the head of the list
 *
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t i = 0;

	slow = *h;
	fast = *h;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;

			while (slow != fast)
			{
				temp = slow;
				slow = slow->next;
				free(temp);
				i++;
			}

			temp = slow->next;
			free(slow);
			i++;

			*h = temp;
			return (i);
		}
	}

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		i++;
	}
	return (i);
}
