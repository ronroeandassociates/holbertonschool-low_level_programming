#include "holberton.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to determine binary index of
 * @index: index to get bit
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_index;

	max_index = sizeof(unsigned long int) * 8;
	if (index > max_index)
		return (-1);

	n = n >> index;

	if (n & 1)
		return (1);
	else
		return (0);
}
