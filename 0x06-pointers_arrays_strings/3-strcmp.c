#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to b compared
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-15);
		else if (*s1 > *s2)
			return (15);
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (-15);
	else
		return (15);
}
