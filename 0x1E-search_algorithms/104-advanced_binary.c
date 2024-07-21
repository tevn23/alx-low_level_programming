#include "search_algos.h"

/**
 * print_array - Prints the current subarray being searched.
 *
 * @array: Pointer to the first element of the subarray.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * recursive_binary - Recursively searches for a value in a sorted array.
 *
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	mid = low + (high - low) / 2;

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);
	else if (array[mid] >= value)
		return (recursive_binary(array, low, mid, value));
	return (recursive_binary(array, mid + 1, high, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using an advanced binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
