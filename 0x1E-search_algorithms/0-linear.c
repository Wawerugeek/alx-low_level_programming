#include "search_algos.h"

/**
 * linear_search - Function to search for a value in an array.
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: Value to search for.
 *
 * Return: -1 if element not found, index of the element otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
