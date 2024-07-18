#include "search_algos.h"
/**
 * binary_search - searches for a value using binary search
 * @array: pointer to the first element to search in
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: index where vaue is located, or -1 if not found or array is NULL
 */

int binary_search_2(int *array, size_t left, size_t right, int value)
{
    size_t i, mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return (mid);
        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * 
 * Return: first index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t left, right;

    if (array == NULL || size == 0)
        return (-1);

    if (array[0] == value)
        return (0);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    left = bound / 2;
    if (bound < size)
        right = bound;
    else
        right = size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);
    return binary_search_2(array, left, right, value);
}
