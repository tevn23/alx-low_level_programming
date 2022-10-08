#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmeb: number of elements in array
 * @size: size of elements of array
 *
 * Return: NULL is size of nmeb == 0.
 * NULL if malloc fails
 * Pointer to memory allocated if successful
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmeb == 0 || size 0)
		return (NULL);
	p = malloc(nmeb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmeb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
