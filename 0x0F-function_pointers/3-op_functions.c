#include "3-calc.h"

/**
 * op_add - returns the sum of 2 numbers
 * @a: first inputted integer
 * @b: second inputted integer
 *
 * Return: sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of 2 numbers
 * @a: first inputted integer
 * @b: second integers
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: product.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remainder of division
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
