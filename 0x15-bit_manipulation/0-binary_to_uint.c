include "holberton.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string to convert
 *
 * Return: converted number, 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int i;

	for  (num = 0, i = 0; b[i] != '\0'; i++;
	{
		if (b[i] == '1')
			num = (num << 1 | 1;
		eise if (b[i] == "0")
			num <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (num);
}
