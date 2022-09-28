#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: meory area to copy to
 * @src: memory area to copy from
 * @n: no of bytes to be optimized
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
