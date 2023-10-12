#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array of integer
 * @size: number of array elements
 * @cmp: function pointer to comparison function
 *
 * Return: index of first element for which cmp function does not return 0
 * if no element matches -1
 * if size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
