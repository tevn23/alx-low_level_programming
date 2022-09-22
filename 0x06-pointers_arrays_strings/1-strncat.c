#include "main.h"

/**
 * _strncat - concatenates two strings with inputted number of bytes
 * @dest: string to be added upon
 * @src: string to be completed at the end of dest
 * @n: index parameter to be compared to index
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
