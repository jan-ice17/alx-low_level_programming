#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the linear search algorithm.
 *
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the first occurrence of the value in the array, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t j;

    if (array == NULL)
    {
        return (-1);
    }

    for (j = 0; j < size; j++)
    {
        printf("Value checked array[%li] = [%i]\n", j, array[j]);
        if (array[j] == value)
        {
            return (j);
        }
    }
    return (-1);
}

