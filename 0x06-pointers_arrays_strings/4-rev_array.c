#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: no of elements of an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = sizeof(a) / sizeof(int), n = 0; i <= n; n++, i--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
