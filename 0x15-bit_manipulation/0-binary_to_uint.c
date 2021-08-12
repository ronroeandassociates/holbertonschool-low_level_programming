#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string to convert
 *
 * Return: converted number, 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		num = num << 1;
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			num = num ^ 1;
		b++;
	}
	return (num);
}
