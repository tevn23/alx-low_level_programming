#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: String to be printed
 *
 * Return: void
 */

int _strlen(char *s);

void puts_half(char *str)
{
	int i;
	int len = _strlen(str) + 1;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
	else
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
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
