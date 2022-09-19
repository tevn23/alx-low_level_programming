#include "main.h"

/**
 * swap_int - swaps the value of two intergers.
 * @a: first integer
 * @b: second integer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
