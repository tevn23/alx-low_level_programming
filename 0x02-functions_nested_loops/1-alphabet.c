#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

