#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with specific
 * char
 * @size: magnitude of array
 * @c: character to input
 * Return: NULL if size = 0
 * returns pointer to the array or to NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
