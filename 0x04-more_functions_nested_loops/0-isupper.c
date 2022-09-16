#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: checks input of a function
 *
 * Return: 1 if 'c' is uppercase otherwise always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
