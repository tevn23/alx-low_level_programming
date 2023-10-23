#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no of bytes allowed
 *
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != 0)
		dest++;

	for (; *src != '\0' && n > 0; src++, dest++, n--)
		*dest = *src;
	*dest = '\0';
	return (dest_start);
}


