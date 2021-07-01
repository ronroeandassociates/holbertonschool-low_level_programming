#include "holberton.h"
/**
*print_number - print numbers
*@n: takes in an integer
*/
void print_number(int n)
{
	unsigned int n1, n2, c, v = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	n1 = n;
	n2 = n1;
	if (n1 > 9)
	{
		while (n1 >= 10)
		{
			v = v * 10;
			n1 = n1 / 10;
		}
	_putchar((n2 / v) + '0');
			v = v / 10;

			for (c = v; c >= 1; c = c / 10)
				_putchar((n2 / c) % 10 + '0');
	}
	else
			_putchar(n1 + '0');
}
