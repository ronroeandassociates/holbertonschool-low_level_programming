#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @destination: dest positions
 * @source: source position
 * @n: size of bytes
 * Return: char
 */

char *_memcpy(char *destination, char *source, unsigned int n)
{
		unsigned int i = 0;
		unsigned int j = 0;

		while (i < n)
		{
		*(destination + i) = *(source + j);
		i += 1;
		j += 1;
		}
	return (destination);
}
