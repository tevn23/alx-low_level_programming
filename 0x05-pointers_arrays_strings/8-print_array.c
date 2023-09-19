#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers and a new line
 * @a: Pointer to array
 * @n: no of array elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
		printf(", %d", a[i]);

	printf("\n");
}
