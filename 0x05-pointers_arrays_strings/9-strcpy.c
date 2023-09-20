#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed by dest
 * @dest: pointer to buffer
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

int _strlen(char *src);

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; j < _strlen(src) + 1; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

/**
 * _strlen - returns length of a string
 * @s: string to be inputted
 *
 * Return: length of string
 */

int _strlen(char *src)
{
        int i = 0;

        while (src[i] != '\0')
                i++;

        return (i);
}
