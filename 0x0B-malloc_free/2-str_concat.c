#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to be concactenated
 * @s2: string to be appended to s1
 *
 * Return: On success, pointer to a newly allocated space in memory
 * containing contents of s1, followed by s2 and null terminated
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len;
	char *s1_start;

	len = _strlen(s1) + _strlen(s2);

	if (len == 0)
		return (NULL);

	s1 = malloc(sizeof(char) * len);

	if (s1 == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		s1++;
	}

        for (; *s2 != '\0'; s2++, s1++)
	{
		*s1 = *s2;
	}
	
	*s1 = '\0';
	
	return (s1_start);
}
