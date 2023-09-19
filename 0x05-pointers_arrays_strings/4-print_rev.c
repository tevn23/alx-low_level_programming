#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be inputted
 *
 * Return: void
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
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
