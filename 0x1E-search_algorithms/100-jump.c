#include "search_algos.h"
#include <math.h>

/**
 * jump_search - find a value using jump search algoirithm
 * @array: pointer to the first elemen of the array
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr = 0;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (curr < size && value > array[curr])
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	if (curr >= size)
		curr = size - 1;

	for (i = prev; i <= curr && array[i] <= value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
