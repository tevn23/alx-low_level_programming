#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: char to be initialized
 *
 * Return: NULL if size = 0, pointer to an array on success and NULL if fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
