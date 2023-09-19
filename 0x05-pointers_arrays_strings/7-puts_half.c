#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: String to be printed
 *
 * Return: void
 */

int _strlen(char *str);

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
 * _strlen - returns the length of a string
 * @str: string to be calculated
 *
 * Return: void
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
