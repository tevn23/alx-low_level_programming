#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int c = 97;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	c = 97;
	}

}
