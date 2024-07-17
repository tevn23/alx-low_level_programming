#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 * @array: pointer to the first element to search in
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: index where vaue is located, or -1 if not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, h, m;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i < h)
				printf(", ");
		}
		printf("\n");

		m = (l + h) / 2;

		if (value == array[m])
			return (m);
		else if (value > array[m])
		{
			l = m + 1;
		}
		else
			h = m - 1;
	}
	return (-1);
}
