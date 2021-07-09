#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *initial, *final;
	int aux = 0;

	initial = a;
	final = a;
	n -= 1;
	while (i < n)
	i += 1;
	while (j <= i)
	{
	aux = *(initial + j);
	*(initial + j) = *(final + i);
	*(final + i) = aux;
	j++;
	i--;
	}
}
