#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int j = size;

	for (i = 0; i < j; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
