#include "search_algos.h"

/**
*linear_search - function to search a value in arr
* @array: pointer to the first element
* @size: the number of elements of the array
* @value: value to search for
*Return: -1 if element not found : index of element
**/

int linear_search(int *array, size_t size, int value)
{
    int i;
    if (array == NULL)
        return (-1);

    for (i = 0; i <(int)size; i++ ){
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        if (value == array[i])
            return (i);
    }
    return (-1);
}