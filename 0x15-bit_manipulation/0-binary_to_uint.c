include "holberton.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string of stuff
 *
 * Return: converted number, 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (b == NULL)
	{
		return (0);
	}

	for (num = 0, *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		if (*b == '1')
			num = (num << 1) | 1;
	}
	else if (*b == '0')
	{
		num <<= 1;
	}
	else
	{
		break;
	}
	return (num);
}
