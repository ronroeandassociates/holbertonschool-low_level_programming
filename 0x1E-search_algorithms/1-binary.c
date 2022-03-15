#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: return the index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, mid;

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (mid = l; mid < r; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
