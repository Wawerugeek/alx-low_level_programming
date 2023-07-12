#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * @array: Pointer to the first element in the search array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of the value if found, or -1 if not found
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, prev = 0, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	for (; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += step;
	}
	printf("Value found between indexes[%lu] and [%lu]\n", i, prev);

	prev = prev < size - 1 ? prev : size - 1;

	for (; i < prev && array[i] < value; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
