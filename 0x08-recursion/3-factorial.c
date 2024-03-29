#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number passed
 *
 * Return: factorial of a given number
 * -1 if n is less than 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return ((n * factorial(n - 1)));
}
