#include <stdio.h>

/**
 * array_iterator - executes function given as a parameter on each element of
 * of an array
 * @array: array or list of elements
 * @size: the size of the array
 * @action: action of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
