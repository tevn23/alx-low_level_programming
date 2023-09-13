#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int first_digit;
	int second_digit;
	int third_digit;
	int fourth_digit;

	for (first_digit = 0; first_digit <= 2; first_digit++)
		for (second_digit = 0; second_digit <= 3; second_digit++)
			for (third_digit = 0; third_digit <= 5; third_digit++)
				for(fourth_digit = 0; fourth_digit <= 9; fourth_digit++)
				{
					_putchar(first_digit + '0');
					_putchar(second_digit + '0');
					_putchar(':');
					_putchar(third_digit + '0');
					_putchar(fourth_digit + '0');
					_putchar('\n');
				}
}
