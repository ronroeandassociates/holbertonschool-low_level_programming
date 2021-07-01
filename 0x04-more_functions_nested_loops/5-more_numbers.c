#include "holberton.h"
/**
* more_numbers - print numbers 0 from 14 in 10 times.
* Return: None.
*/
void more_numbers(void)
{
	int x, c;

	for (x = 0; x < 10; x++)
	{
		for (c = 0; c <= 14; c++)
		{
		if (c > 9)
			_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
