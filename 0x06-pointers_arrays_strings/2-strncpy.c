#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: no of bytes
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	for (; *src != '\0' && n > 0; src++, dest++, n--)
	{
		*dest = *src;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}
