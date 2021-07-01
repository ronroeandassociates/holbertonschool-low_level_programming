#include "holberton.h"
/**
* print_most_numbers - program that writes the numbers from 0-9
* don't print 2 and 4
* Return: None.
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	if (c == '2' || c == '4')
	continue;
	else
	_putchar(c);
	_putchar('\n');
}
