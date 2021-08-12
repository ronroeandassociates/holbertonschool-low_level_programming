#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string of stuff
 *
 * Return: converted number, 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num1 = 1;
	unsigned int num0 = 0;
	int c;
	unsigned int len;

	len = strlen(b);
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			num1 += num0;
		}
		num1 *= 2;
	}
	return (num0);
}
