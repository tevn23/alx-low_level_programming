#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int r;
	int c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			int p = r * c;

			if (p < 10)
				_putchar((p % 10) + '0');
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

