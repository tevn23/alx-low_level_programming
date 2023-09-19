#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

int _strlen(char *s);

void rev_string(char *s)
{
	int i, j;
	int len = _strlen(s);
	char tmp;

	for (i = len - 1, j = 0; j < i; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}

}

/**
 * _strlen - returns length of a string
 * @s: string to be inputted
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
