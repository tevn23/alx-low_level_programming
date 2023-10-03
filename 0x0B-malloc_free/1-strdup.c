#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: NULL if str == NULL
 * On success return pointer to the duplicated string
 * NULL if malloc fails
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	unsigned int size;
	
	if (str == NULL)
		return (NULL);

	size = sizeof(str);
	dup = malloc(sizeof(char) * size - 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup[i] = str[i];

	return (dup);

	free (dup);
}

		
