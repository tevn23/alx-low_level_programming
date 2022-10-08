#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate
 * @string: string
 *
 * Return: the lenth of the string
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)

		return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: no of bytes
 *
 * Return: char pointer to newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int num, len, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = '\0';
	ptr[i + j] = '\0';

	return (ptr);
}
