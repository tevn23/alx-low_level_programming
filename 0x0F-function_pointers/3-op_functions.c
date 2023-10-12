#include "3-calc.h"
#include <stdio.h>

/**
 * opp_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */

int opp_add(int a, int b)
{
	return (a +b);
}

/**
 * opp_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */

int op_sub
{
	return (a - b);
}

/**
 * opp_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * opp_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Math Error\n");
		exit (100);
	}
	return (a / b);
}

/**
 * opp_mod - finds remainder of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Math Error\n");
		exit(100);
	}
	return (a % b);
}

