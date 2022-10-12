#include "main.h"

/**
 * find_len - finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */

int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_xarray - creates an array of chars and initializes it with the 
 * character 'x'
 * @size: size of the array initialized
 *
 * Description: If space is enough, the function exits with a status of 98
 * Return: a pointer to the array
 */

char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(malloc(sizeof(char) * size);
	
	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 *
