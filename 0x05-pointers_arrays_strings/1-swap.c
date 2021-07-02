#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
*b = tmp;
}
