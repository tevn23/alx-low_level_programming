#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended
 * @src: string to append to dest
 *
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
		dest++;

	for (; *src != '\0'; src++, dest++)
	{
		*dest = *src;
	}

	*dest = '\0';

	return (dest_start);
}
