#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit
 *
 * @c: checks input of a function
 *
 * Return: 1 if 'c' is a digit otherwise always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
